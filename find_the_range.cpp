#include <stdio.h>

using namespace std;
int arr_a[100005], arr_b[100005];

int find(int l, int h, int key){

    while(l<h){
        int mid = (l+h+1)/2;
        if(key<arr_a[mid]){
            h = mid-1;
            
        }else{
            l = mid;
        }
    }
    return l;
}

int main()
{

    int num, query;
    scanf("%d %d", &num, &query);
    for (int i = 0; i < num; i++)
    {
        scanf("%d %d", &arr_a[i], &arr_b[i]);
        
    }
    for (int i = 0; i < query; i++)
    {
        int val;
        scanf("%d", &val);
        int ind = binary_search(0,num-1, val);
        if(val<= arr_b[ind] && val>= arr_a[ind]){
            printf("Yes\n");
        }else{
            printf("No\n");
        }
        
    }

    return 0;
}