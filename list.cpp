//List

//1. This is double linked list what we know freom C
//2. List is sequence container that allow non-contigeous memory location
//3. List is faster compared to other sequence container in terms of insertion, removal and moving of elements in any position provided we have 
//   the iterator of the position.


#include <iostream>
#include <list>
using namespace std;

int main ()
{

//  list::begin
//  Returns an iterator pointing to the first element in the list container.
//  Notice that, unlike member list::front, which returns a reference to the first element, 
//  this function returns a bidirectional iterator pointing to it.
  
  list<int> mylist = {75,23,65,42,13};
  cout << "mylist contains:";
  for (list<int>::iterator it=mylist.begin(); it != mylist.end(); ++it)
          cout << ' ' << *it;
  cout << '\n';

//list::front
  cout<<"Front element is: "<<mylist.front()<<endl;

//list::back
  cout<<"Last element is: "<<mylist.back()<<endl;

//list::size
  cout<<"size of mylist is: "<<mylist.size()<<endl;


//list::assign: Assigns new contents to the list container, replacing its current contents, and modifying its size accordingly.

  list<char> first={'C','+','+'};  
  list<char> second;  
  list<char>::iterator itr;  
  second.assign(first.begin(),first.end());  
  cout<<"second list contains: ";
  for(itr=second.begin();itr!=second.end();++itr)  
  cout<<*itr;  
cout<<"\n";

//list::push_front:    Inserts a new element at the beginning of the list, right before its current first element. 
//                     The content of val is copied (or moved) to the inserted element. This effectively increases the container size by one.
//list::pop_front:     Removes the first element in the list container, effectively reducing its size by one. This destroys the removed element.
//list::emplace_front: Inserts a new element at the beginning of the list, right before its current first element. 
//                     This new element is constructed in place using args as the arguments for its construction.

list<int> mylist2  (2,100);
mylist2.push_front(200);
mylist2.push_front(300);
mylist2.push_front(400);

mylist2.pop_front();

mylist2.emplace_front(500);

mylist2.remove(100);
cout<<"mylist2 contains: ";

for(auto& x: mylist2)
cout<<x<<" ";
cout<<"\n";


//list::insert: The container is extended by inserting new elements before the element at the specified position.
//              This effectively increases the list size by the amount of elements inserted.

list<int> li={1,2,3,4};  
list<int>::iterator it=li.begin();  
li.insert(it,5);
it++;           //iterator points to 3rd index, where the value is 2.
li.erase(it);

cout<<"li contains: "  ;
for(it=li.begin();it!=li.end();++it)  
cout<<*it<<" "; 
cout<<endl;

//list::splice: transfers the elements from list y into a list container at a specified position 
//              and this leads to the altering the sizes of both the list.


  list<int> li1={1,2,3,4};  
  list<int> li2={5,6,7,8};  
  list<int>::iterator t=li1.begin();  
  li1.splice(t,li2); 
  cout<<"li1 contains: "; 
  for(list<int>::iterator t=li1.begin(); t!=li1.end(); ++t)  
  cout << *t <<" ";  
  cout<<endl;


//list::merge: merges two sorted list in an increasing order. 
//             It merges y list into the given list container and this removes all the elements from y.

list<int> li3={1,2,3,4};  
list<int> li4={5,6,7,8};  
li3.merge(li4);  
cout<<"List after merging: ";
for(list<int>::iterator r=li3.begin();r!=li3.end();++r)  
cout << *r<<" ";  
cout<<endl;







return 0;
}

