#include <iostream>
using namespace std;


int main()
{
    string str;

    cout << "Please enter your name: ";
    getline(cin, str);
    cout << "Hello, " << str
         << " welcome to GfG !\n";

    return 0;
}
