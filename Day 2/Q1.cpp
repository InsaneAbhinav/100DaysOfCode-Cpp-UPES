// Q1: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include<iostream>
using namespace std;

int main(){
  int l, b;
  cout<<"Enter length and breadth: ";
  cin>>l>>b;
  cout<<"Area="<< l*b<< ", Perimeter="<< 2*(l+b);
  return 0;
}
