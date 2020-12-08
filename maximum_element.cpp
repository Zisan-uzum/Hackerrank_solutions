#include <cmath>
#include <cstdio>
#include <vector>
#include "iostream"
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main(){
    int query,option, p; cin>> query;
    stack<int> s;

    for(int i=0; i<query; i++){
         cin>>option;
         if(option ==1){
             cin>>p;

             if(s.empty()){
            	 s.push(p);
             }
             else{
            	 s.push(max(s.top(), p));
             }

         }
         else if(option==2){
             s.pop();
         }
         else if(option==3){
        	int max = s.top();
        	cout<<max<<endl;

         }
    }

    return 0;
}