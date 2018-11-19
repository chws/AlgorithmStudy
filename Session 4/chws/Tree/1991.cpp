//1991
#include <iostream>
using namespace std;

int node[27][2];
void preorder(int n){
    if(n == -1) return;
    cout << (char)(n+'A');
    preorder(node[n][0]);
    preorder(node[n][1]);

}

void inorder(int n){
    if(n == -1) return;
    inorder(node[n][0]);
    cout << (char)(n+'A');
    inorder(node[n][1]);
}

void postorder(int n){
    if(n == -1) return;
    postorder(node[n][0]);
    postorder(node[n][1]);
    cout << (char)(n+'A');
}

int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        char x, y, z;
        cin >> x >> y >> z;
        x = x - 'A';
        if(y=='.'){
            node[x][0] = -1;
        }else{
            node[x][0] = y-'A';
        }

        if(z=='.'){
            node[x][1] = -1;
        }else{
            node[x][1] = z-'A';
        }
    }

    preorder(0);
    cout << '\n';
    inorder(0);
    cout << '\n';
    postorder(0);
    cout << '\n';

    return 0;
}