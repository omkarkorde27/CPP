#include<bits/stdc++.h>
#include<iostream>
using namespace std;

// void -> doesn't return anything Eg

void PrintName(){
    cout << "Hey, DJ" << endl;
}

void PrintName2(string name){
    cout << "Hey " << name << endl;
}

int main(){
    PrintName();

    string name;
    cin >> name;

    PrintName2(name);

    return 0;
}