using namespace std; 
#include <iostream>
#include <fstream>

#include "Node.h"
#include "BST.h"

int main(int argc, char *argv[]){
    string line;
    BST<int> bst; 
    ifstream file(argv[1]);
     if (file.is_open()){
        while(getline(file, line)){
            bst.insert(stoi(line));
        }
     }
     file.close();
     bst.printInOrder();
}