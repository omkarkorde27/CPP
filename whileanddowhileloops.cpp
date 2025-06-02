#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    // while loop
    int j = 8;
    /*
    while(j<10){
        cout << "Ananya " << j << endl;
        j++;
    }
    cout << j;
    */

    // Difference between while and do while loop
    // Irrespective of your condition your program will be executed atleast once
    do{
        cout << "Ananya " << j << endl;
        j++;
    }while(j<10);

    cout << j;

    return 0;
}