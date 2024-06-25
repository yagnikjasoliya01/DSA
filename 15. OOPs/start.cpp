#include<iostream>
using namespace std;

class start
{
private:
    int health;
public:
    char level;

    start(int health , char level)
    {
        this->health = health;
        this->level = level;
    }

    void print(){
        cout << "Health: " << this->health << endl;
        cout << "level: " << this->level << endl;
    }

};


int main()
{
    start S(70 , 'B');
    S.print();

    start R(S);
    R.print();

return 0;
}