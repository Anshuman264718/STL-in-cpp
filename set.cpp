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

  return 0;
}









