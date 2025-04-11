#include <bits/stdc++.h>
using namespace std;
long long int dis[1001];
long long int a, b, w, dest;
int main()
{
   long long int n, e;
   cin >> n >> e;
   vector<pair<pair<long long int, long long int>, long long int>> edge_list;
   while (e--)
   {

      cin >> a >> b >> w;
      edge_list.push_back({{a, b}, w});
   }

   for (int i = 0; i < n; i++)
      dis[i] = LLONG_MAX;

   long long int src, qury;
   cin >> src >> qury;
   dis[src] = 0;

   for (long long int i = 0; i < n - 1; i++)
   {
      for (auto ed : edge_list)
      {
         long long int a = ed.first.first;
         long long int b = ed.first.second;
         long long int w = ed.second;
         if (dis[a] != LONG_MAX && dis[a] + w < dis[b])
            dis[b] = dis[a] + w;
      }
   }

   bool cycle = false;
   for (auto ed : edge_list)
   {
      long long int a = ed.first.first;
      long long int b = ed.first.second;
      long long int w = ed.second;
      if (dis[a] != LLONG_MAX && dis[a] + w < dis[b])
      {
         cycle = true;
         break;
      }
   }

   if (cycle)
   {
      cout << "Negative Cycle Detected";
      return 0;
   }

   while (qury--)
   {
      cin >> dest;
      if (dis[dest] == LLONG_MAX)
         cout << "Not Possible" << endl;
      else
         cout << dis[dest] << endl;
   }

   return 0;
}