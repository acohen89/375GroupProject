#ifndef BST_H
#define BST_H

#include <iostream>

#include "Node.h"

template <typename T>
class BST {
    public:
        class Node{
            public: 
                int data;
                Node* left; 
                Node* right; 
                Node(T value){
                    data = value; 
                    left = nullptr;
                    right = nullptr; 
                }
                Node(){
                    data = NULL; 
                    left = nullptr;
                    right = nullptr;
                }
                void print(){
                    cout << data << " ";
                    if(left != nullptr){
                        left->print();
                    }
                    if(right != nullptr){
                        right->print();
                    }
                }
        
        };
        BST(){
            size = 0; 
        }
        void insert(T val){
            size++; 
            if(size == 1){
                root = new Node(val); 
                return; 
            }
            Node *temp = root; 
            while(temp != nullptr){
                if(val >= temp->data){ //* go to right of temp
                    if(temp->right == nullptr){
                        temp->right = new Node(val); 
                        return; 
                    } else {
                        temp = temp->right; 
                    }

                } else{ //* go to the left 
                    if(temp->left == nullptr){
                        temp->left = new Node(val); 
                        return;
                    } else {
                        temp = temp->left; 
                    }
                }
            }
        }

        void print()
        {
            root->print();
        }
        
        void printInOrder(Node target)
        {
            if (target->left != nullptr) //Explore the left child of TARGET
            {
                printInOrder(target.left); //Recursive call on left child
            }

            cout << target.data << endl; //Print the data in TARGET

            if (target.right != nullptr) //Explore the right child of TARGET
            {
                printInOrder(target.right); //Recursive call on right child
            }
        }

        void preorderPrint(Node target)
        {
            cout << target.data << endl; //Print value of current TARGET

            //Explore left subtree
            if (target.left != nullptr)
            {
                preorderPrint(target.left); //Recursive call on left child
            }

            //Explore right subtree
            if (target.right != nullptr)
            {
                preorderPrint(target.right); //Recursive call on right child
            }
        }

        void postorderPrint(Node target)
        {
            if (target.left != nullptr)
            {
                postorderPrint(target.left);
            }
            if (target.right != nullptr)
            {
                postorderPrint(target.right);
            }
            cout << target.data << endl;
        }
        Node getRoot(){
            return *root;
        }
        void insertRecursively(T val){
            if(size == 0){
                size++;
                root = new Node(val); 
                return;
            }
            insertRecursively(root, val); 
        }
        void insertRecursively(Node *root, T val){
            if(val >= root->data){ //* right side
                if(root->right == nullptr){
                    root->right = new Node(val);
                    size++;
                    return;
                }
                insertRecursively(root->right, val); 
            } else {
                if(root->left == nullptr){
                    root->left = new Node(val);
                    size++;
                    return;
                }
                insertRecursively(root->left, val); 
            }
        }
    private:
        int size;
        Node *root; 
};



#endif