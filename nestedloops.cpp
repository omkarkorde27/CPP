// Example of nested loops
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int age;
    cin >> age;
    if(age < 0){
        cout << "Invalid Input";
    }
    else if(age<18){
        cout << "Not eligibel for a job";
    }    
    /*
    else if(age>=18){
        cout << "Eligible for a job";
    }
    */
   /* Not a good practice to write nested loops like this 
   but useful for complex problems */
    else if(age<=57){
        cout << "Eligible for a job ";
        if(age>55){
            cout << "but retirement soon";
        }
    }
    else if(age>57){
        cout << "Retirement time";
    }
    return 0;
}