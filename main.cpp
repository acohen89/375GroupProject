using namespace std; 
#include <iostream>
#include <fstream>
#include <string>
#include <iostream>
#include <chrono>
#include <fstream>
#include <sstream>
#include <vector>
#include <time.h>
#include <array>
#include "item.h"
#include "Node.h"
#include "BST.h"

int countValues(string basicString);

int main(int argc, char *argv[]){
    string line;
    string filename = argv[1];
    BST<int> bst; 
    BST<int> bstR; 
    ifstream file(filename);

        auto start = std::chrono::high_resolution_clock::now(); 
    if (file.is_open()) {
        while (getline(file, line)) {
            bst.insert(stoi(line)); 
        }
    }
    auto stop = std::chrono::high_resolution_clock::now();
    cout << "Iterative Time Taken: " << (double)std::chrono::duration_cast<std::chrono::microseconds>(stop - start).count() / 1000000 << " Seconds " << endl; 

    start = std::chrono::high_resolution_clock::now(); 
    string lineR;
    string filenameR = argv[1];
    ifstream fileR(filenameR);
    if (file.is_open()) {
        while (getline(fileR, lineR)) {
            // cout << lineR << endl; 
            bstR.insert(stoi(lineR)); 
        }
    }
    stop = std::chrono::high_resolution_clock::now();
    cout << "Recursive Time Taken: " << (double)std::chrono::duration_cast<std::chrono::microseconds>(stop - start).count() / 1000000 << " Seconds ";
}

/**
 * Counts the number of input line2s in a file
 * @param filename the name of the file
 * @return the number of lines in the file
 */
int countValues(string filename)
{
    int itemCount = 0;
    ifstream file(filename);

    if (file.is_open())
    {
        string line;
        while(getline(file, line))
        {
            itemCount++;
        }
    }

    return itemCount;
}