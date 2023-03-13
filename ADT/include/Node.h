#include <iostream>

#ifndef NODE_H
#define NODE_H

template <class T>
class Node {
 public:
  Node();
  Node(const T& item, Node<T>* ptr_next = NULL);
  T data;
  // access
  Node<T>* access_next();
  // modify
  void insert_node(Node<T>* pos);
  Node<T>* remove_node();
  Node<T>* get_node(const T& element);

 private:
  Node<T>* next;
};

#endif
