#include <bits/stdc++.h>
using namespace std;
void BFS(int A[][7], int u, int n)
{
    queue<int> q;
    int visited[7] = {};
    cout << u << " ";
    visited[u] = 1;
    q.push(u);
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (int j = 0; j < n; j++)
        {
            if ((A[u][j] == 1) && (visited[j] == 0))
            {
                cout << j << " ";
                visited[j] = 1;
                q.push(j);
            }
        }
    }
}
int main()
{
    int A[7][7] = {{0, 0, 0, 0, 0, 0, 0},
                   {0, 0, 1, 1, 0, 0, 0},
                   {0, 1, 0, 0, 1, 0, 0},
                   {0, 1, 0, 0, 1, 0, 0},
                   {0, 0, 1, 1, 0, 1, 1},
                   {0, 0, 0, 0, 1, 0, 0},
                   {0, 0, 0, 0, 1, 0, 0}};
    BFS(A, 1, 7);
    return 0;
}