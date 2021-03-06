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


//list::rbegin: Returns a reverse iterator pointing to the last element in the container (i.e., its reverse beginning).
//Reverse iterators iterate backwards: increasing them moves them towards the beginning of the container.
//rbegin points to the element right before the one that would be pointed to by member end.

  std::list<int> mylist1;
  for (int i=1; i<=5; ++i) mylist.push_back(i);

  std::cout << "mylist1 backwards:";
  for (std::list<int>::reverse_iterator rit=mylist1.rbegin(); rit!=mylist1.rend(); ++rit)
    std::cout << ' ' << *rit;

  std::cout << '\n';

//list::front
  cout<<"Front element is: "<<mylist.front()<<endl;

//list::back
  cout<<"Last element is: "<<mylist.back()<<endl;

//list::size
  cout<<"size of mylist is: "<<mylist.size()<<endl;

//list::max_size:Returns the maximum number of elements that the list container can hold.
//This is the maximum potential size the container can reach due to known system or library implementation limitations, 
//but the container is by no means guaranteed to be able to reach that size: it can still fail to allocate storage at any
// point before that size is reached.


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

//erase:Removes from the list container either a single element (position) or a range of elements ([first,last)).

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


//list::swap: exchange the contents of the list with another list of same type but the sizes can be differ.
//Parameter
//x: It is an another list which is to be exchanged with the given list.

int myints[]= {17,89,7,14};
  std::list<int> mylist10 (myints,myints+4);

  mylist10.remove(89);

  std::cout << "mylist10 contains:";
  for (std::list<int>::iterator f=mylist10.begin(); f!=mylist10.end(); ++f)
    std::cout << ' ' << *f;
  std::cout << '\n';


//List sort() function arranges the elements of a given list in an increasing order. 
//It does not involve in any construction and destruction of elements. Elements are only moved within the container.
 
 
   list<int> li10={6,4,10,2,4,1};  
   list<int>:: iterator l;  
   cout<<"Elements of list are :";  
   for(l=li10.begin();l!=li10.end();++l)  
   std::cout << *l<<",";  
   li10.sort();  
   cout<<'\n';  
   cout<<"Sorted elements are :";  
   for(l=li10.begin();l!=li10.end();++l)  
   std::cout << *l <<",";  








return 0;
}

