/*Write a C++ Program to Access Protected Data Member using Inheritance*/


#include <iostream>
using namespace std;

class Base
{
protected:
    int protectedData;

public:
    Base(int data) : protectedData(data) {}

    void displayProtectedData()
    {
        cout << "Protected data in Base class: " << protectedData << endl;
    }
};

class Derived : public Base
{
public:
    Derived(int data) : Base(data) {}

    void accessProtectedData()
    {
        cout << "Accessing protected data in Derived class: " << protectedData << endl;
    }
};

int main()
{
    Derived derivedObj(100);

    derivedObj.displayProtectedData();

    derivedObj.accessProtectedData();

    return 0;
}
