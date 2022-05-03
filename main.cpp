using namespace std; 
#include <iostream>
#include <fstream>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <array>
#include "item.h"
#include "Node.h"
#include "BST.h"

int main(int argc, char *argv[]){
    string line;
    ifstream file(argv[1]);
     if (file.is_open()){
        while(getline(file, line)){
            Item<string> itemObj; 
            //Item<int> itemObj();
            //Item itemObj;
            string str(line);
            string tmp;
            stringstream str_strm(str);
            vector<string> items;
            while(str_strm >> tmp){
               // cout << tmp << endl;;
                //int temp = stoi(tmp);
                itemObj.setVector("SDS");
                //items.push_back(tmp);
            }
            // itemObj.printItem();
            /*
            // if size is greatere than 1 we need to 
            // make an object with a vector
            if(items.size() > 1){
                Item itemObj();
                itemObj.setVector();
                //TODO insert into BST

            }
            // if line size is 1
            // we dont need to pass in a vector
            else if(items.size() == 1){
                Item itemObj(items);
                //TODO: insert into BST
            }
*/
            cout << line << endl; 
        }
     }
     file.close();
}