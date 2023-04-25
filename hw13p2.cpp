#include "queuep2.hpp"

int main() {

    cout << endl;
    cout << "*******************************************" << endl;
    cout << "*              Running hw13 p2            *" << endl;
    cout << "*      Programmed by Nathan Milton        *" << endl;
    cout << "*        CS1C Tues/Thurs 1:30pm           *" << endl;
    cout << "*******************************************" << endl;
    cout << endl;

    Queue<int> intQueue(7);

    cout << "checking if queues are empty**" << endl;
    if(intQueue.isEmpty())
        cout << "int queue is empty" << endl;
    else
        cout << "int queue is not empty" << endl;


    cout << "trying to add to empty int queue**" << endl;

    


    try {
        intQueue.dequeue();
    } catch(const ExceptionQueueIsEmpty& ex) {
        cout << ex.what() << endl;
    } catch(const exception& ex) {
        cout << ex.what() << endl;
    }

    try {
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
        intQueue.enqueue(7);
        intQueue.print();
        intQueue.enqueue(8);
        intQueue.print();
    } catch(const ExceptionQueueIsFull& ex) {
        cout << ex.what() << endl;
    }  catch(const exception& ex) {
        cout << ex.what() << endl;
    }


     


    try {
        cout << endl << "deleteing 8 elements from int queue****" << endl;
        intQueue.print();
        intQueue.dequeue();
        intQueue.print();
        intQueue.dequeue();
        intQueue.print();
        intQueue.dequeue();
        intQueue.print();
        intQueue.dequeue();
        intQueue.print();
        intQueue.dequeue();
        intQueue.print();
        intQueue.dequeue();
        intQueue.print();
        intQueue.dequeue();
        intQueue.print();
        intQueue.dequeue();
    } catch(const ExceptionQueueIsEmpty& ex) {
        cout << ex.what() << endl;
    } catch(const exception& ex) {
        cout << ex.what() << endl;
    }


    return 0;
}

