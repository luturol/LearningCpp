#include "LinkedList.h"

LinkedList::LinkedList()
{
    _size = 0;
}

bool LinkedList::empty()
{
    return _size == 0;
}

int LinkedList::size()
{
    return _size;
}

void LinkedList::push_back(Node *node)
{
    if (empty())
    {        
        first = node;
        last = node;
    }
    else
    {
        last->next = node;
        last = node;
    }

    _size++;
}

Node *LinkedList::front()
{
    return first;
}

// void LinkedList::print_list()
// {
//     Node *temp = front();
//     while (temp)
//     {
//         cout << temp->name << endl;

//         temp = temp->next;
//     }
// }

// void LinkedList::push_index(int index, Node *node)
// {
//     if(!empty())
//     {
//         Node *temp = front();
//         if(index == 0)
//         {
//             node->next = temp;
//             front = node;
//         }
//     }
// }

