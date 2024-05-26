#include<iostream>
using namespace std;


int main()
{
    char ch;
    for(ch='A';ch<='Z';ch++)
    {
        cout<<"ASCII Value of : "<<ch<<"="<<(int)ch<<endl;
    }
    for(ch='a';ch<='z';ch++)
    {
        cout<<"ASCII Value of : "<<ch<<"="<<(int)ch<<endl;
    }
        return 0;
}
