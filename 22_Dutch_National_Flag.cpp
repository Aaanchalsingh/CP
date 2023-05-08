#include <bits/stdc++.h>
using namespace std;
void sort012(vector<int> &a)
{
    int n = a.size();
    int low = 0, mid = 0, high = n - 1;
    while (mid < high)

    {
        if (a[mid] == 0)
        {
            swap(a[low], a[mid]);
            low++;
            mid++;
        }
        else if (a[mid] == 1)
            mid++;
        else if (a[mid] == 2)
        {
            swap(a[high], a[mid]);
            high--;
        }
    }
}
void display(vector<int> &A)
{
    int n = A.size();
    for (int i = 0; i < n; i++)
        cout << A[i] << " ";
    cout << endl;
}
int main()
{
    vector<int> a{1, 1, 1, 1, 0, 0, 2, 2, 2, 0, 0, 1, 1, 1, 1, 2, 0};
    sort012(a);
    display(a);

    return 0;
}