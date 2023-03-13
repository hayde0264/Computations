#include </Users/hayde/Desktop/Code/Computations/ADT/include/Node.h>

#include <cstddef>
#include <cstdlib>

template <class T>
Node<T>::Node() {
  // default constructor
}
template <class T>
Node<T>::Node(const T& item, Node<T>* ptr_next) {
  // set next pointer && data contained
  this->data = item;
  this->next = ptr_next;
}
template <class T>
Node<T>* Node<T>::access_next() {
  return this->next;
}
template <class T>
void Node<T>::insert_node(Node<T>* pos) {
  pos->next = this->next;
  this->next = pos;
}
template <class T>
Node<T>* Node<T>::remove_node() {
  Node<T>* temp_next = next;
  if (next != NULL) next = next->next;
  return temp_next;
}
template <class T>
Node<T>* Node<T>::get_node(const T& element) {
  Node<T>* new_node;
  new_node = new Node<T>(element);
  if (new_node == NULL) {
    std::cout << "Allocation failed..." << '\n';
    exit(1);
  }
  return new_node;
}
