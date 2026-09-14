#include <bits/stdc++.h>
using namespace std;
vector<int> Adj_list[1005];
bool visited_arr[1005];

void bfs(int src) {
    queue<int> q;
    q.push(src);
    visited_arr[src] = true;

    while (!q.empty()) {
        int parent = q.front();
        q.pop();

        for (int child : Adj_list[parent]) {
            if (!visited_arr[child]) { 
                q.push(child);
                visited_arr[child] = true;
            }
        }
    }
}

int main() {
    int Node, Edge;
    cin >> Node >> Edge;

    for (int i = 0; i < Edge; i++) {
        int n, m;
        cin >> n >> m;
        Adj_list[n].push_back(m);  
        Adj_list[m].push_back(n);
    }

    memset(visited_arr,false,sizeof(visited_arr)); 

    int src, dst;
    cin >> src >> dst;
    bfs(src);

    if (visited_arr[dst]) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
