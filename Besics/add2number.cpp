#include <iostream>
using namespace std;

inline int multiply(int a, int b) {
   return a * b;
}

int main() {
   int num1 = 5, num2 = 10;
   cout << "Product of " << num1 << " and " << num2 << " is: " << multiply(num1, num2);
   return 0;
}