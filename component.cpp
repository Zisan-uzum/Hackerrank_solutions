#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the componentsInGraph function below.
 */

int dfs(int node, vector<vector<int>>& grp, vector<bool>& visited) {
    int cnt = 1;
    visited[node] = true;

    for(int c: grp[node]) {
        if(!visited[c]) {
            cnt += dfs(c, grp, visited);
        }
    }

    return cnt;

}

vector<int> componentsInGraph(vector<vector<int>> gb) {

    vector<vector<int>> grp(gb.size()*2);

    for(auto ab: gb) {
        int a = ab[0], b = ab[1];
        grp[a].push_back(b);
        grp[b].push_back(a);
    }


    vector<bool> visited(grp.size(), false);
    int maxx = 0;
    int minn = 0;
    for(int i=0;i<grp.size();i++) {
        if(!visited[i]) {
            int cnt = dfs(i, grp, visited);
            if(cnt > maxx) {
                maxx = cnt;
            } 
            if((cnt<minn || minn<2) && cnt > 1) {
                minn = cnt;
            }
        }
    }


    vector<int> result {minn, maxx};
    return result;

}

int main()
{
    int n;
    scanf("%d", &n);

    vector<vector<int>> gb(n, vector<int>(2));
    for(int i=0;i<n;i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        gb[i][0] = a-1;
        gb[i][1] = b-1;
    }

    vector<int> res = componentsInGraph(gb);

    printf("%d %d\n", res[0], res[1]);


    return 0;
}