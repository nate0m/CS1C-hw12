#include <memory>
#include <string>
#include <iostream>
using namespace std;

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
template<typename T>
class Queue {

    public:
        explicit Queue(int capacity = 10) : head_{-1}, tail_{-1}, size_{0}, capacity_{capacity}, data_{make_unique<T[]>(capacity)} {}

        Queue(const Queue<T>& other) : head_{other.head_}, tail_{other.tail_}, size_{other.size_}, capacity_{other.capacity_}, data_{make_unique<T[]>(other.capacity_)} {

            int i = head_;
            do { 
                data_[i] = other.data_[i];
                i = (i + 1) % capacity_;
            } while (i != (tail_ + 1) % capacity_);
        }

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

        Queue(Queue<T>&& other) = default;

        Queue<T>& operator=(Queue<T>&& other) = default;

        void enqueue(const T& element) {
            if(isFull())
                throw runtime_error("Queue is Full");
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

        T dequeue() {
            if(isEmpty()) {
                throw runtime_error("Queue is Empty");
            }
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
        T& front() {
            if(isEmpty())
                throw runtime_error("Queue is empty");
            return data_[head_];
        }
        bool isEmpty() const {
            return head_ == -1 && tail_ == -1;
        }
        
        bool isFull() const {
            return (tail_ + 1) % capacity_ == head_;
        }

        int size() const {
            return size_;
        }

    void print() const {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
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
        int head_;
        int tail_;
        int size_;
        int capacity_;
        unique_ptr<T[]> data_; 
};

