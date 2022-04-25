#ifndef BST_H
#define BST_H

using namespace std; 

#include <vector>
#include <cstddef>

template <typename T> class BST{
    private: 
        vector<T> tree; 
        int size; 
    public: 
        BST(int); 
        void insert(T);
        void insertRecursively(T);
        T search(T);
        T searchRecursively(T, int search = 0);
        T findInRange(T min, T low); 
};

#endif