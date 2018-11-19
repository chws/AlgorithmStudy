//1967
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    vector< vector<pair<int, int>> > node(N+1);
    vector<bool> isVisited(N+1);
    vector<int> dist(N+1);

    for(int i=0; i<N-1; i++){
        int x, y, w; 
        cin >> x >> y >> w;
        node[x].push_back(pair<int, int>(y, w));
        node[y].push_back(pair<int, int>(x, w));
    }

    queue<int> q;
    q.push(1);
    isVisited[1] = true;
    while(!q.empty()){
        int a = q.front();
        q.pop();

        for(pair<int, int> p : node[a]){
            if(!isVisited[p.first]){
                isVisited[p.first] = true;
                q.push(p.first);
                dist[p.first] = dist[a] + p.second;
            }
        }
    }

    int secondS = 1;
    int max = dist[1];

    for(int i=2; i<N+1; i++){
        if(max < dist[i]){
            max = dist[i];
            secondS = i;
        }
    }

    isVisited.clear();
    isVisited.resize(N+1);
    dist.clear();
    dist.resize(N+1);

    q.push(secondS);
    isVisited[secondS] = true;
    while(!q.empty()){
        int x = q.front();
        q.pop();

        for(pair<int, int> p : node[x]){
            if(!isVisited[p.first]){
                isVisited[p.first] = true;
                q.push(p.first);
                dist[p.first] = dist[x] + p.second;
            }
        }
    }

    int ans = 0;
    for(int i=1; i<N+1; i++){
        if(ans < dist[i]){
            ans = dist[i];
        }
    }

    cout << ans << '\n';
    return 0;

}