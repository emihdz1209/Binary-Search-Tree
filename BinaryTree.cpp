#include "BinaryTree.h"
#include <iostream>

using namespace std;

Node::Node(int value){
    data = value;
    left = nullptr;
    right = nullptr;
}

BinaryTree::BinaryTree(){
    root = nullptr;
}

Node* BinaryTree::insert(Node *node, int value){
    if (node == nullptr){
        return new Node(value);
    }

    if(value<node->data){
        node->left = insert(node->left, value);
    } else {
        node->right = insert(node->right, value);
    }

    return node;
}

Node* BinaryTree::search(Node *node, int value){
    if (node == nullptr || node->data == value){
        return node;
    }

    if (value < node->data){
        return search(node->left, value);
    } else {
        return search(node->right, value);
    }
}

Node* BinaryTree::remove(Node *node, int value){
    if (node == nullptr){
        return node;
    }

    if (value < node->data){
        node->left = remove(node->left, value);
    } else if (value > node->data){
        node->right = remove(node->right, value);
    } else {
        if (node->left == nullptr){
            Node* temp = node->right;
            delete node;
            return temp;
        } else if (node->right == nullptr){
            Node* temp = node->left;
            delete node;
            return temp;
        }

        Node* temp = node->right;
        while (temp->left != nullptr){
            temp = temp->left;
        }

        node->data = temp->data;
        node->right = remove(node->right, temp->data);
    }

    return node;
}

Node* BinaryTree::inOrderTraversal(Node *node){
    if (node == nullptr){
        return node;
    }

    inOrderTraversal(node->left);
    cout << node->data << " ";
    inOrderTraversal(node->right);
    return node;
}

Node* BinaryTree::inOrder(Node* node){
     //printing out all elements in the Binary tree in order left->data->right
    if (node == nullptr){
        return node;
    }

    cout << node->data << " ";
    inOrder(node->left);
    inOrder(node->right);

    return node;
}