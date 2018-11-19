//11725
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(){
    int N;
    cin >> N;

    vector<vector<int>> node(N+1);
    vector<bool> isVisited(N+1);
    vector<int> parent(N+1);

    for(int i=0; i<N-1; i++){
        int x, y;
        cin >> x >> y;
        node[x].push_back(y);
        node[y].push_back(x);
    }

    queue<int> q;
    q.push(1);
    isVisited[1] = true;

    while(!q.empty()){
        int root = q.front();
        q.pop();

        for(int i: node[root]){
            if(!isVisited[i]){
                isVisited[i] = true;
                q.push(i);
                parent[i] = root;
            }
        }
    }
    for(int i=2; i<N+1; i++){
        cout << parent[i] << '\n'; 
    }

    return 0;

}