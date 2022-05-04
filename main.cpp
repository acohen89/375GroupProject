using namespace std; 
#include <iostream>
#include <fstream>
#include <string>
#include <iostream>
#include <chrono>
#include <fstream>
#include <bits/stdc++.h>
#include <sstream>
#include <stdlib.h>     
#include <time.h>       
#include <vector>
#include <time.h>
#include <array>
#include "item.h"
#include "Node.h"
#include "BST.h"

int countValues(string basicString);

#define NUM_RANDS 10000
#define INT_RANGE 350000000

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
            bstR.insert(stoi(lineR)); 
        }
    }
    stop = std::chrono::high_resolution_clock::now();
    cout << "Recursive Time Taken: " << (double)std::chrono::duration_cast<std::chrono::microseconds>(stop - start).count() / 1000000 << " Seconds " << endl; 

    srand (time(NULL)); 
    vector<int> randNums; 
    for(int i = 0; i < NUM_RANDS; i++){    
        randNums.push_back(rand() % INT_RANGE); 
    }
    start = std::chrono::high_resolution_clock::now(); 
    for(int i = 0; i < NUM_RANDS; i++){
        bst.find(randNums.at(i));
    }
    stop = std::chrono::high_resolution_clock::now();
    cout << "Time Taken: " << (double)std::chrono::duration_cast<std::chrono::microseconds>(stop - start).count() / 1000000 << " Seconds " << endl; 
    
    start = std::chrono::high_resolution_clock::now(); 
    for(int i = 0; i < NUM_RANDS; i++){
        bstR.findRecursively(randNums.at(i));
    }
    stop = std::chrono::high_resolution_clock::now();
    cout << "Recursive Time Taken: " << (double)std::chrono::duration_cast<std::chrono::microseconds>(stop - start).count() / 1000000 << " Seconds " << endl; 
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