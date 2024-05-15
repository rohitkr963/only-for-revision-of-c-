#include <iostream>
 using namespace std;
// global variable 
int num = 50;

int main() {
int num = 100;

cout << " The value of the local variable num: " << num;

// use scope resolution operator (::) to access the global variable
 cout << "\n The value of the global variable num: " << ::num;

return 0;
}
