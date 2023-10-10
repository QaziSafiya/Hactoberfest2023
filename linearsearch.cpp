#include <iostream>
using namespace std;

int LinearSearch(int arr[], int n, int k)
{
    if (n == 0)
        return false;
    if (arr[0] == k)
        return true;
    else
    {
        return LinearSearch(arr + 1, n - 1, k);
    }
}
int main()
{
    int n = 5;
    int arr[5] = {3, 4, 2, 1, 5};
    int k = 0;
    bool ans = LinearSearch(arr, n, k);
    if (ans)
    {
        cout << "found";
    }
    else
    {
        cout << "not found";
    }
    return 0;
}
