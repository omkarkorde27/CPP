#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    string s = "Omkar";

    int length = s.size();

    s += 'a';

    cout << s << "\n";

    s[length - 3] = 'a';

    cout << s[length-5] << endl;
    cout << s[length-4] << endl;
    cout << s[length-3] << endl;
    cout << s[length-2] << endl;
    cout << s[length-1] << endl;

    return 0;
}