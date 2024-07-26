#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{
    int arr[] = {1, 2, 4, 6, 3, 4, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 10;
    int sum = 0;
    int minLen = INT_MAX;
    int len;
    int i = 0;
    int j = 0;
    while (j < n)                     // tc O(n)
    {                                 // number of oreration = 2*n
        sum += arr[j];
        while (sum >= target)
        {
            len = j - i + 1;
            minLen = min(minLen, len);
            sum -= arr[i];
            i++;
        }
        j++;
    }
    if (minLen == INT_MAX)
        cout << 0;
    else
        cout << minLen;
}