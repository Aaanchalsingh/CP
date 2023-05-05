#include <bits/stdc++.h>
using namespace std;
void max_heap(int *a, int size, int key)
{
    size = size + 1;
    int pos = size;
    a[pos] = key;
    int par;
    while (pos > 1)
    {
        par = pos / 2;
        if (a[par] >= a[pos])
            return;
        else
        {

            swap(a[par], a[pos]);
            pos = par;
        }
    }
}
void build_heap(int *a, int n)
{
    for (int i = 1; i < n; i++)
    {
        max_heap(a, i,a[i]);
    }
}
int main()
{ 
    // 17 15 13 9 6 5 10 4 8 3 1
    int a[] = {1, 3, 5, 4, 6, 13, 10, 9, 8, 15, 17};
    build_heap(a, 11);
    for (int i = 0; i < 11; i++)
        cout << a[i] << " ";
    return 0;
}