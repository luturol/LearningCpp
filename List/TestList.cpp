#include "LinkedList.cpp"

int main()
{
    LinkedList linked;

    Node *node = new Node;
    node->name = "Rafael";

    linked.push_back(node);
    
    linked.print_list();
    
    return 0;
}