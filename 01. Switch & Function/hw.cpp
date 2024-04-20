#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter n";
    cin >> n;

    switch (1)
    {

    case 1:
        int a = n / 100;
        int b = n % 100;
        cout << "notes of 100$ you need is:" << a << endl;
        switch (1)
        {
        case 1:
            int c = b / 50;
            int d = b % 50;
            cout << "notes of 50$ you need is:" << c << endl;

            switch (1)
            {
            case 1:
                int e = d / 20;
                int f = d % 20;
                cout << "notes of 20$ you need is:" << e << endl;
                switch (1)
                {
                case 1:
                    int g = f / 1;
                    int h = f % 1;
                    cout << "notes of 1$ you need is:" << g << endl;
                    break;
                }
                break;
            }
            break;
        }
        break;
    }
}