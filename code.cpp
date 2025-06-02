#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int age;
    cin >> age;
    if(age>=18){
        cout << "You are an adult";
    }
    else if(age<18 && age >=0){
        cout << "You are not an adult";
    }
    else{
        cout << "Invalid input";
    }

    return 0;
}
