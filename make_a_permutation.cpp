#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int num; long asc = 0L;// dec =0;
    scanf("%d", &num);
    int arr[num];
    for (int i = 0; i < num; i++)
        scanf("%d", &arr[i]);
    sort(arr, arr+num);
    for (int i = 0; i < num; i++)
    {
        asc += abs((i + 1) - arr[i]);
        //dec += abs((num - i) - arr[i]);
    }
    printf("%ld", asc);

    return 0;
}