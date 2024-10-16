//Una estructura de datos de árbol binario es una estructura de datos jerárquica en la que cada nodo tiene como máximo dos hijos, denominados hijo izquierdo y hijo derecho.
//Se utiliza habitualmente en informática para el almacenamiento y la recuperación eficientes de datos, con diversas operaciones como inserción, eliminación y recorrido.

//En un árbol binario de búsqueda, cada nodo sigue esta propiedad:
//  El valor del hijo izquierdo es menor que el valor del nodo.
//  El valor del hijo derecho es mayor que el valor del nodo.
//El proceso de inserción en un BST sigue estos pasos:
//  Comenzar en la raíz del árbol.
//  Comparar el valor a insertar con el valor del nodo actual.
//      Si es menor, moverse al hijo izquierdo.
//      Si es mayor, moverse al hijo derecho.
//  Repetir el proceso hasta encontrar un nodo donde el hijo correspondiente sea nulo, e insertar el nuevo nodo allí.


#ifndef BINARYTREE_H
#define BINARYTREE_H

#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int value);
};

class BinaryTree{
    public:
        Node* root;
        BinaryTree();
        Node* insert(Node* node, int value);
        Node* search(Node* node, int value);
        Node* remove(Node* node, int value);
        //printing out all elements in the Binary tree in order:
        Node* inOrderTraversal(Node* node); //printing out all elements in the Binary tree in order of least to greatest
        Node* inOrder(Node* node); //printing out all elements in the Binary tree in order left->data->right
};

#endif // BINARYTREE_H