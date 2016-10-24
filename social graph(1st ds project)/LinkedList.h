//
// Created by mammalofski on 10/24/16.
//
#include "ListItem.h"
class LinkedList
{
public:
    LinkedList();
    ~LinkedList();
    void add(int);
    int getSize();
    int getValue(int);


private:
    int size;
    ListItem* head;
    ListItem* tail;









};

LinkedList::LinkedList()
{
}

LinkedList::~LinkedList()
{
}