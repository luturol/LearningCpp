#include <stdio.h>
#include "LinkedList.h"

LinkedList::LinkedList()
{
    _size = 0;
}

bool LinkedList::empty()
{
    return size == 0;
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