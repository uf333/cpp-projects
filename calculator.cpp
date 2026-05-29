#include <iostream>
using namespace std; 

int add (int a, int b ) {return a+b; }
int subtract (int a, int b) {return a-b;}
int multiply (int a, int b) {return a*b;}
double divide (int a, int b) {return a/b;}

int main () { 
    int num1, num2;
    char op; 

cout << "Enter first number: "; 
cin >> num1; 
cout << "Enter second number:"; 
cin >>  num2; 
 cout << "Enter operator (+, -, *, /): ";
 cin >> op; 

 if (op == '+')cout << num1 + num2 << endl; 
else if (op == '-')cout << num1 - num2 << endl;
else if (op =='*')cout << num1 *num2<< endl;
else if (op == '/') cout <<(double)num1/num2<<endl;
else cout << "Invalid operator" << endl; 

for (int i = 1; i <= 10; i++) {
cout << "Number:" << i << endl;
    }
return 0; 

} 