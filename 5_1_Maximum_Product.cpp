// MAXIMUM PRODUCT SUB ARRAY
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int array[] = {0, 2, 0, 3, 0, 9, 0, 5, -1, 0};
    int current_sum = 1;
    int maxx = INT_MIN;
    for (int i = 0; i < sizeof(array) / 4; i++)
    {
        current_sum *= array[i];
        maxx = max(maxx, current_sum);
        if (current_sum == 0)
            current_sum = 1;
    }
    current_sum = 1;
    for (int i = (sizeof(array) / 4) - 1; i >= 0; i--)
    {
        current_sum *= array[i];
        maxx = max(maxx, current_sum);
        if (current_sum == 0)
            current_sum = 1;
    }
    cout << maxx;
    return 0;
}