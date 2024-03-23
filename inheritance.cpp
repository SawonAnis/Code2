#include<iostream>
using namespace std;

class animal {

    public :
    void eat(){
        cout << "I can eat" << endl;
    }
    void run(){
        cout << "I can run" << endl;
    }
};

class Tiger:public animal{

    public:
    void roar(){
        cout << "I can Roar" << endl;
    }
};

int main(){

    Tiger tiger1;
    tiger1.eat();
    tiger1.run();
    tiger1.roar();

    return 0;
}

//REf:Programiz.com