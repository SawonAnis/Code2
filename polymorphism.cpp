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
        pd.print(5);
        pd.print(500.263);
        pd.print("Hello C++");
        pd.print(5, 10);
        return 0;
    }