#include <bits/stdc++.h>
using namespace std;
vector<int> leaders(int a[], int n)
{
    vector<int> ans;
    ans.push_back(a[n - 1]);
    int i, maxm = a[n - 1];
    for (i = n - 2; i >= 0; i--)
    {
        if (a[i] >= maxm)
        {
            ans.push_back(a[i]);
            maxm = a[i];
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
void display(vector<int> A, int n)
{
    for (int i = 0; i < n; i++)
        cout << A[i] << " ";
    cout << endl;
}
int main()
{
    int A[] = {7, 1, 5, 3, 6, 4};
    vector<int> c = leaders(A, 6);
    display(c, 3);

    return 0;
}