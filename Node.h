#ifndef NODE_H
#define NODE_H

using namespace std; 

#include <vector>
#include <cstddef>

template <typename T> class Node{
    public: 
        int data;
        Node* left; 
        Node* right; 
        Node(T value){
            data = value; 
            left = nullptr;
            right = nullptr; 
        }
        void insert(T value){
            Node* curLeft = left; 
            Node* curRight = right;
            while(true){
                if(value > data){  //*insert to right 
                    if(curRight == nullptr){
                        curRight = new Node(value); 
                        break;
                    } else {
                        curLeft = &curRight->left;
                        curRight = &curRight->right; 
                    }
                } else { //* insert ot left 
                    if(curLeft == nullptr){
                        curLeft = new Node(value); 
                        break;
                    } else {
                        curLeft = &curLeft->left;
                        curRight = &curLeft->right;
                    }
                }
    }
        }
        void insertRecursively(Node* root, T value){
            if(root == nullptr){
                root = new Node(value); 
                return;
            } else {
                if(value > root->data){ //* insert to the right 
                    insertRecursively(root->right, value); 
                } else { //* insert to the left
                    insertRecursively(root->left, value); 
                }
            }
        }
        T search(T);
        T searchRecursively(T, int search = 0);
        T findInRange(T min, T low); 
};

#endif