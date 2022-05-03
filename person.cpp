#include "person.h"



Person::Person(string line){
     vector<string> vLine = stringToVector(line); 
     name = vLine.at(0); 
     id = stol(vLine.at(1));
     gender = vLine.at(2); 
}

bool operator<(const Person& p2, const Person& p){
    return p2.id < p.id; 
}
bool operator<=(const Person& p2, const Person& p){
    return p2.id <= p.id; 
}
bool operator>=(const Person& p2, const Person& p){
    return p2.id >= p.id; 
}
bool operator>(const Person& p2, const Person& p){
    return p2.id > p.id; 
}