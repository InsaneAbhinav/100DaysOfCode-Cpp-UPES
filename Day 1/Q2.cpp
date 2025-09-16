// Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Sum = " << a+b << ", Difference = " << a-b << ", Product = " << a*b ;
    
  if(b==0){
    cout << "Number cannot be divided with zero"<< e;
  }  
  else{
      cout << ", Quotient = " << a/b << endl;
    }
    return 0;
}
