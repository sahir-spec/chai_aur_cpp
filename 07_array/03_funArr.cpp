#include <iostream>
using namespace std;

int totalChaiServed(int chai[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++)
    {
        total += chai[i];
    }
    return total;
}

int main() {
    int chaiServed[3] = {25, 30, 50};
    int total = totalChaiServed(chaiServed, 3);

    return 0;
}