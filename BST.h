#ifndef BST_H
#define BST_H

using namespace std; 
#include <cstddef>

template <typename T> class BST{
    private: 
        int arr[];
        int size; 
    public: 
        BST(int); 
        void insert(T);
        void insertRecursively(T);
        T search(T);
        T searchRecursively(T);
        T findInRange(T min, T low); 
};

#endif