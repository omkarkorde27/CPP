#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int marks;
    cin >> marks;
    if(marks<0){
        cout << "Invalid Input";
    }
    else if(marks<25 ){
        cout << "F";
    }
    else if(marks<=44){
        cout << "E";
    }
    else if(marks<=49){
        cout << "D";
    }
    else if(marks<=59){
        cout << "C";
    }
    else if(marks<=79){
        cout << "B";
    }
    else if(marks<=100){
        cout << "A";
    }

    return 0;
}

