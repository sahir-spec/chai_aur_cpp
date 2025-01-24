#include <iostream>
using namespace std;

int main()
{
    int teaCups;

    cout << "Enter the number of tea cups to server: ";
    cin >> teaCups;

    while (teaCups > 0)
    {
        teaCups--;
        cout << "Serving a cup of tea " << endl
             << teaCups << "remaining" << endl;
    }

    cout << "All the tea cups are served. " << endl;

    return 0;
}