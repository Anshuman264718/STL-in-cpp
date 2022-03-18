//Map

//Notes:
//1. Syntax: map<T1, T2> obj; // where T1 is key type and T2 is value tpe.
//2. std::map is associative container that store element in key value combination
//     where key should be unique otherwise it overrides the previous value
//3. It is implemented using self-balance binary search tree.
//4. It stores key value pair in sorted order on the basis of key.
//5. std::map is generally used in dictionary type problems.


#include <iostream>
#include <map>
#include <string>
using namespace std;

//map::begin/end
//Returns an iterator referring to the first element in the map container.

int main(){

    map<char,int> mymap;
    // 1) Assignment using array index notation  
    mymap['a']= 100;
    mymap['b']= 120;
    mymap['c']= 140;
    cout<<"mymap contans: ";
    cout<<"\n";
    for(map<char,int>::iterator it=mymap.begin();it!=mymap.end();it++)
    cout<<" "<<it->first<<" : "<<it->second;
    cout<<"\n";
    cout<<"\n";


//map::rbegin:  Returns a reverse iterator pointing to the last element in the container (i.e., its reverse beginning).
//              Reverse iterators iterate backwards: increasing them moves them towards the beginning of the container.
//              rbegin points to the element preceding the one that would be pointed to by member end.

std::map<char,int> mymap10;

  mymap10['x'] = 100;
  mymap10['y'] = 200;
  mymap10['z'] = 300;

  // show content:
std::map<char,int>::reverse_iterator rit;
cout<<"mymap10 contains: ";
for (rit=mymap10.rbegin(); rit!=mymap10.rend(); ++rit)
std::cout << rit->first << " => " << rit->second << '\n';



//map::empty: check if the map is empty or not, if empty returns 1 else returns 0.
    cout<<"check mymap is empty or not: "<<mymap.empty()<<"\n";
    cout<<"\n";


//map::size: Returns the number of elements in the map container.
    cout << "mymap.size() is " << mymap.size() << '\n';
    cout<<"\n";

//map::operator[]: If k matches the key of an element in the container, the function returns a reference to its mapped value.
    std::cout << "mymap['a'] is " << mymap['a'] << '\n';
    std::cout << "mymap['b'] is " << mymap['b'] << '\n';
    std::cout << "mymap['c'] is " << mymap['c'] << '\n';
    cout<<"\n";

    //a simple example to change the value associated with the key value.
    map<int,string> mymap1= {{100,"Anshu"},{110,"AD"},{120,"Jhon"}};

    mymap1[100]="Nalin";
    mymap1[120]="allen";

    cout<<"Elements after make changs in mymap1 is: \n";
    for(auto&x : mymap1)
    cout<<x.first<<" : "<<x.second<<endl;


//map::at:  Returns a reference to the mapped value of the element identified with key k.
//          If k does not match the key of any element in the container, the function throws an out_of_range exception.

    map<std::string,int> mymap2 = {
                { "alpha", 0 },
                { "beta", 0 },
                { "gamma", 0 } };

    mymap2.at("alpha") = 10;
    mymap2.at("beta") = 20;
    mymap2.at("gamma") = 30;

    cout<<"\n"<<"Elements in mymap2 are: ";
    for (auto& x: mymap) {
    std::cout << x.first << " : " << x.second << '\n';
  }
  cout<<"\n";


//map::insert: Extends the container by inserting new elements, effectively increasing the container size by the number of elements inserted.
//             Because element keys are unique in a map, the insertion operation first checks whether the given key is already present in the
//             map or not, if the key is present in the map then it is not inserted in the map and the iterator to the existing key is returned
//             otherwise new element is inserted in the map.


    
    
    map<char,int> mymap3 = {{'p',10},{'q',20},{'r',30}};

    mymap3.insert(pair<char,int> ('s',40));
    mymap3.insert(pair<char,int> ('t',50));

    cout<<"mymap3 contains"<<endl;
    for(auto& x : mymap3)
    cout<<x.first<<" : "<<x.second<<endl;
    cout<<"\n";


//map::erase: Removes from the map container either a single element or a range of elements ([first,last)).
//            This effectively reduces the container size by the number of elements removed, which are destroyed.

    std::map<char,int> mymap4 = {{'a',15},{'b',25},{'c',35},{'d',45},{'e',55},{'f',65}};
    std::map<char,int>::iterator it;

    it=mymap4.find('b');
    mymap4.erase (it);                   // erasing by iterator

    mymap4.erase ('c');                  // erasing by key

    it=mymap4.find ('e');
    mymap4.erase ( it, mymap4.end() );    // erasing by range

    // show content:
    cout<<"mymap4 contains after erasing elements"<<endl;
    for (it=mymap4.begin(); it!=mymap4.end(); ++it)
        std::cout << it->first << " => " << it->second << '\n';
    cout<<"\n";


//map::swap: function is used to swap (or exchange) the contents of two maps but both the maps must be of the same type although sizes may differ.

    map<char, int> m1 = {  
      {'a', 1},  
      {'b', 2},  
      {'c', 3},  
      {'d', 4},  
      {'e', 5},  
      };  
  
   map<char, int> m2;  
  
   m2.swap(m1);  
  
   cout << "Map contains following elements" << endl;  
  
   for (auto it = m2.begin(); it != m2.end(); ++it)  
      cout << it->first << " = " << it->second << endl;  



//map::find: function is used to find an element with the given key value k. If it finds the element then 
//           it returns an iterator pointing to the element. Otherwise, it returns an iterator pointing to the end of the map, i.e., map::end().


   map<char, int> mymap5 = {  
            {'a', 100},  {'b', 200},    {'c', 300}, {'d', 400},  {'e', 500},   };  
              
    auto im = mymap5.find('c');  
     
    cout << "Iterator points to " << im->first <<   " = " << im->second << endl;  
    cout<<"\n";


//map::emplace: 
//          1. Emplace is used to construct object in-place and avoids unnecessary copy of objects
//          2. Insert and emplace is equal for premitive data types but when we deal with heavy objects we should use emplace.

    std::map<char,int> mymap6;

    mymap6.emplace('x',100);
    mymap6.emplace('y',200);
    mymap6.emplace('z',100);

    std::cout << "mymap6 contains:";
    for (auto& x: mymap6)
        std::cout << " [" << x.first << ':' << x.second << ']';
    std::cout << '\n';


//map::emplace_hint: 
//C++ map emplace_hint() function is used to extend the map container by inserting new elements into the container using hint
// as a position for element. Elements are built directly (neither copied nor moved).
//The constructor of the element is called by giving the arguments args passed to this function. 
//Insertion takes place only if the key is not present already.


   map<char, int> m = {  
            {'b', 20},  
            {'c', 30},  
            {'d', 40},  
            };  
  
   m.emplace_hint(m.end(), 'e', 50);  
   m.emplace_hint(m.begin(), 'a', 10);  
  cout << "Map contains following elements" << endl;  
  for (auto it = m.begin(); it != m.end(); ++it)  
  cout << it->first << " = " << it->second << endl;  
    return 0;
}