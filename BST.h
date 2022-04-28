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
                postorderPrint(target.right)
            }
            cout << target.data << endl;
        }

    private:
        int size;
        Node *root; 
};



#endif