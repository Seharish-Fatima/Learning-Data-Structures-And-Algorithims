#include <iostream>
using namespace std;
int main()
{
    int v;
    int prev;
    int following;
    int n;
    int ans = 0;
    cout << "Enter the number of elements in the array: " << endl;
    cin >> n;
    int a[n];
    cout << "Enter the elements of the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        prev = a[i - 1];
        following = a[i + 1];
        v = a[i];
        if (a[i] > prev && a[i] > following)
        {
            ans++;
        }
        else
        {
            ans = ans;
        }
    }
    cout << ans << endl;
}