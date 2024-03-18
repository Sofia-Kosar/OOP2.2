#pragma once
#include <iostream>
#include <vector>

using namespace std;

class Queue {
private:
    vector<int> queue;
public:
    Queue(); // Constructor
    Queue(const Queue& other); // Copy constructor
    ~Queue(); // Destructor
    Queue& operator++(int); // postfix ++
    friend Queue& operator--(Queue& q); // prefix --
    bool operator!();
    void push(int value);
    int pop();
    vector<int>& getQueue(); // Getter for queue
    void setQueue(const vector<int>& newQueue); // Setter for queue
    friend ostream& operator<<(ostream& out, const Queue& q);
    friend istream& operator>>(istream& in, Queue& q);
    operator string() const;
};
