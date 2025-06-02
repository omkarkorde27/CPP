#include<bits/stdc++.h>
#include<iostream>
using namespace std;

// void function eg

/*
void Add(int num1, int num2){
    cout << num1 + num2;
}

int main(){

    int num1, num2;
    cin >> num1 >> num2;

    Add(num1, num2);

    return 0;
}
*/

// return function eg


/*
int sum(int num1, int num2, int num3){
    int res = num1 + num2 + num3;
    return res;
}

int main(){

    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;

    int output = sum(num1, num2, num3);

    cout << output;

    return 0;

}
*/

/*

int maxx(int num1, int num2){
    if(num1 > num2) return num1;
    else return num2;
}

int main(){
    int num1, num2;
    cin >> num1 >> num2;
    int result = maxx(num1, num2);
    cout << result;
}
*/

// What is a PASS BY VALUE fn?
// When we pass a value to a function we don't send the original value 
// we send a copy of it; whatever operations that take place they take place
// on the copy; so when we return a value in our main fn we get the original
// value back instead of the value returned in the other fn
// Let's see an eg

/*

void add(int num1, int num2){
    num1 += num2;
    cout << num1 << endl;
}

int main(){
    int num1 = 9121;
    int num2 = 3;

    add(num1, num2);

    cout << num1;

    return 0;

}

*/

// As you can see our original value was 9121. We passed the value to
// add fn and added num2 to num1 and printed the result. However, when we 
// print the value in our main fn it prints the original value. This is an 
// eg of PASS BY VALUE

// What is PASS BY REFERENCE?
// When we pass a value to a function we send the original value 
// whatever operations that take place they take place
// on the original unlike what happens in CALL BY VALUE; so when we 
// return a value in our main fn we get the transformed value
// We use & inorder to get the transformed value
// Eg:

/*
void Character(string &s){
    s[2] = 'a';
    cout << s << endl;
}

int main(){
    string s;
    s = "Omkar";
    Character(s);

    cout << s;

    return 0;
}
    
*/

// PASS BY REFERENCE 
// EG but with arrays 

void DoSomething(int arr[], int n){
    arr[4] += 100;
    cout << arr[4] << endl;
}

int main(){
    int n = 5;
    int arr[n];


    for(int i=0; i<= n-1; i++){
        cin >> arr[i];
    }

    DoSomething(arr, n);

    cout << arr[4];

    return 0;
}

