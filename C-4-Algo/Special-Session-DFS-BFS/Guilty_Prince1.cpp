#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

const int MAX_N = 20;
char arr[MAX_N][MAX_N];
bool visited[MAX_N][MAX_N];
int cnt;
int n, m;
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

bool valid(int ci, int cj)
{
    if (ci < 0 || ci >= n || cj < 0 || cj >= m)
        return false;
    return true;
}

void DFS(int si, int sj)
{
    visited[si][sj] = true;
    cnt++;

    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if (valid(ci, cj) && !visited[ci][cj] && arr[ci][cj] == '.')
        {
            DFS(ci, cj);
        }
    }
}

int main()
{
    int tc;
    cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        cin >> m >> n;
        int si, sj;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> arr[i][j];
                if (arr[i][j] == '@')
                {
                    si = i;
                    sj = j;
                }
            }
        }
        cnt = 0;
        memset(visited, false, sizeof(visited));
        DFS(si, sj);
        cout << "Case " << t << ": " << cnt << endl;
    }

    return 0;
}