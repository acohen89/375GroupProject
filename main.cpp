using namespace std; 
#include <iostream>
#include <fstream>
#include <string>
#include <iostream>
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

    int index = 0;
    int itemCount = countValues(filename);
    int items [itemCount];

    if (file.is_open()) {
        while (getline(file, line)) {
            items[index] = stoi(line);
            index++;
        }
    }

    file.close();

    time_t iterativeNow = time(nullptr); //Init time variable
    iterativeNow = iterativeNow * 1000; //Convert to milliseconds
    for (int index = 0; index < itemCount; index++)
    {
        bst.insert(items[index]);
    }

    //NOTE: Add any iterative BST operations below this line

    time_t later = time(nullptr); //Init later variable
    iterativeNow = iterativeNow - later;

    time_t recursiveNow = time(nullptr);
    recursiveNow = recursiveNow * 1000;
    for (int index = 0; index < itemCount; index++)
    {
        bstR.insertRecursively(items[index]);
    }

    //NOTE: Add any recursive BST operations below this line

    later = time(nullptr);
    recursiveNow = recursiveNow - later;

    cout << "Iterative Runtime: " << iterativeNow << endl;
    cout << "Recursive Runtime: " << recursiveNow << endl;

    bst.print();
    //  cout << bst.findRecursively(27);
    //  bstR.print();
}

/**
 * Counts the number of input lines in a file
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