#include<iostream>
using namespace std;

// int main(){
//    int a = 1; int b = 2;
//   int temp = a;
//   a = b;
//   b = temp;
//   std::cout << b;
//   // std::cout << b;
//   return 0;
// }

// constants in cpp
// int main(){
//   const double pi = 3.14;
//   return 0;
// }


// // how to write math exps
// int main() {
//   double x = 10; 
//   int y = 3;
//   double z = x/y;
//   std::cout << z;
//   return 0;
// }

// difference between increment and decrement operators
int main() {
  int x = 10;

  int y = ++x; // this will FIRST increment x THEN store its value in y
  int z = x++; // this will FIRST store x in z THEN increment its value by 1 
  return 0;
}