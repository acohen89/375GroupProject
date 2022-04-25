#ifndef BST_H
#define BST_H

using namespace std; 
#include <cstddef>

template <typename T> class BST{
    private: 
        int arr[];
    public: 
        BST(); 
        void insert(T);
        T findValue(T);
        T findInRange(T min, T low); 
};

#endif