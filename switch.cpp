#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    char alphabet;
    cin >> alphabet;
    switch(alphabet){
        /* Note: Depending on the datatype the case changes
            For eg: if the datatype was int the it would have
            been case 1: 
                    cout << "Apple" and so on
        */ 
        case 'a': 
            cout << "Apple";
            break;
        case 'b':
            cout << "Ball";
            break;
        case 'c':
            cout << "Cat";
            break;
        case 'd':
            cout << "Dog";
            break;
        case 'e':
            cout << "Elephant";
            break;
        case 'f':
            cout << "Fish";
            break;
        default:
            cout << "Invalid input";
    }
    return 0;
}
