#include "queue.hpp"

int main() {

    cout << endl;
    cout << "*******************************************" << endl;
    cout << "*              Running hw12               *" << endl;
    cout << "*      Programmed by Nathan Milton        *" << endl;
    cout << "*        CS1C Tues/Thurs 1:30pm           *" << endl;
    cout << "*******************************************" << endl;
    cout << endl;

    Queue<int> intQueue(7);
    Queue<double> doubleQueue;
    Queue<string> stringQueue;

    cout << "checking if queues are empty**" << endl;
    if(intQueue.isEmpty())
        cout << "int queue is empty" << endl;
    else
        cout << "int queue is not empty" << endl;
    if(doubleQueue.isEmpty())
        cout << "double queue is empty" << endl;
    else 
        cout << "double queue is not empty" << endl;
    if(stringQueue.isEmpty())
        cout << "string queue is empty" << endl;
    else
        cout << "string queue is not empty" << endl;

    cout << endl << "adding 6 elements to int queue***" << endl;
    intQueue.enqueue(1);
    intQueue.print();
    intQueue.enqueue(2);
    intQueue.print();
    intQueue.enqueue(3);
    intQueue.print();
    intQueue.enqueue(4);
    intQueue.print();
    intQueue.enqueue(5);
    intQueue.print();
    intQueue.enqueue(6);
    intQueue.print();
     
    cout << endl << "adding 6 elements to double queue***" << endl;
    doubleQueue.enqueue(1.1);
    doubleQueue.print();
    doubleQueue.enqueue(1.2);
    doubleQueue.print();
    doubleQueue.enqueue(1.3);
    doubleQueue.print();
    doubleQueue.enqueue(1.4);
    doubleQueue.print();
    doubleQueue.enqueue(1.5);
    doubleQueue.print();
    doubleQueue.enqueue(1.6);
    doubleQueue.print();

    cout << endl << "adding 6 elements to string queue***" << endl;
    stringQueue.enqueue("zero");
    stringQueue.print();
    stringQueue.enqueue("one");
    stringQueue.print();
    stringQueue.enqueue("two");
    stringQueue.print();
    stringQueue.enqueue("three");
    stringQueue.print();
    stringQueue.enqueue("four");
    stringQueue.print();
    stringQueue.enqueue("five");
    stringQueue.print();

    cout << endl << "deleteing 4 elements from int queue****" << endl;
    intQueue.print();
    intQueue.dequeue();
    intQueue.print();
    intQueue.dequeue();
    intQueue.print();
    intQueue.dequeue();
    intQueue.print();
    intQueue.dequeue();
    intQueue.print();

    cout << endl << "deleteing 4 elements from double queue****" << endl;
    doubleQueue.print();
    doubleQueue.dequeue();
    doubleQueue.print();
    doubleQueue.dequeue();
    doubleQueue.print();
    doubleQueue.dequeue();
    doubleQueue.print();
    doubleQueue.dequeue();
    doubleQueue.print();

    cout << endl << "deleteing 4 elements from string queue****" << endl;
    stringQueue.print();
    stringQueue.dequeue();
    stringQueue.print();
    stringQueue.dequeue();
    stringQueue.print();
    stringQueue.dequeue();
    stringQueue.print();
    stringQueue.dequeue();
    stringQueue.print();
    
    cout << endl << "adding 5 elements to int queue***" << endl;
    intQueue.print();
    intQueue.enqueue(7);
    intQueue.print();
    intQueue.enqueue(8);
    intQueue.print();
    intQueue.enqueue(9);
    intQueue.print();
    intQueue.enqueue(10);
    intQueue.print();
    intQueue.enqueue(11);
    intQueue.print();
     
    cout << endl << "adding 5 elements to double queue***" << endl;
    doubleQueue.print();
    doubleQueue.enqueue(1.7);
    doubleQueue.print();
    doubleQueue.enqueue(1.8);
    doubleQueue.print();
    doubleQueue.enqueue(1.9);
    doubleQueue.print();
    doubleQueue.enqueue(1.10);
    doubleQueue.print();
    doubleQueue.enqueue(1.11);
    doubleQueue.print();

    cout << endl << "adding 5 elements to string queue***" << endl;
    stringQueue.print();
    stringQueue.enqueue("six");
    stringQueue.print();
    stringQueue.enqueue("seven");
    stringQueue.print();
    stringQueue.enqueue("eight");
    stringQueue.print();
    stringQueue.enqueue("nine");
    stringQueue.print();
    stringQueue.enqueue("ten");
    stringQueue.print();

    cout << endl << "deleteing 3 elements from int queue****" << endl;
    intQueue.print();
    intQueue.dequeue();
    intQueue.print();
    intQueue.dequeue();
    intQueue.print();
    intQueue.dequeue();
    intQueue.print();

    cout << endl << "deleteing 3 elements from double queue****" << endl;
    doubleQueue.print();
    doubleQueue.dequeue();
    doubleQueue.print();
    doubleQueue.dequeue();
    doubleQueue.print();
    doubleQueue.dequeue();
    doubleQueue.print();

    cout << endl << "deleteing 3 elements from string queue****" << endl;
    stringQueue.print();
    stringQueue.dequeue();
    stringQueue.print();
    stringQueue.dequeue();
    stringQueue.print();
    stringQueue.dequeue();
    stringQueue.print();

    cout << endl << "filling queues*****" << endl;

    intQueue.print();
    intQueue.enqueue(12);
    intQueue.print();
    intQueue.enqueue(13);
    intQueue.print();
    intQueue.enqueue(14);
    intQueue.print();

    cout << endl;
    doubleQueue.print();
    doubleQueue.enqueue(1.12);
    doubleQueue.print();
    doubleQueue.enqueue(1.13);
    doubleQueue.print();
    doubleQueue.enqueue(1.14);
    doubleQueue.print();
    doubleQueue.enqueue(1.15);
    doubleQueue.print();
    doubleQueue.enqueue(1.16);
    doubleQueue.print();
    doubleQueue.enqueue(1.17);
    doubleQueue.print();

    cout << endl;
    stringQueue.enqueue("eleven");
    stringQueue.print();
    stringQueue.enqueue("twelve");
    stringQueue.print();
    stringQueue.enqueue("thirteen");
    stringQueue.print();
    stringQueue.enqueue("fourteen");
    stringQueue.print();
    stringQueue.enqueue("fifthteen");
    stringQueue.print();
    stringQueue.enqueue("sixteen");
    stringQueue.print();

    cout << endl << endl;
    cout << "checking if queue are full****" << endl;
    if(intQueue.isFull())
        cout << "int queue is full" << endl;
    else
        cout << "int queue is not full" << endl;
    if(doubleQueue.isFull())
        cout << "double queue is full" << endl;
    else
        cout << "double queue is not full" << endl;
    if(stringQueue.isFull())
        cout << "string queue is full" << endl;
    else
        cout << "string queue is not full" << endl;
    
    cout << endl;
    cout << "checking if queues are empty**" << endl;
    if(intQueue.isEmpty())
        cout << "int queue is empty" << endl;
    else
        cout << "int queue is not empty" << endl;
    if(doubleQueue.isEmpty())
        cout << "double queue is empty" << endl;
    else 
        cout << "double queue is not empty" << endl;
    if(stringQueue.isEmpty())
        cout << "string queue is empty" << endl;
    else
        cout << "string queue is not empty" << endl;

    cout << endl;
    cout << "finding the front of queues*****" << endl;
    int i = intQueue.front();
    double d = doubleQueue.front();
    string s = stringQueue.front();
    cout << "int queue front: " << i << endl;
    cout << "double queue front: " << d << endl;
    cout << "string queue front: " << s << endl;

    cout << endl << "emptying queues*******" << endl;
    i = intQueue.dequeue();
    cout << "dequeued element: " << i << " from int queue." << endl;
    i = intQueue.dequeue();
    cout << "dequeued element: " << i << " from int queue." << endl;
    i = intQueue.dequeue();
    cout << "dequeued element: " << i << " from int queue." << endl;
    i = intQueue.dequeue();
    cout << "dequeued element: " << i << " from int queue." << endl;
    i = intQueue.dequeue();
    cout << "dequeued element: " << i << " from int queue." << endl;
    i = intQueue.dequeue();
    cout << "dequeued element: " << i << " from int queue." << endl;
    i = intQueue.dequeue();
    cout << "dequeued element: " << i << " from int queue." << endl;
    d = doubleQueue.dequeue();
    cout << "dequeued element: " << d << " from double queue." << endl;

    cout << endl << endl;
    cout << "checking if queue are full****" << endl;
    if(intQueue.isFull())
        cout << "int queue is full" << endl;
    else
        cout << "int queue is not full" << endl;
    if(doubleQueue.isFull())
        cout << "double queue is full" << endl;
    else
        cout << "double queue is not full" << endl;
    if(stringQueue.isFull())
        cout << "string queue is full" << endl;
    else
        cout << "string queue is not full" << endl;

    cout << endl;
    cout << "checking if queues are empty**" << endl;
    if(intQueue.isEmpty())
        cout << "int queue is empty" << endl;
    else
        cout << "int queue is not empty" << endl;
    if(doubleQueue.isEmpty())
        cout << "double queue is empty" << endl;
    else 
        cout << "double queue is not empty" << endl;
    if(stringQueue.isEmpty())
        cout << "string queue is empty" << endl;
    else
    
    cout << endl;
    cout << "finding the front of queues*****" << endl;
    //i = intQueue.front();
    d = doubleQueue.front();
    s = stringQueue.front();
    //cout << "int queue front: " << i << endl;
    cout << "double queue front: " << d << endl;
    cout << "string queue front: " << s << endl;


    cout << "coping double queue with constructor*******" << endl;
    Queue<double> doubleQueue2(doubleQueue);
    Queue<string> stringQueue2;
    stringQueue2 = stringQueue;
    cout << "printing original***" << endl;
    doubleQueue.print();
    stringQueue.print();
    cout << "printing copy***" << endl;
    doubleQueue2.print();
    stringQueue2.print();











    return 0;
}

