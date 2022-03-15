//std::set
//Syntsx: std::set<T> objname;

//1. std::set is an associative container that contains a sorted set of unique objects of type key
//2. It is usually implemented using Red-Black tree
//3. Insertion, Removal, Search have logarithmic complexity
//4. If we want to store user defined data type in set then we will have to provide compare function 
//   so that set can store them in sorted order
//5. We can pass the order of sorting while constructing set object
//6. It stores unique element and they are stored in sorted order(AD).


#include <iostream>
#include <set>
using namespace std;
int main ()
{
    set<int> s1 = {9,8,7,1,5,6,9,7};
    cout<<"s1 contains";
    for (auto&x : s1){
        cout<<" "<< x;
    }
    cout<<"\n";

//set::begin : Returns an iterator referring to the first element in the set container.

    set<int> s2= {75,23,11,25,6};
    cout<<"s2 contains";
    for(auto it=s2.begin();it!=s2.end();it++)
    cout<<" "<<*it;
    cout<<"\n";


//set::rbegin : Returns a reverse iterator pointing to the last element in the container (i.e., its reverse beginning).

    set<int> s3= {1,5,4,9,25,14};
    cout<<"s3 contains: ";
    for(auto rit=s3.rbegin();rit!=s3.rend();rit++)
    cout<<" "<<*rit;
    cout<<"\n";


//set::empty: Returns whether the set container is empty (i.e. whether its size is 0).
std::set<int> myset;

  myset.insert(20);
  myset.insert(30);
  myset.insert(10);

  std::cout << "myset contains:";
  while (!myset.empty())
  {
     std::cout << ' ' << *myset.begin();
     myset.erase(myset.begin());
  }
  std::cout << '\n';


//std::size: Returns the number of elements in the set container.

    cout<<"Size of s2 is: "<<s2.size();
    cout<<"\n";

//std::insert:Extends the container by inserting new elements, effectively increasing the container size by the number of elements inserted.
   
   
    set<int> s4; 
    s4.insert(1);  
    s4.insert(4);  
    s4.insert(2);  
    s4.insert(5);  
    s4.insert(3);  
   
    cout << "The elements in set are: ";  
    for (auto it = s4.begin(); it != s4.end(); it++)  
        cout << *it << " ";  
        cout<<"\n";


//a simple example to insert the element in the specified position:

    set<int> s5;  
   
    // Function to insert elements  
    // in the set container  
    auto itr = s5.insert(s5.begin(), 1);  
   
    // the time taken to insertion  
    // is very less as the correct  
    // position for insertion is given  
    itr = s5.insert(itr, 4);  
    itr = s5.insert(itr, 2);  
    itr = s5.insert(itr, 5);  
    itr = s5.insert(itr, 3);  
   
    cout << "The elements in set are: ";  
    for (auto it = s5.begin(); it != s5.end(); it++)  
        cout << *it << " ";  
        cout<<"\n";

//std::erase: function is used to remove either a single element associated with given key or a range of elements ([first, last)) 
//            from the set container. Hence, the size will be reduced by the number of elements removed.

  set<int> myset1;  
  set<int>::iterator it;  
  
  myset1 = {10,20,30};  
    
  cout<<"Before erasing the element: ";  
   for (it=myset1.begin(); it!=myset1.end(); ++it)  
    cout <<" "<< *it  ;  
  
  it=myset1.find('b');  
  myset1.erase (*it);                   // erasing by iterator  
  
  cout<<"\nAfter erasing the element: ";  
  for (it=myset1.begin(); it!=myset1.end(); ++it)  
    cout <<" "<< *it  ;  

//std::swap: function is used to swap (or exchange) the content of two sets but both the sets must be of same type although sizes may differ.
//a simple example to exchange the content of two sets:

 int myints[] = {10,20,30,40,50,60};  
   set<int> first (myints,myints+3);  
   set<int> second (myints+3,myints+6);    
  
   first.swap(second);  
  
   cout << "first set contains:";  
   for (set<int>::iterator it = first.begin(); it!=first.end(); ++it)  
      cout << ' ' << *it;  
   cout << '\n';  
  
   cout << "second set contains:";  
   for (set<int>::iterator it = second.begin(); it!=second.end(); ++it)  
      cout << ' ' << *it;  
   cout << '\n';  




//set::emplace: emplace() function is used to extend the set container by inserting new elements into the container. 
//              Elements are built directly (neither copied nor moved).
//Parameter:
//          args: The arguments forwarded to construct an element to be inserted into the set.

set<char> m;  
  
   m.emplace('a');  
   m.emplace('b');  
   m.emplace('c');  
   m.emplace('d');  
   m.emplace('e');  
  
   cout << "Set contains following elements" << endl;  
  
   for (auto it = m.begin(); it != m.end(); ++it)  
      cout << *it<< ", ";  
  






  return 0;
}









