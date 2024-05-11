#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int arr[5] = {-2, -4, 5, 0, -1};
    int max = INT_MIN;
    int smax = INT_MIN;
    for (int i = 0; i < 6; i++)
    {
        if (arr[i] > max)
        {
            smax = max;
            max = arr[i];
        }
        else if (arr[i] != max && arr[i] > smax)
        {
            smax = arr[i];
        }
    }
    cout << max << endl;
    if (smax == INT_MIN)
        cout << "no second max exists";
    else
        cout << smax;
}