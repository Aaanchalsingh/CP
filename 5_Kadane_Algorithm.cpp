// MAXIMUM SUB ARRAY SUM
// KADANE ALGORITHM
//^[TIME COMPLEXITY = O(n) ]

#include <iostream>
using namespace std;
int main()
{
    int array[] = {1, 2, -3, 7, -8, 4, 3, -8, 7, 6, -5, 1};
    int current_sum = 0;
    int max = INT16_MIN;
    for (int i = 0; i < sizeof(array) / 4; i++)
    {
        current_sum += array[i];
        if (current_sum > max)
            max = current_sum;
        if (current_sum < 0)
            current_sum = 0;
    }

    cout << max;
    return 0;
}