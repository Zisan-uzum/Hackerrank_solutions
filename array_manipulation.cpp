#include <bits/stdc++.h>

using namespace std;

int main(){

    int size, query; cin>>size>>query;
    long max, temp = 0;
    vector<long> vec(size +2, 0);

    for(int i=0; i<query; i++){
    	int s, e, add; cin>>s>>e>>add;
    	vec[s] += add;
    	vec[e+1] -= add;
    }
    for(auto it : vec){
    	temp += it;
    	if(temp>max){

    		max = temp;

    	}
    }
cout<<max;

    return 0;
}