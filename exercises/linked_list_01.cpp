#include <iostream>
using namespace std;

class Node {
public:
  int data;
  Node* next;
    
  Node(int value) {
    data = value;
    next = nullptr;
  }
};

int main() {
  Node* node1 = new Node(10);
  Node* node2 = new Node(20);
  Node* node3 = new Node(30);
  
  node1->next = node2;
  node2->next = node3;
  node3->next = nullptr;
  
  std::cout << "Data in node 1: " << node1->data << std::endl;
  std::cout << "Data in node 3: " << node2->data << std::endl;
  std::cout << "Data in node 3: " << node3->data << std::endl;
  
  delete node1;
  delete node2;
  delete node3;
  
  return 0;
}