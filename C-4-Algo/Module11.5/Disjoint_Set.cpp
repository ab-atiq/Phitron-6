/*Complete the functions below*/
int find(int par[], int x)
{
    // add code here
    if (par[x] == x)
        return x;
    par[x] = find(par, par[x]);
    return par[x];
}

void unionSet(int par[], int x, int z)
{
    // add code here.
    int leaderX = find(par, x);
    int leaderZ = find(par, z);
    par[leaderX] = leaderZ;
}