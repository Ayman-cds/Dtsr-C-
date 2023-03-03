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
// int main() {
//   int x = 10;

//   int y = ++x; // this will FIRST increment x THEN store its value in y
//   int z = x++; // this will FIRST store x in z THEN increment its value by 1 
//   return 0;
// }


// // implimenting z = (x + 10)/ 3y 
// int main(){
//   double x = 10;
//   double y = 5;
//   double z = (x + 10)/(3*y);
//   std::cout << z;
// }

// // writing output to the console 
// // we use => std::count which stands for Standard Output Stream
// // we also use => "<<"  which are what we call "the stream insertion operator"
// int main(){
//   int totalSales = 95000;
//   const double stateTax = 0.04;
//   const double countyTax = 0.04;

//   double stateTaxAmt = totalSales*stateTax;
//   double countyTaxAmt = totalSales*countyTax;
//   double netEarnings = totalSales - stateTaxAmt - countyTaxAmt; 

//   cout << "Total sales: $" << totalSales << endl;  
//   cout << "State tax: $" << stateTaxAmt << endl;
//   cout << "County tax: $" << countyTaxAmt << endl;
//   cout << "Net earnings: $" << netEarnings << endl;

// }


// // How to take user input 
// // you can use "cin" to get user data 
// // and also use the ">>" stream extraction operator 

// int main(){
//   cout << "Enter a value: ";
//   int value;
//   cin >> value;
//   cout << "Value is " << value << endl;
//   return 0;
// }

// // write a program to convert fahrenheit to celsius
// int main(){
//   cout << "Enter value in Fahrenheit: "; 
//   double fah;
//   cin >> fah; 
//   double cel = (fah - 32) / 1.8;
//   cout << cel << " degrees Celsius";
// }