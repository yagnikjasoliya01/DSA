#include<iostream>
using namespace std;

class B
{
    public:
    int a;
    int b;

    public:
    int adition(){
        return a+b;
    }

    void operator+ (B &obj){
        // int value1 = this -> a;
        // int value2 = obj.a;
        // cout<<"output: "<< value2 - value1 << endl;

        cout<< "hello world" << endl;
    }

    void operator() () {
        cout << "I am a braket " << this -> a << endl;
    }

};

int main()
{
    B obj1,obj2;
    obj1.a = 10;
    obj2.a = 20;

    obj1 + obj2;
    obj1();
return 0;
}