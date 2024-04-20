#include<iostream>
using namespace std;

//simple way to reverse a string------------------------
        int a = 0;
        int e = s.size()-1;

        while(a<e)
        {
            swap(s[a++],s[e--]);
        }


//with use of two-pointer------------------------------
class Solution {
public:
    int reverse(vector<char>& s, int a ,int e)
    {
        if(a>e) return -1;

        swap(s[a++],s[e--]);

        return reverse(s, a , e);
    }

    void reverseString(vector<char>& s) {
        int a = 0;
        int e = s.size()-1;

        reverse(s , a ,e);
    }
};


//with use of one-pointer------------------------------
        class Solution {
public:
    int reverse(vector<char>& s, int a )
    {
        if(a>s.size()-1-a) return -1;

        swap(s[a],s[s.size()-1-a]);

        return reverse(s, a+1 );
    }

    void reverseString(vector<char>& s) {
        int a = 0;
        // int e = s.size()-1;

        reverse(s , a );
    }
};      