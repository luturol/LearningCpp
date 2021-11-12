#include <iostream>

using namespace std;

struct Node
{
    string name;
    Node *next = NULL;
};

class Queue
{
    public:
        Queue();
        Node *front();
        Node *back();
        void enqueue(Node *node);
        void dequeue(Node *node);
        bool empty();
        int size();
    
    private:
        Node *frist;
        Node *last;
        int _size;
};