#include <algorithm>
#include <iostream>
#include <cassert>
#include <climits>
#include <cstdlib>
#include <cstring>
#include <iomanip>
#include <numeric>
#include <cstdio>
#include <string>
#include <vector>
#include <cmath>
#include <ctime>
#include <queue>
#include <stack>
#include <map>
#include <set>

using namespace std;

vector<int> v[5000006]; // adj list
int H[5000006]; // marked 
int n,m,x,y;
int cnt = 0;

void dfs(int x) {
    H[x] = 1;
    cnt++;  // node sayısı

    for(int i=0 ; i<v[x].size() ; i++) {
        int y = v[x][i];

        if(!H[y]) {
            dfs(y);
        }
    }
}

int main(){
    cin >> n >> m;

    for(int i=1 ; i<=m ; i++) {
        cin >> x >> y;

        v[x].push_back(y);
        v[y].push_back(x);
    }

    dfs(1);

    if (cnt == n) {
        cout << "Connected" << endl;
    } else {
        cout << "Not Connected" << endl;
    }