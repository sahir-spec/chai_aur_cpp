#include <iostream>
using namespace std;

int main()
{
    int selectTea;
    int greenTea = 2, blackTea = 3, OolongTea = 4;

    cout << "Enter Give Numbers to Check Tea Price: " << endl
         << "1. Green Tea" << endl
         << "2. Black Tea" << endl
         << "3. Oolong Tea"<<endl;
    cin >> selectTea;

    switch (selectTea)
    {
    case 1:
        cout << "Green Tea price is " << greenTea << "$" << endl;
        break;
    case 2:
        cout << "Black Tea price is " << blackTea << "$" << endl;
        break;
    case 3:
        cout << "Oolong Tea price is " << OolongTea << "$" << endl;
        break;
    default:
        cout << "Enter Valid Number." << endl;
    }

    return 0;
}