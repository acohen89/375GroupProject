#include "item.h"



vector<string> stringToVector(string s){
    stringstream ss(s);
    string word;
    vector<string> stringVect; 
    while (ss >> word) {
        stringVect.push_back(word);
    }
    return stringVect;
}

Item::Item(string line){
    vector<string> vLine = stringToVector(line); 
    for(int i = 0; i < vLine.size(); i++){
        vals.push_back(stoi(vLine.at(i)));
    }
}

const double getAVG(vector<int> vals){
    int sum = 0; 
    for(int i = 0; i < vals.size(); i++){
        sum += vals.at(i);  
    }
    return sum / (double)vals.size(); 
}

bool operator<(const Item&i2, const Item& i){
    return getAVG(i2.vals) < getAVG(i.vals);
}
bool operator<=(const Item&i2, const Item& i){
    return getAVG(i2.vals) <= getAVG(i.vals);
}
bool operator>=(const Item&i2, const Item& i){
    return getAVG(i2.vals) >= getAVG(i.vals);
}
bool operator>(const Item&i2, const Item& i){
    return getAVG(i2.vals) > getAVG(i.vals);
}

void Item::print(){
     for(int i = 0; i < vals.size(); i++){
        cout << vals.at(i) << " ";  
    }
    cout << endl; 

}


