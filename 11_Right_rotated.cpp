#include <bits/stdc++.h>
using namespace std;
void reverse(vector<int> &A, int beg, int end)
{
    while (beg <= end)
    {
        swap(A[beg], A[end]);
        beg++;
        end--;
    }
}
void right_rotate(vector<int> &A, int k)
{
    int n = A.size();
    k = k % n;
    {
        reverse(A, 0, n - k - 1);
        reverse(A, n - k, n - 1);
        reverse(A, 0, n - 1);
    }
}
void left_rotate(vector<int> &A, int k)
{
    int n = A.size();
    k = k % n;
    {
        reverse(A, 0, k - 1);
        reverse(A, k, n - 1);
        reverse(A, 0, n - 1);
    }
}
void display(vector<int> A)
{
    for (int i = 0; i < A.size(); i++)
        cout << A[i] << " ";
    cout << endl;
}
int main()
{
    vector<int> A = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    right_rotate(A, 4);
    display(A);
    left_rotate(A, 2);//AGAIN MAKING IT NORMAL
    display(A);

    return 0;
}