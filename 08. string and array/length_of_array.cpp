#include<iostream>
using namespace std;

int toLowercase(char ch)
{
    if(ch>='a' && ch<='z')
    {
        return ch;
    }
    else{
        char temp=ch-'A'+'a';
        return temp;
    }
}
    
bool checkpalindrome(char a[], int n)
{
    int s=0;fx
    int e=n-1;

    while(s<=e)
    {
        if(toLowercase(a[s]) != toLowercase(a[e]))
        {
            return 0;
        }

        else{
            s++;
            e--;
        }
    }
    return 1;
}

int length(char name[])
{
    int count=0;
    for(int i=0; name[i] != '\0' ;i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char name[100];

        cout<<"enter your name" << endl;
        cin>>name;

        cout<<"your name is:"<<name <<endl;

        int len=length(name);
        cout<< "length is:"<< len <<endl;

        cout<< "palindrome or not:"<< checkpalindrome(name,len)<<endl;

return 0;
}
