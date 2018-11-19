//1167
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int main(){

    int V;
    cin >> V;
    vector< vector<pair<int, int>> > tree(V+1);
    vector<bool> isVisited(V+1);
    vector<int> dist(V+1);

    for(int i=0; i<V; i++){
        int N;
        cin >> N;

        int x;
        while(cin >> x && x != -1){
            int d;
            cin >> d;
            tree[N].push_back(pair<int, int>(x, d));
        }
    }

    queue<int> q;
    q.push(1);
    isVisited[1] = true;
    while(!q.empty()){
        int x = q.front();
        q.pop();

        for(pair<int, int> p : tree[x]){
            if(!isVisited[p.first]){
                isVisited[p.first] = true;
                q.push(p.first);
                dist[p.first] = dist[x] + p.second;
            }

        }
    }

    int secondS;
    int max = 0;
    for(int i=2; i<=V; i++){
        if(dist[i] > max){
            max = dist[i];
            secondS = i;
        }
    }

    isVisited.clear();
    isVisited.resize(V+1);
    dist.clear();
    dist.resize(V+1);


    q.push(secondS);
    isVisited[secondS] = true;
    while(!q.empty()){
        int x = q.front();
        q.pop();

        for(pair<int, int> p : tree[x]){
            if(!isVisited[p.first]){
                isVisited[p.first] = true;
                q.push(p.first);
                dist[p.first] = dist[x] + p.second;
            }

        }
    }

    int ans = 0;
    for(int i=1; i<=V; i++){
        if(ans < dist[i]){
            ans = dist[i];
        }

    }

    cout << ans << '\n';

    return 0;

    
}