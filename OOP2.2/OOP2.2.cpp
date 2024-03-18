#include <iostream>
#include "Queue.h"

using namespace std;

int main() {
    Queue q;

    cout << "Pushing elements into the queue using postfix ++:\n";
    q++;
    q++;
    cout << "Queue after pushing: " << q << endl;

    cout << "\nPopping element from the queue using prefix --:\n";
    --q;
    cout << "Queue after popping: " << q << endl;

    cout << "\nChecking if the queue is empty using ! operator:\n";
    if (!q) {
        cout << "Queue is empty." << endl;
    }
    else {
        cout << "Queue is not empty." << endl;
    }

    return 0;
}
