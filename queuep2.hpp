#include <memory>
#include <string>
#include <iostream>
using namespace std;

#ifdef NDEBUG
    #define ASSERT(expr) ((void)0)
#else
    #include <cassert>
    #define ASSERT(expr) assert(expr)
#endif
// queue class to store elements following 
// the First in, First out structure
// the first element to be added is 
// the first element to be remove
// Functionality -
// queue - add item to queue
// dequeue - remove item from queue
// copy and move, constructors and assignment
// isEmpty and isFull will reture a bool answering
// size will return and int of the current size
// front returns the object at the front of the queue
// print prints the queue

class ExceptionQueueIsFull: public exception {
    public:
        virtual const char* what() const noexcept {
            return "Error: queue is full";
        };
};
class ExceptionQueueIsEmpty: public exception {
    public:
        virtual const char* what() const noexcept {
            return "Error: queue is empty";
        }
};

template<typename T>
class Queue {

    public:
        // PRE - 
        // POST - Queue object create with capacity of 10 if not otherwise specified
        explicit Queue(int capacity = 10) : head_{-1}, tail_{-1}, size_{0}, capacity_{capacity}, data_{make_unique<T[]>(capacity)} {}

        // PRE - other = Queue object
        // POST - other is copied to new object
        Queue(const Queue<T>& other) : head_{other.head_}, tail_{other.tail_}, size_{other.size_}, capacity_{other.capacity_}, data_{make_unique<T[]>(other.capacity_)} {

            int i = head_;
            do { 
                data_[i] = other.data_[i];
                i = (i + 1) % capacity_;// move i to next element in circular buffer
            } while (i != (tail_ + 1) % capacity_);//while i != element after last element
        }

        // PRE - other = Queue object
        // POST - other is copied to new object
        Queue<T>& operator=(const Queue<T>& other) {
            head_ = other.head_;
            tail_ = other.tail_;
            size_ = other.size_;
            capacity_ = other.capacity_;
            data_ = make_unique<T[]>(other.capacity_);

            int i = head_;
            do { 
                data_[i] = other.data_[i];
                i = (i + 1) % capacity_;
            } while (i != (tail_ + 1) % capacity_);

            return *this;
        }

        // PRE - other = r value Queue object
        // POST - other is moved to new Queue object; other is nullptr
        Queue(Queue<T>&& other) noexcept = default;


        // PRE - other = r value Queue object
        // POST - other is moved to new Queue object; other is nullptr
        Queue<T>& operator=(Queue<T>&& other) noexcept = default;

        // PRE - element = value of type T
        // POST - value is added end of queue 
        void enqueue(const T& element) {
            //ASSERT(!isFull() && "queue is full");
            if(isFull())
                throw ExceptionQueueIsFull();

            if(isEmpty()) {
                tail_ = head_ = 0;
            } else {
                tail_ = (tail_ + 1) % capacity_;
            }
            data_[tail_] = element;
            size_++;
            //cerr << "head = " << head_ << endl;
            //cerr << "tail = " << tail_ << endl;
        }

        // PRE - queue has at least one value in it
        // POST - element at begining of list is removed and returned 
        T dequeue() {
           // ASSERT(!isEmpty() && "queue is empty");
            //cout << "assertion passed! queue no empty" << endl;
            if(isEmpty())
                throw ExceptionQueueIsEmpty();

            T elem = data_[head_];

            if(head_ == tail_) {
               head_ = tail_ = -1; 
            } else {
                head_ = (head_ + 1) % capacity_;
            }
            size_--;
            //cerr << "head = " << head_ << endl;
            //cerr << "tail = " << tail_ << endl;
            return elem;
        }

        // PRE - queue has at least one object
        // POST - returns element at beginning of queue 
        T& front() {
            if(isEmpty())
                throw runtime_error("Queue is empty");
            return data_[head_];
        }

        // PRE - queue object
        // POST - returns bool of if queue is empty
        bool isEmpty() const {
            return head_ == -1 && tail_ == -1;
        }
        
        // PRE - queue object
        // POST - returns bool of if queue is full
        bool isFull() const {
            return (tail_ + 1) % capacity_ == head_;
        }

        // PRE - queue object
        // POST - returns int of size of queue
        int size() const {
            return size_;
        }

        // PRE - queue object has at least one value
        // POST - prints queue to console
        void print() const {
            if (isEmpty()) {
                throw ExceptionQueueIsEmpty();
                return;
            }
            int i = head_;
            do {
                cout << data_[i] << " ";
                i = (i + 1) % capacity_;
            } while (i != (tail_ + 1) % capacity_);
            cout << endl;
        }

    private:
        int head_; // first
        int tail_; // last
        int size_; // count
        int capacity_; // max size
        unique_ptr<T[]> data_;// array of T elements 
};

