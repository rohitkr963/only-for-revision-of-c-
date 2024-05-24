#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
 string filename = "example.txt";
 // Writing to a file
 ofstream outputFile(filename);
 if (!outputFile.is_open()) {
 cout << "Error: Unable to open file for writing." << endl;
 return 1;
 }
 outputFile << "Hello, world!" << endl;
 outputFile << "This is a file write example." << endl;
 outputFile.close();
 // Reading from a file
 ifstream inputFile(filename);
 if (!inputFile.is_open()) {
 cout << "Error: Unable to open file for reading." << endl;
 return 1;
 }
 string line;
 cout << "Contents of " << filename << ":" << endl;
 while (getline(inputFile, line)) {
 cout << line << endl;
 }inputFile.close();
cout<<"kajal kumari Roll no:1323443"<<endl;
 return 0;
}