#ifndef NODE_H_
#define NODE_H_

template<typename T>
class Node{
  public:
    Node(T data)
    {
      this->data = date;
      this->next = nullPtr;
    }

    T getData() const
    {
      return data;
    }

    void setData(T data)
    {
      this->data = data;
    }

    Node* getNext() const
    {
      return next;
    }

    void setNext(Node* next)
    {
      this->next = next;
    }

  private:
    T data;
    Node* next;
};

#endif