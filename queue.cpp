//Queue
//FIFO queue
//queues are a type of container adaptor, specifically designed to operate in a FIFO context (first-in first-out), 
//where elements are inserted into one end of the container and extracted from the other.

//queues are implemented as containers adaptors, which are classes that use an encapsulated object of a specific 
//container class as its underlying container, providing a specific set of member functions to access its elements. 
//Elements are pushed into the "back" of the specific container and popped from its "front".

//The underlying container may be one of the standard container class template or some other specifically designed container class.



//queue::empty: Returns whether the queue is empty: i.e. whether its size is zero.
//true if the underlying container's size is 0, false otherwise.



#include <iostream>       // std::cout
#include <queue>          // std::queue
using namespace std;


int main ()
{

    // queue::empty
    queue<int> myqueue;
    int sum (0);

    for (int i=1;i<=10;i++) myqueue.push(i);

    while (!myqueue.empty())
    {
        sum += myqueue.front();
        myqueue.pop();
    }

    cout << "total: " << sum << '\n';

//queue::size

    
    queue<int> myints;
    cout << "0. size: " << myints.size() << '\n';

    for (int i=0; i<5; i++) myints.push(i);
    cout << "1. size: " << myints.size() << '\n';

    myints.pop();
    cout << "2. size: " << myints.size() << '\n';


//queue::front: Returns a reference to the next element in the queue.
//The next element is the "oldest" element in the queue and the same element that is popped out from the queue when queue::pop is called.


    cout<<"front element of myints is: "<<myints.front();
    cout<<endl;


    cout<<"last element of myints is: "<<myints.back();
    cout<<endl;


//stack::emplace: Adds a new element at the end of the queue, after its current last element. 
//This new element is constructed in place passing args as the arguments for its constructor.

    queue<std::string> myqueue1;

    myqueue1.emplace ("First sentence");
    myqueue1.emplace ("Second sentence");

    std::cout << "myqueue1 contains:\n";
    while (!myqueue1.empty())
    {
        std::cout << myqueue1.front() << '\n';
        myqueue1.pop();
    }
  return 0;
}

