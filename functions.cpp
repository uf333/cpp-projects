#include <iostream>
using namespace std;

void greet (string name) {
    cout <<"Hello" <<name << "!" << endl; 
}

int add (int a , int b) {
    return a + b; 

} 

int main () {
    greet ("Umm E Farwa"); 
    int result = add (5,3); 
    cout << "5+3 = " << result << endl; 
    return 0; 
}

