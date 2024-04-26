#include <iostream>
using namespace std;
class printData
{
public:
    void print(int i)
    {
        cout << "Printing int:" << i << endl;
    }
    void print(double f)
    {
        cout << "Printing float: " << f << endl;
    }
    void print(char *c)
    {
        cout << "Printing character:" << c << endl;
    }
    void print(int a, int b)
    {
        cout << "Printing int:" << a << b << endl;
    }
};
    int main(void)
    {
        printData pd;
        pd.print(10);
        pd.print(100.278);
        pd.print("Hello Sawon");
        pd.print(5, 25);
        return 0;
    }
