#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    scanf("%d", &n);
    int res = 1;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            res = -1; // if there are any value equals to 1 we can obtain any value
        }
    }
    printf("%d", res);
}