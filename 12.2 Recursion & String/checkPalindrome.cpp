#include<iostream>
using namespace std;

bool isPalindrome(string str , int s , int e)
{
    if(s>e) return true;

    if(str[s] != str[e])
    {
        return false;
    }
    else
    {
        return isPalindrome(str , s+1 , e-1);
    }
}

int main()
{
    string name = "heuueh";

    int s = 0;
    int e = name.length() - 1;
    bool ans = isPalindrome(name , s , e);
    
    if(ans)
    {
        cout<<"is palindrome"<<endl;
    }
    else{
        cout<<"is not a palindrome"<<endl;
    }
return 0;
}