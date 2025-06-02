#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int arr[5];
    /* Note: We are not sure about the memory address of the element at 
    the 0th indice but we def know the address of the later elements
    as they will be right next to the 0th element. The elements are always
    consecutive */
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    arr[3] += arr[4];
    arr[0] += 10;

    cout << arr[0] << endl;
    cout << arr[3];
    
    return 0;
}