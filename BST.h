#ifndef BST_H
#define BST_H

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
        BST(){
            size = 0; 
        }
        void insertRecursively(T val){

        }
        void insert(T val){
            size++; 
            if(root == nullptr){
                *root = val;
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
                        temp->left = mew Node(val); 
                        return;
                    } else {
                        temp = temp->left; 
                    }
                }
            }
        }  
    private:
        int size;
        Node *root; 
};



#endif