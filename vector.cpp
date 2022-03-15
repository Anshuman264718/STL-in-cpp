//Vector

//Notes:
//1. std::vector is a sequence vector and also known as Dynamic array or array list
//2. Its size can grow and shrink dynamically, and no need to provide size at compile time

// ELEMENT ACCESS
// at(), [], front(), back(), data()

// MODIFIRES
// insert(), emplace(), push_back(), emplace_back(), pop_back(), resize(), swap(), erase(), clear()


#include<iostream>
#include<vector>
using namespace std;

int main(){

// Declaration
std::vector<int> vec1;
std::vector<int> vec2 (2,3); // size is 2, element is 3
std::vector<int> vec3 = {1,2,3,4}; // initializer list
std::vector<int> vec4 {1,2,3,4,5}; // uniform initialization
cout<<'\n';


//vector::push_back()
vector<int> vec5;
for(int i=0;i<6;i++){
    vec5.push_back(i);
    cout<<vec5.size();
}

for (int x : vec5)
        cout << x << " ";
cout<<'\n';

//vector::begin
//      Returns an iterator pointing to the first element in the vector.
//      unlike member vector::front, which returns a reference to the first element, 
//      this function returns a random access iterator pointing to it.

std::vector<int> vec6;
for(int i=0;i<=5;i++)
vec6.push_back(i);
    
cout<<"vec6 contains";
for (auto it = vec6.begin();
         it != vec6.end(); ++it)
        cout << ' ' << *it;
cout<<'\n';

//vectr::size: Returns the number of elements in the vector.
cout<<"size of vec6 is : "<<vec6.size();
cout<<'\n';


//vector:resize()
//Resizes the container so that it contains n elements.

std::vector<int> myvector;
// set some initial content:
for (int i=1;i<10;i++) myvector.push_back(i);

myvector.resize(5);
myvector.resize(8,100);
myvector.resize(12);

std::cout << "myvector contains:";
for (int i=0;i<myvector.size();i++)
std::cout << ' ' << myvector[i];
std::cout << '\n';
cout<<'\n';


//vector::capacity
//Returns the size of the storage space currently allocated for the vector, expressed in terms of elements.
//This capacity is not necessarily equal to the vector size. It can be equal or greater, 
//with the extra space allowing to accommodate for growth without the need to reallocate on each insertion.

std::cout << "size: " << (int) myvector.size() << '\n';
std::cout << "capacity: " << (int) myvector.capacity() << '\n';
std::cout << "max_size: " << (int) myvector.max_size() << '\n';

//vector::operator[]: Returns a reference to the element at position n in the vector container.
cout<<"Element at 4th index in vec6: "<<vec6[4];
cout<<"\n";


//vector::at(): Returns a reference to the element at position n in the vector.
//that vector::at is bound-checked and signals if the requested position is out of range by throwing an out_of_range exception.
cout<<"Element at 2nd index in vec6: "<<vec6.at(2);
cout<<"\n";


//vector::front(): Returns a reference to the first element in the vector.
cout<<"Front element in myvector is "<<myvector.front();
cout<<"\n";

//vector::back(): Returns a reference to the last element in the vector.
cout<<"Back element in myvector is "<<myvector.back();
cout<<"\n";


//vector::data: Returns a direct pointer to the memory array used internally by the vector to store its owned elements.
std::vector<int> myvector1 (5);

int* p = myvector1.data();
*p = 10;
++p;
*p = 20;
p[2] = 100;

std::cout << "myvector contains:";
for (unsigned i=0; i<myvector1.size(); ++i)
std::cout << ' ' << myvector1[i];
std::cout << '\n';
cout<<"\n";


//vector:assign : Assigns new contents to the vector, replacing its current contents, and modifying its size accordingly.
vector<int> v1;
cout << "Initial size  = " << v1.size() << endl;
/* 5 integers with value = 100 */
v1.assign(5, 100);
cout << "Modified size = " << v1.size() << endl;
/* display vector values */
for (int i = 0; i < v1.size(); ++i)
cout << v1[i] << " ";
cout<<"\n";


//vector::insert: The vector is extended by inserting new elements before the element at the specified position, 
//              effectively increasing the container size by the number of elements inserted.
//              Parameters
//              position − Index in the vector where new element to be inserted.
//              n − Number of element to be inserted.
//              val − Value to be assigned to newly inserted element.
vector<int> v2 = {5};
v2.insert(v2.begin(), 4, 5);
cout<<"v2 contains : ";
for (auto it = v2.begin(); it != v2.end(); ++it)
cout << *it<<" " ;
cout<<"\n";


//vector::erase : Removes from the vector either a single element (position) or a range of elements ([first,last)).
std::vector<int> myvector3;

  // set some values (from 1 to 10)
  for (int i=1; i<=10; i++) myvector3.push_back(i);

  // erase the 6th element
  myvector3.erase (myvector3.begin()+5);

  // erase the first 3 elements:
  myvector3.erase (myvector3.begin(),myvector3.begin()+3);
  std::cout << "myvector3 contains:";
  for (unsigned i=0; i<myvector3.size(); ++i)
    std::cout << ' ' << myvector3[i];
  std::cout << '\n';


//vector:emplace(): extends container by inserting new element at position. Reallocation happens if there is need of more space.
//                  This method increases container size by one.

std::vector<int> myvector4 = {10,20,30};

  auto it = myvector4.emplace ( myvector4.begin()+1, 100 );
  myvector4.emplace ( it, 200 );
  myvector4.emplace ( myvector4.end(), 300 );

  std::cout << "myvector4 contains:";
  for (auto& x: myvector4)
    std::cout << ' ' << x;
  std::cout << '\n';


//:vector::emplace_back
//      Inserts a new element at the end of the vector, right after its current last element. 
//      This new element is constructed in place using args as the arguments for its constructor.


std::vector<int> myvector5 = {10,20,30};

  myvector5.emplace_back (100);
  myvector5.emplace_back (200);

  std::cout << "myvector5 contains:";
  for (auto& x: myvector5)
    std::cout << ' ' << x;
  std::cout << '\n';



return 0;
}



