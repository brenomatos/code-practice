#include <bits/stdc++.h>

using namespace std;

void print(vector<vector<int> > matrix){
  int v = matrix.size();
  for (int i = 0; i < v; i++) {
    for (int j = 0; j < v; j++) {
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }
}
vector<vector<int> > read_input(){
  int v,e;
  int s,d,w;
  cin >> v >> e;
  vector<vector<int> > matrix(v);
  for ( int i = 0 ; i < v ; i++ ) matrix[i].resize(v);

  for (int i = 0; i < e; i++) {
    cin >> s >> d >> w;
    matrix[s-1][d-1] = w;
  }

  return matrix;
}

void bfs(int starting_node, vector<int> nodes_visited, vector<vector<int>> G){
    queue<int> q;
    int nodes = nodes_visited.size();
    q.push(starting_node);

    while (!q.empty()) {
      starting_node = q.front();
      nodes_visited[starting_node] = 1;
      cout << "Node Visited: " << starting_node << endl;
      q.pop();

      for (int i = 0; i < nodes; i++) {
        if (G[starting_node][i] && !nodes_visited[i]) {
          q.push(i);
        }
      }
    }
}

int main(int argc, char const *argv[]) {
  vector<vector<int>> G = read_input();
  int nodes = G.size();
  vector<int> nodes_visited(nodes, 0);
  bfs(2,nodes_visited,G);
  return 0;
}
