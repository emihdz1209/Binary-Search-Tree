//Binary tree

#include <iostream>
#include "BinaryTree.h"

using namespace std;

void printResult(Node* result){
    if (result == nullptr){
        cout << "Element not found" << endl;
    } else {
        cout << "Element found: " << result->data << endl;
    }
}

int main(){
    BinaryTree tree;
    tree.root = tree.insert(tree.root, 5);
    tree.insert(tree.root, 3);
    tree.insert(tree.root, 7);
    tree.insert(tree.root, 2);
    tree.insert(tree.root, 4);
    tree.insert(tree.root, 6);
    tree.insert(tree.root, 8);

    Node* result = tree.search(tree.root, 6);
    printResult(result);

    tree.remove(tree.root, 6);
    result = tree.search(tree.root, 6);
    printResult(result);

    cout << endl << "In order traversal: " << endl;

    tree.inOrderTraversal(tree.root);

    cout << endl << "In order: " << endl;

    tree.inOrder(tree.root);

    return 0;
}


