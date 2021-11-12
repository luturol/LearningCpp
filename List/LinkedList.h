#include <iostream>

using namespace std;

struct Node
{
    string name;
    Node *next;
};

class LinkedList
{
public:
    LinkedList();
    bool empty();
    int size();
    void push_back(Node *node);
    void push_front(Node *node);
    void push_index(int index, Node *node);

    void pop_front();
    void pop_back();
    void pop_index(int index);

    Node *back();
    Node *front();

    void print_list();

private:
    Node *first;
    Node *last;

    int _size;
};