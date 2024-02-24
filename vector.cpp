#include<iostream>
#include<vector>
using namespace std;


int main()
{
    vector<int> X = {10, 20, 30, 40};
    cout << "Initial Vector: ";
    for(const int& i : X){

        cout << i << " ";
    }
    X.push_back(50);
    X.push_back(60);
    X.push_back(70);

    cout << "\nUpdated Vector: ";

    for(const int& i:X){
        cout << i << " ";
    }

    int Num = X.size();

    cout <<"\nThe Size of Vector: "<<Num;

    return 0;
} 