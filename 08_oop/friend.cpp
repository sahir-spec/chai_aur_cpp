#include <iostream>
#include <string>
using namespace std;

class Chai
{
private:
    string teaName;
    int serving;

public:
    Chai(string name, int serve) : teaName(name), serving(serve) {}

    friend bool compServe(const Chai &chai1, const Chai &chai2);

    void display() const
    {
        cout << "tea name: " << teaName << endl;
    }
};

bool compServe(const Chai &chai1, const Chai &chai2)
{
    return chai1.serving > chai2.serving;
}

int main()
{
    Chai masalaChai("Masala Chai", 4);
    Chai gingerChai("Ginger Chai", 8);

    masalaChai.display();
    gingerChai.display();

    if(compServe(masalaChai, gingerChai)) {
        cout << "Masala chai is having more servings" << endl;
    } else {
        cout << "Masala chai is having fewer servings" << endl;
    }

    return 0;
}
