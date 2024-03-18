#include "Queue.h"
#include <sstream>
using namespace std;
Queue::Queue() {}

Queue::Queue(const Queue& other) : queue(other.queue) {}

Queue::~Queue() {}

Queue& Queue::operator++(int) {
    int value;
    cout << "Enter value to push into the queue: ";
    cin >> value;
    queue.push_back(value);
    return *this;
}

Queue& operator--(Queue& q) {
    if (!q.queue.empty()) {
        q.queue.erase(q.queue.begin());
    }
    return q;
}

bool Queue::operator!() {
    return queue.empty();
}

void Queue::push(int value) {
    queue.push_back(value);
}

int Queue::pop() {
    int value = -1; // Default value if queue is empty
    if (!queue.empty()) {
        value = queue.front();
        queue.erase(queue.begin());
    }
    return value;
}

vector<int>& Queue::getQueue() {
    return queue;
}

void Queue::setQueue(const vector<int>& newQueue) {
    queue = newQueue;
}

ostream& operator<<(ostream& out, const Queue& q) {
    for (const auto& el : q.queue) {
        out << el << ' ';
    }
    return out;
}

istream& operator>>(istream& in, Queue& q) {
    int value;
    in >> value;
    q.queue.push_back(value);
    return in;
}
Queue::operator string() const {
    stringstream ss;
    for (const auto& el : queue) {
        ss << el << ' ';
    }
    return ss.str();
}