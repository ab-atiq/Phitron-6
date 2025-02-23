#include<bits/stdc++.h>
using namespace std;
// 1st change: 105 to 1005
char grid[1005][1005];
bool vis[1005][1005];
vector<pair<int,int>> d = {{-1,0},{1,0},{0,-1},{0,1}};
int n,m;
int cnt; // 3rd change: add cnt variable
bool valid(int i, int j)
{
    if(i<0 || i>=n || j<0 || j>=m)
        return false;
    return true;
}

void dfs(int si, int sj)
{
    // cout << si << " " << sj << endl;
    vis[si][sj] = true;
    cnt++; // 7th: count update for individual area
    for(int i=0;i<4;i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if(valid(ci,cj) && !vis[ci][cj] && grid[ci][cj]=='.') // 8th: add condition for '.'
            dfs(ci,cj);
    }
}

int main()
{
    cin >> n >> m;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin >> grid[i][j];
    
    // 2nd change: remove source i and j
    memset(vis,false,sizeof(vis));
    
    int mn=INT_MAX; // 6th: add mn variable for min area count.
    
    // 4th change: loop throug all cell of 2d grid
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            if(!vis[i][j] && grid[i][j]=='.') // 5th: not visit and char must be '.'
            {
                cnt = 0;
                dfs(i,j);
                mn = min(cnt,mn);
            }
    // 9th: check for no cell present like '.'
    if(mn!=INT_MAX)
        cout<<mn<<endl;
    else
        cout<<-1<<endl;
    return 0;
}