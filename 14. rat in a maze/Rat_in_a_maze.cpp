#include <bits/stdc++.h>
using namespace std;

class Solution{
    
    bool issafe( int x, int y, vector<vector<int>>& visited , vector<vector<int>> &m, int n)
{
    if((x>=0 && x<n) && (y>=0 && y<n) && (visited[x][y] == 0) && (m[x][y] == 1))
    {
        return true;
    }
    else
    {
        return false;
    }
}

void solve(vector<vector<int>> &m, int n, int x, int y, vector<string>& ans, 
           string path , vector<vector<int>> visited)
        {
            //   base case
            if(x==n-1 && y==n-1)
            {
               ans.push_back(path);
               return;
            }
            
            visited[x][y] = 1;
            
            //down
            int newx = x+1;
            int newy = y;
            if(issafe(newx , newy , visited ,m ,n))
            {
                path.push_back('D');
                solve(m, n, newx, newy, ans, path, visited);
                path.pop_back();
            }
            
            // left
            newx = x;
            newy = y-1;
            if(issafe(newx , newy , visited ,m ,n))
            {
                path.push_back('L');
                solve(m, n, newx, newy, ans, path, visited);
                path.pop_back();
            }
            
            // right
            newx = x;
            newy = y+1;
            if(issafe(newx , newy , visited ,m ,n))
            {
                path.push_back('R');
                solve(m, n, newx, newy, ans, path, visited);
                path.pop_back();
            }
            
            // up
            newx = x-1;
            newy = y;
            if(issafe(newx , newy , visited ,m ,n))
            {
                path.push_back('U');
                solve(m, n, newx, newy, ans, path, visited);
                path.pop_back();
            }
            
            visited[x][y] = 0;
        }
        
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string> ans;
        if(m[0][0] == 0)
        {
            return ans;
        }
        
        int srcx = 0;
        int srcy = 0;
        
        vector<vector<int>> visited = m;
        
        for(int  i=0 ; i<n ; i++)
        {
            for(int j=0 ; j<n ; j++)
            {
                visited[i][j] = 0;
            }
        }
        
        string path = "";
        solve(m, n, srcx, srcy, ans, path, visited);
        sort(ans.begin(), ans.end());
        return ans;
    }
};


    


