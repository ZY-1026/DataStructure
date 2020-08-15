#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include<vector>
using namespace std;
const int INF = 0x3f3f3f3f;
const int maxn = 1005;
int n,m,mp[maxn][maxn], dist[maxn], vis[maxn];

int prime(int start){
    vector<int > a;
    memset(vis, 0, sizeof(vis));
    memset(dist, INF, sizeof(dist));
    vis[start] = 1;

    int pt, mindist, path = 0, cur = start;
    for(int i=2; i<=n; ++i){
        mindist = INF;
        pt = -1;
        for(int i=1; i<=n; ++i){
            if(!vis[i] && mp[cur][i] > 0 && mp[cur][i] < dist[i]){
                dist[i] = mp[cur][i];
            }
            if(!vis[i] && mindist > dist[i]){
                mindist = dist[i];
                pt = i;
            }
        }
        a.push_back(mindist);
        // path += mindist;
        vis[pt] = 1;
        cur = pt;
    }
    int max= 0x80000000;
    int min = 0x7fffffff;
    for (int j = 0; j <a.size() ; ++j) {
        if(a[j] > max) max = a[j];
    }
    for (int j = 0; j <a.size() ; ++j) {
        if(a[j] < min) min = a[j];
    }
    return max - min;
}

int main(){
    freopen("in.txt", "r", stdin);

    int x, y, val, ans;
    while(scanf("%d %d", &n, &m) != EOF){
        memset(mp, 0, sizeof(mp));
        for(int i=0; i<m; ++i){
            scanf("%d %d %d", &x, &y, &val);
            mp[x][y] = mp[y][x] = val;
        }
        ans = prime(1);
        printf("%d\n", ans );
    }
    return 0;
}