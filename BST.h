#ifndef BST_H
#define BST_H

using namespace std; 

#include <vector>
#include <cstddef>

template <typename T> class BST{
    public: 
        int data;
        BST* left; 
        BST* right; 
        BST(T value){
            data = value; 
            left = nullptr;
            right = nullptr; 
        }
        void insert(T value){
            BST* curLeft = left; 
            BST* curRight = right;
            while(true){
                if(value > data){  //*insert to right 
                    if(curRight == nullptr){
                        curRight = new BST(value); 
                        break;
                    } else {
                        curLeft = &curRight->left;
                        curRight = &curRight->right; 
                    }
                } else { //* insert ot left 
                    if(curLeft == nullptr){
                        curLeft = new BST(value); 
                        break;
                    } else {
                        curLeft = &curLeft->left;
                        curRight = &curLeft->right;
                    }
                }
    }
        }
        void insertRecursively(BST* root, T value){
            if(root == nullptr){
                root = new BST(value); 
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