#include <iostream>
using namespace std;

int main()
{

    int x,y,temp;

    cout<<"Input First Number:";
    cin>>x;
    cout<<"Input Second Number:";
    cin>>y;
  
    temp=y;
    y=x;
    x=temp;

    cout<<"After Swapping:"<<endl;

      cout<<"First Number: "<<x<<endl;
      cout<<"Second Number: "<<y<<endl;


return 0;
}