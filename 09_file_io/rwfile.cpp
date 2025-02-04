#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string name;

    // connecting to our file out stream
    ofstream out("sample.txt");
    cout<<"Enter your name";
    cin>>name;
    out<<"Name: "<<name;

    out.close();

    ifstream in("sample.txt");
    string content;
    getline(in, content);
    cout<<content<<endl;
    in.close();
    return 0;
}