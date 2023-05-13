#include <bits/stdc++.h>
using namespace std;
bool check(vector<int> &nums)
{
    // 1 2 3 4 5   //4 5 1 2 3
    // x=3
    // A[i]=B[(i+3)%a.lenght]
    // A[0]=B[(3)%5]
    // A[0]=B[3]
    // A[1]=B[4]
    // A[2]=B[0]
    // A[3]=B[1]
    // A[4]=B[2]
    bool flag = true;
    vector<int> B;
    vector<int> C = nums;
    sort(nums.begin(), nums.end());
    B = nums;
    int x = -1;
    for (int i = 0; i < nums.size(); i++)
    {
        x++;
        for (int p = 0; p < nums.size(); p++)
        {
            nums[p] = B[(p + x) % nums.size()];
        }
        flag=true;
        for (int j = 0; j < nums.size(); j++)
        {
            if (nums[j] != C[j])
            {
                flag = false;
                break;
            }
        }
        if (flag)
            return true;
    }
    return false;
}
int main()
{
    vector<int> nums{1,2,3};
    if (check(nums))
    {
        cout << "true";
    }
    else
        cout << "false";

    return 0;
}