#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    // int(4 bytes on 32 bits) minimum range[-10^9 to 10^9] double
    int x, y;
    cin >> x >> y;
    cout << "Value of x is " << x << " and y is " << y << "\n";

    // long(4 bytes on 32 bit system and 8 bytes on 64bit system) minimum range[-10^12 to 10^12]
    long z;
    cin >> z;
    cout << "Value of z is " << z ;

    //  long long(8 bytes on both 32 and 64 bit system) minimum range[-10^18 to 10^18]
    long long a;
    cin >> a;
    cout << "\n" << "Value of a is " << a;

    // Note: Your Mac (or any system) might only show a limited number of digits by default when printing using printf, cout, or even IDEs like VS Code or Xcode.

    // float(4 bytes) decimal precision (~7 digits)
    float b;
    cin >> b;
    cout << endl << "Value of b is " << b;

    // double(8 bytes) decimal precision (~15-16 digits)
    double c = 2.1092129091;
    cout << endl << "Value of c is " << c;

    // string (this will print only word)
    string s;
    cin >> s;
    cout << endl << s;

    // if you have to print two strings on one line
    string s1;
    string s2;
    cin >> s1 >> s2;
    cout << endl << s1 << " " << s2;

    // (if you have to print the entire line)
    string str, str1, str2;
    cin >> str >> str1 >> str2;
    cout << endl << str << " " << str1 << " " << str2; 

    // getline (if you have to print the entire line)
    cin.ignore();
    string char1;
    getline(cin, char1);
    cout << endl << char1;

    //char (used to store single character)
    char i = 'A'; // You can also use string to store the character but takes up a lot more space than char
    cout << "\n" << i;

    return 0;
}