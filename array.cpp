//ARRAY

//Syntax:   std::array<T, N> array;

//Notes:
//1. std::array is a container that encapsulates fixed size arrays.
//2. Array size is needed at compile time
//3. Assign by value is actually by value
//4. Access Elements 
//  at(), [], front(), back(), data()


#include<iostream>
#include<array>
using namespace std;

int main(){
    //Declare
    std::array<int, 5> myarray;

    //initialization
    std::array<int,5> myarray1 = {1,2,3,4,7};// initializer list
    std::array<int,5> myarray2 {1,5,7,8,9};// uniform initialization 

    //Assign using initializer list
    std::array<int,5> myarray3;
    myarray3={4,5,7,8,6};

    //array::begin example: Returns an iterator pointing to the first element in the array container.
    //array::end : Returns an iterator pointing to the past-the-end element in the array container.
    std::array<int, 5> arr1 = {10,11,12,13,14};
    cout<<"arr1 containes:";
    for(auto it=arr1.begin();it!=arr1.end();it++)
    cout<<' '<<*it;
    cout<<'\n';

    //array::rbegin :Returns a reverse iterator pointing to the last element in the array container.
    //array::rend : Returns a reverse iterator pointing to the theoretical element preceding the 
    //              first element in the array (which is considered its reverse end).
    std::array<int,4> arr2 = {41,25,16,11};
    cout<<"arr2 contains:";
    for(auto rit=arr2.rbegin();rit<arr2.rend();rit++)
    cout<<' '<<*rit;
    cout<<'\n';


    //array::cbegin: Returns a const_iterator pointing to the first element in the array container.
    //array::cend: Returns a const_iterator pointing to the past-the-end element in the array container.

    std::array<int,5> myarray4 = { 2, 16, 77, 34, 50 };

    std::cout << "myarray4 contains:";

    for ( auto t = myarray4.cbegin(); t != myarray4.cend(); ++t )
        std::cout << ' ' << *t;   // cannot modify *it

    std::cout << '\n';


    //array::size : Returns the number of elements in the array container.
    std::array<int,10> arr3;
    cout<<"size of arr3 is "<<arr3.size();
    cout<<'\n';
    
    
    //array::operator[] :Returns a reference to the element at position n in the array container.
    std::array<int,5> arr4;
    unsigned int i;
    for(i=0;i<5;i++) arr4[i]=i;
    cout<<"arr4 contains: ";
    for(i=0;i<5;i++)
    cout<<' '<<arr4[i];
    cout<<'\n';
    
    //Returns a reference to the element at position n in the array.
    cout<<"Element at 4th index is "<<arr4.at(4);
    cout<<'\n';

    //Returns a reference to the first element in the array container.
    cout<<"Element at first position is "<<arr4.front();
    cout<<'\n';

    //Returns a reference to the last element in the array container.
    cout<<"Element at last position is "<<arr4.back();
    cout<<'\n';



    //array::fill : Sets val as the value for all the elements in the array object.
    std::array<int,6> arr5;
    arr5.fill(1);
    cout<<"arr5 contains: ";
    for(int& x:arr5){
        cout<<" "<<x;
    }
    cout<<"\n";


    //array::swap : Exchanges the content of the array by the content of x, 
    //              which is another array object of the same type (including the same size).

    std::array<int,4> arr6 = {4,5,6,7};
    std::array<int,4> arr7 = {1,2,3,4};

    arr6.swap(arr7);
    std::cout << "arr5:";
    for (int& x : arr6) std::cout << ' ' << x;
    std::cout << '\n';

    std::cout << "arr7:";
    for (int& x : arr7) std::cout << ' ' << x;
    std::cout << '\n';



    return 0;
}