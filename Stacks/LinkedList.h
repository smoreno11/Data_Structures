#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

#include "header.h"
#include "Node.h"

template<typename T>
class LinkedList{

   private:

    Node<T>* head; // Pointer to the first node in the list

  public:
    LinkedList()
    {
      head = nullptr;
    }

    ~LinkedList()
    {
      Node<T>* current = head;
      Node<T> next;

      while(current != nullptr)
      {
        next = current->getNext();
        delete current;
        current = next;
      }
    }

    void append(T data)
    {
      Node<T>* newNode = new Node<T>(data);
      if(head == n)
    }
 
};

#endif