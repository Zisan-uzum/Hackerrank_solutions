#include <stdio.h>
#include <vector>
using namespace std;
 // 5
//2 4 1 3 5
 // 1 4 2 3 5
 // 1 3 2 4 5
 // 1 2 3 4 5
vector<int> list;
int find(int l, int h, int key){

    while(l<h){
        int mid = (l+h+1)/2;
        if(key<list[mid]){
            h = mid-1;
            
        }else{
            l = mid;
        }
    }
    return l;
}

int main(){
        int size; scanf("%d", &size);
        int count = 0; // increase when swapping
        for(int i=0; i<size; i++){
            int val; 
            list.push_back(val); // keep the values in vector
        }
        for(int i=0; i<size; i++){
            int index_of_close = find(0, size-1, list[i]); // it keeps the smaller or equal item
            if(index_of_close != i){ // if it isnt equal to own
            
                int temp = list[i];
                list[i] = list[index_of_close];
                list[index_of_close] = temp;
                count++;
            }
            
        }
        printf("%d", count);
        

            

    return 0;
}