#include <iostream>
#include <vector>

using namespace std;

class Node
{
  public:
    int value;
    Node *left;
    Node *right;

    Node(int value)
    {
        this->value = value;
        right = nullptr;
        left = nullptr;
    }
};

class BinarySearchTree
{
  public:
    Node *root;

    BinarySearchTree()
    {
        root = nullptr;
    }

    bool insert(int value)
    {
        Node *new_node = new Node(value);
        Node *iter = root;
        if (root == nullptr)
        {
            root = new_node;
            return true;
        }
        while (true)
        {
            if (iter->value == new_node->value)
                return false; 
            if (iter->value < root)
            { }
        }
    }
};

int main()
{
    BinarySearchTree *bst = new BinarySearchTree();
    cout << "Root: " << bst->root << '\n';

    return 0;
}