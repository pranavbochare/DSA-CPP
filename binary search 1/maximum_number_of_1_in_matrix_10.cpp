#include <iostream>
using namespace std;
int main()
{
    int arr[4][5] = {{0, 0, 1, 1, 1}, {0, 0, 0, 1, 1}, {0, 1, 1, 1, 1}, {0, 0, 0, 0, 1}};
    int m = 4; // rows
    int n = 5; // column
    int x = 1;
    int row = 0;
    int maxones = 0;
    for (int i = 0; i < m; i++)
    { // binary search of every row
        int countones = 0;
        int low = 0;
        int high = n - 1;

        int firstidx = -1;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (arr[i][mid] == x)
            {
                if (mid == 0)
                {
                    firstidx = mid;
                    break;
                }
                else if (arr[i][mid - 1] != x)
                {
                    firstidx = mid;
                    break;
                }
                else if (arr[i][mid - 1] == x)
                {
                    high = mid - 1;
                }
            }
            else if (arr[i][mid] < x)
                low = mid + 1;
            else
                high = mid - 1;
        }
        if (firstidx == -1)
            countones = 0; // koi one present nahi hai
        else
            countones = n - firstidx;
        if (maxones < countones)
        {
            maxones = countones;
            row = i;
        }
    }
    cout << row;
}