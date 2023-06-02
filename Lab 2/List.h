#include <iostream>

using namespace std;

class Node {
public:
    char data;
    Node* next;
};

class LinkedList {
public:
    LinkedList();
    void addNode();
    void display();
    LinkedList operator+(char c);
    bool operator==(char c);
private:
    Node* head;
};

