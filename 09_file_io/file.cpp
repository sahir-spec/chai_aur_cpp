#include <iostream>
#include <fstream>
using namespace std;

// The useful classes for working with files in c++ are
// 1. fstreambase 
// 2. ifstream - dervied from fstreambase 
// 3. ofstream - dervied from fstreambase 

// In order work with files in c++, you will have to open it. Primarily, there are 2 ways to open a file:
// 1. using the constructor
// 1. using the member function open() of the class

int main() {
    string st = "The Sample";
    string st2;

    // opening file using constructor and writing it
    // ofstream out("sample.txt"); // write operation
    // out<<st;

    // Opening files using constructor and reading it
    ifstream in("sample2.txt");
    getline(in, st2);  // Reading the entire line from the file into st2
    cout << st2;

    return 0;
}