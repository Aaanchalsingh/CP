#include <bits/stdc++.h>
using namespace std;
void Floydd_Warshall(int A[][4], int u, int n)
{
    int p[4][4] = {};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (A[i][j] == 0)
                p[i][j] = 100;
            else
                p[i][j] = A[i][j];
        }
    }
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                p[i][j] = min(p[i][j], (p[i][k] + p[k][j]));
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << p[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int INF = 999;
    int A[4][4] = {{0, 3, INF, 5},
                   {2, 0, INF, 4},
                   {INF, 1, 0, INF},
                   {INF, INF, 2, 0}};
    Floydd_Warshall(A, 1, 4);
    return 0;
}