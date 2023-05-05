#include <bits/stdc++.h>
using namespace std;
void Heapify(int *a, int n, int i)
{
    int left = 2 * i;
    int right = (2 * i) + 1;
    int larger = i;
    if ((left <= n) && (left > larger))
        larger = left;
    if ((right <= n) && (right > larger))
        larger = right;

    if (larger != i)
    {
        swap(a[i], larger);
        Heapify(a, n, larger);
    }
}
void display(int *A, int n)
{
    for (int i = 0; i < n; i++)
        cout << A[i] << " ";
    cout << endl;
}
void build_heap(int *a, int n)
{
    for (int i = n / 2; i > 0; i--)
    {
        Heapify(a, n, i);
        display(a, n);
    }
}

int main()
{
    // 17 15 13 9 6 5 10 4 8 3 1
    /*                  17
             1                     13
        9           3        5         10
    4     8      15   6

    */
    int a[] = {0, 1, 3, 5, 4, 6, 13, 10, 9, 8, 15, 17};
    build_heap(a, 12);
    display(a, 12);
    return 0;
}