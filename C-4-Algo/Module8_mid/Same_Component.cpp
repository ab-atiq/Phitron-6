#include<bits/stdc++.h>
using namespace std;
// 3rd change: size update 105 to 1005
char grid[1005][1005];
bool vis[1005][1005];
vector<pair<int,int>> d = {{-1,0},{1,0},{0,-1},{0,1}};
int n,m;

bool valid(int i, int j)
{
    if(i<0 || i>=n || j<0 || j>=m)
        return false;
    return true;
}

void dfs(int si, int sj)
{
    // cout << si << " " << sj << endl; // 5th change
    vis[si][sj] = true;
    for(int i=0;i<4;i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if(valid(ci,cj) && !vis[ci][cj] && grid[ci][cj]=='.') // 4th change: only go '.' path using grid[ci][cj]=='.'
            dfs(ci,cj);
    }
}

int main()
{
    cin >> n >> m;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin >> grid[i][j];

    int si,sj;
    cin >> si >> sj;
    // 1st change
    int di,dj;
    cin>>di>>dj; 
    
    memset(vis,false,sizeof(vis));
    dfs(si,sj);
    
    // 2nd change
    if(vis[di][dj]==true){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
    return 0;
}