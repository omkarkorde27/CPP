#include<iostream>
using namespace std;

/*

Pattern type 1:
* * * *
* * * *
* * * *
* * * *
*/

int pattern1(){
    int i, j;
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            cout << '*' << ' ';
        }
        cout << endl;
    }
    return 0;
}

/*
Pattern type 2:

*
* *
* * * 
* * * *
* * * * *

*/

void pattern2(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

/*
Pattern type 3:
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/

void pattern3(int n){
    int i,j;
    for(i=1; i<=n; i++){
        for(j=1; j<=i; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}


/*
Pattern type 4:
1
2 2
3 3 3
4 4 4 4 
5 5 5 5 5
*/

void pattern4(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << i << " ";
        }
        cout << endl;
    }
}

/*
Pattern type 5:
* * * * *
* * * *
* * *
* *
*
*/

void pattern5(int n){
    for(int i = 1; i<=n; i++){
        for(int j=1;j<=n-i+1; j++){
            cout << '*' << " ";
        }
        cout << endl;
    }
}

/*

Pattern type 6:
1 2 3 4 5
1 2 3 4 
1 2 3 
1 2
1

*/

void pattern6(int n){
    for(int i = 1; i<=n; i++){
        for(int j=1;j<=n-i+1; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}


/*
Pattern type 7:
      *
     ***
    *****
   *******
  *********

*/

void pattern7(int n){
    for(int i=0; i<5; i++){
        for(int j=0; j<n-i-1; j++){
            cout << " ";
        }
        for(int k=0; k<2*i+1; k++){
            cout << "*";
        }
        for(int l=0; l<n-i-1; l++){
            cout << " ";
        }
        cout << endl;
    }
}

/*
Pattern type 8:
*********
 *******
  *****
   ***
    * 
*/

void pattern8(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        for(int k=0; k<2*n-2*i-1; k++){
            cout<<"*";
        }
        for(int l=0; l<i; l++){
            cout<<" ";
        }
        cout << endl;
    }
}

/*
Pattern type 9:
      *
     ***
    *****
   *******
  *********
  *********
   *******
    *****
     ***
      * 
*/

void pattern9(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            cout << " ";
        }
        for(int l=0; l<2*i+1; l++){
            cout << "*";
        }
        for(int k=0; k<n-i-1; k++){
            cout << " ";
        }
        cout << endl;
    }
    for(int a=0; a<n; a++){
        for(int b=0; b<a; b++){
            cout << " ";
        }
        for(int c=0; c<2*n-2*a-1; c++){
            cout << "*";
        }
        for(int d=0; d<a; d++){
            cout << " ";
        }
        cout << endl;
    }
}

/*
Pattern type 10:

*
**
***
****
*****
****
***
**
*

Both pattern10 and patternsameas10 give the same output
but patternsameas10 is better as it reduces redundancy

*/

void pattern10(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout << "*";
        }
        cout << endl;
    }
    for(int k=0; k<n; k++){
        for(int l=0; l<n-k-1; l++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void patternsameas10(int n){
    for(int i=1; i<2*n; i++){
        int stars = i;
        if(i>n){
            stars=2*n-i;
        }
        for(int j=0; j<stars; j++){
            cout << "*";
        }
        cout << endl;
    }
}

/*
Pattern type 11:
1 
0 1 
1 0 1 
0 1 0 1 
1 0 1 0 1 
*/
void pattern11(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            if((i+j+1)%2==0){
                cout<<0 << " ";
            }
            else{
                cout<<1<<" ";
            } 
        }
        cout<<endl;
    }
}


/*
Pattern type 12:
1        1
12      21
123    321
1234  4321
1234554321
*/
void pattern12(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<j+1;
        }
        for(int k=0; k<2*(n-i-1); k++){
            cout<<" ";
        }
        for(int l=0; l<=i; l++){
            cout<<i+1-l;
        }
        cout<<endl;
    }
}

/*
Pattern type 13:
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 

*/

void pattern13(int n){
    int num = 0;
    int integer = 1;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            num += integer;
            cout<<num << " ";
        }
        cout << "\n";
    }
}

/*
Pattern type 14:
A 
A B 
A B C 
A B C D 
A B C D E 
*/

void pattern14(int n){
    for(int i=0; i<n; i++){
        for(char ch='A'; ch<='A'+i; ch++){
            cout<<ch<<" ";
        }
        cout<<"\n";
    }
}

/*
Pattern type 15:
A B C D E 
A B C D 
A B C 
A B 
A 
*/

void pattern15(int n){
    for(int i=0; i<n; i++){
        for(char ch='A'; ch<'A'+n-i; ch++){
            cout<<ch<<" ";
        }
        cout<<"\n";
    }
}

/*
Patern type 16:
A 
B B 
C C C 
D D D D 
E E E E E 
*/

void pattern16(int n){
    for(int i=0; i<n; i++){
        char ch = 'A' + i;
        for(int j=0; j<=i; j++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

/*
Pattern type 17:
     A    
    ABA   
   ABCBA  
  ABCDCBA 
 ABCDEDCBA

pattern17 - my code
patternsameas17 - sriver's code
*/

void pattern17(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            cout<< " ";
        }
        for(char ch='A'; ch<='A'+i; ch++){
            cout<<ch;
        }
        for(int k=1; k<=i; k++){
            char ch = 'A' + i - k;
            cout<<ch;
        }
        for(int l=0; l<n-i-1; l++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void patternsameas17(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            cout<< " ";
        }
        char ch='A';
        int breakpoint = (2*i+1) /2;
        for(int z=1; z<=2*i+1; z++){
            cout<<ch;
            if(z <= breakpoint) ch++;
            else ch--;
        }
        for(int k=1; k<=i; k++){
            char ch = 'A' + i - k;
            cout<<ch;
        }
        for(int l=0; l<n-i-1; l++){
            cout<<" ";
        }
        cout<<endl;
    }
}

/*
Pattern type 18:
E
DE
CDE
BCDE
ABCDE

*/

void pattern18(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            char ch = 'A' + (n-1-i+j);
            cout<<ch;
        }
        cout<<"\n";
    }
}

/*
Pattern type 19:

**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********

*/

void pattern19(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            cout<<"*";
        }
        for(int k=0; k<2*i; k++){
            cout<<" ";
        }
        for(int l=0; l<n-i; l++){
            cout<<"*";
        }
        cout<<endl;
    }

    for(int a=0; a<n; a++){
        for(int b=0; b<=a; b++){
            cout<<"*";
        }
        for(int c=0; c<2*n-2*a-2; c++){
            cout<<" ";
        }
        for(int d=0; d<=a; d++){
            cout<<"*";
        }
        cout<<endl;
    }
    
}

void patternsameas19(int n){
    for(int i=0; i<10; i++){
        for(int j=0; j<5-i; j++){
            cout<<"*";
        }
        for(int k=0; k<2*i; k++){
            if(k<8 && i<5) cout<<" ";
            else break;
        }
        for(int l=0; l<5-i; l++){
            cout<<"*";  
        }
        if(i>4)
            for(int m=0; m<i-4; m++){
                cout<<"*";
            }
            for(int n=0; n<20-2*i-2; n++){
                cout<<" ";
            }
            for(int o=0; o<i-4; o++){
                cout<<"*";
            }
        cout<<endl;
    }
}

/*
Pattern type 20:

*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *

*/

void pattern20(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<"*";
        }
        for(int k=0; k<2*(n-i-1); k++){
            cout<<" ";
        }
        for(int l=0; l<=i; l++){
            cout<<"*";
        }
        cout<<"\n";
    }
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            cout<<"*";
        }
        for(int k=1; k<=2*(i+1); k++){
            cout<<" ";
        }
        for(int l=0; l<n-1-i; l++){
            cout<<"*";
        }
        cout<<"\n";
    }
}


/*

Pattern type 21:

****  
    
*  *
    
*  *
    
*  *
    
****  

*/

void pattern21(int n){
    for(int i=0; i<2*n-1; i++){
        for(int j=0; j<n-1; j++){
            if(i==0 || i==2*n-2)
                cout<<"*";
        }
        for(int k=0; k<1; k++){
            if(i>0 && i<2*(n-1) && i%2==0)
                cout<<"*";
            if(i%2 != 0) cout<<" ";
        }
        for(int l=0; l<2; l++){
            if(i>0 || i<2*(n-1)) cout<<" ";
        }
        for(int m=0; m<1; m++){
            if(i>0 && i<2*(n-1) && i%2==0)
                cout<<"*";
            if(i%2 != 0) cout<<" ";
        }
        cout<<endl;
    }
}

void pattern22(int n){
    for(int i=0; i<2*n-1; i++){
        for(int j=0; j<2*n-1; j++){
            int top = i;
            int left = j;
            int right = 2*n-2-j;
            int down = 2*n-2-i;
            cout << (n - min(min(left, right), min(top, down)))<<" ";
        }
        cout<<"\n";
    }
}

int main(){
    int n;
    cin >> n;
    pattern22(n);
    return 0;
}