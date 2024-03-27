#include <iostream>
#include <limits>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int a[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int previous_difference = a[1] - a[0];
    int current_subarray_length = 2;
    int max_subarray_length = 2;
    int j = 2;
    while (j < n)
    {
        if (previous_difference == a[j] - a[j - 1])
        {
            current_subarray_length++;
        }
        else
        {
            previous_difference = a[j] - a[j - 1];
            current_subarray_length = 2;
        }
        max_subarray_length = max(max_subarray_length, current_subarray_length);
        j++;
    }

    cout << "The length of the longest arithmetic subarray is: " << max_subarray_length << endl;
    return 0;
}