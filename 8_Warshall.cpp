#include <bits/stdc++.h>
using namespace std;
void Warshall(int A[][5], int u, int n)
{
    int p[5][5] = {};
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (A[i][j] != 0)
                p[i][j] = 1;
            else
                p[i][j] = 0;
        }
    }
    for (int k = 1; k < n; k++)
    {
        for (int i = 1; i < n; i++)
        {
            for (int j = 1; j < n; j++)
            {
                p[i][j] = (p[i][j] || (p[i][k] && p[k][j]));
            }
        }
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            cout << p[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int A[5][5] = {{0, 0, 0, 0, 0},
                   {0, 0, 1, 0, 0},
                   {0, 0, 0, 0, 1},
                   {0, 0, 0, 0, 0},
                   {0, 1, 0, 1, 0}};
    Warshall(A, 1, 5);
    return 0;
}