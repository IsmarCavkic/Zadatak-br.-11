#include <iostream>
using namespace std;

// Unose se dva cijela broja a i b.Ispisati sve brojeve od a do b uključujući brojeve a i b.

int main() {
  int a, b;
  
  cout<<"Unesite dva cijela broja:"<<endl;
  cin>> a >> b;

  while (a<=b){
    cout<< a << " ";
    a++;
  }
return 0;
}