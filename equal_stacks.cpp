#include <bits/stdc++.h>

using namespace std;


int main(){

int a,b,c; cin>>a>>b>>c;
vector<int> h1,h2,h3;
vector<long> vec(3,0);
vector<int> :: iterator it1, it2, it3;
long i1=0,i2=0,i3=0;

for(int i=0; i<a; i++){
    int item; cin>>item;
    h1.push_back(item); 
} 
for(int i=0; i<b; i++){
    int item ; cin>>item;
    h2.push_back(item);
}
for(int i=0; i<c; i++){
    int item; cin>>item;
    h3.push_back(item);
}


for(it1 = h1.end()-1; it1>=h1.begin(); it1--){
i1 += *it1;
vec.push_back(i1);
}
for(it2 = h2.end()-1; it2>=h2.begin(); it2--){
i2 += *it2;
vec.push_back(i2);
}
for(it3 = h3.end()-1; it3>=h3.begin(); it3--){
i3 += *it3;
vec.push_back(i3);
}
sort(vec.begin(), vec.end());



for(auto it = vec.end()-1; it>= vec.begin(); it--){
   if(*it == *(it-1) && *(it-1) == *(it-2) && *(it-2)== *it){
       
           cout<<*it;
           break;
       
   }
   

}


return 0;
}