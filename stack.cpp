//Stack
//LIFO stack
//Stacks are a type of container adaptor, specifically designed to operate in a LIFO context (last-in first-out), 
//where elements are inserted and extracted only from one end of the container.

//stacks are implemented as container adaptors, which are classes that use an encapsulated object of a specific 
//container class as its underlying container, providing a specific set of member functions to access its elements. 
//Elements are pushed/popped from the "back" of the specific container, which is known as the top of the stack.

//The underlying container may be any of the standard container class templates or some other specifically designed container class. 


// stack::empty
#include <iostream>       // std::cout
#include <stack>          // std::stack
using namespace std;


int main ()
{

//stack::empty: Returns whether the stack is empty: i.e. whether its size is zero.
//This member function effectively calls member empty of the underlying container object.
//true if the underlying container's size is 0, false otherwise.

    stack<int> mystack;
    int sum (0);

    for (int i=1;i<=10;i++) mystack.push(i);

    while (!mystack.empty())
    {
        sum += mystack.top();
        mystack.pop();
    }

    cout << "total: " << sum << '\n';
    cout<<endl;


//stack::size: Returns the number of elements in the stack.


    std::stack<int> myints;
    std::cout << "0. size: " << myints.size() << '\n';

    for (int i=0; i<5; i++) myints.push(i);
    std::cout << "1. size: " << myints.size() << '\n';

    myints.pop();
    cout << "2. size: " << myints.size() << '\n';
    cout<<endl;


//stack::top: Returns a reference to the top element in the stack.
//Since stacks are last-in first-out containers, the top element is the last element inserted into the stack.


    stack<int> mystack1;

    mystack1.push(10);
    mystack1.push(20);

    mystack1.top() -= 5;

    cout << "mystack1.top() is now " << mystack1.top() << '\n';
    cout<<endl;    

//stack::push: Inserts a new element at the top of the stack, above its current top element. 
//The content of this new element is initialized to a copy of val.


    stack<int> mystack2;

    for (int i=0; i<5; ++i) mystack2.push(i);

    cout << "Popping out elements...";
    while (!mystack2.empty())
    {
        std::cout << ' ' << mystack2.top();
        mystack2.pop();
    }
    cout << '\n';


//stack::emplace: Adds a new element at the top of the stack, above its current top element.
// This new element is constructed in place passing args as the arguments for its constructor.

    stack<std::string> mystack3;

    mystack3.emplace ("First sentence");
    mystack3.emplace ("Second sentence");

    std::cout << "mystack contains:\n";
    while (!mystack3.empty())
    {
        std::cout << mystack3.top() << '\n';
        mystack3.pop();
    }


//stack::pop: Removes the element on top of the stack, effectively reducing its size by one.
//The element removed is the latest element inserted into the stack, whose value can be retrieved by calling member stack::top.


//stack::swap: Exchanges the contents of the container adaptor (*this) by those of x.

    stack<int> foo,bar;
    foo.push (10); foo.push(20); foo.push(30);
    bar.push (111); bar.push(222);

    foo.swap(bar);

    std::cout << "size of foo: " << foo.size() << '\n';
    std::cout << "size of bar: " << bar.size() << '\n';




  return 0;
}

