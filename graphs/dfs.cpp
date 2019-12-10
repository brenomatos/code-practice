#include <bits/stdc++.h>
#define INF 99999999
using namespace std;


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
  for (int i = 0; i < v; i++) {
    for (int j = 0; j < v; j++) {
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }
  return matrix;
}

void dfs(int starting_node, vector<int> nodes_visited, vector<vector<int>> G){
  stack<int> s;
  s.push(starting_node);

  while (!s.empty()) {
    starting_node = s.top();
    if (!nodes_visited[starting_node]) {
      cout << "Node Visited: " << starting_node << endl;
      nodes_visited[starting_node] = 1;
    }
    s.pop();
    for (int i = 0; i < G.size(); i++) {
      if (G[starting_node][i]) {
        if (!nodes_visited[i]) {
          cout << i << endl;
          s.push(i);
        }
      }
    }
  }
}

int main(int argc, char const *argv[]) {
  int nodes;
  vector<vector<int>> G;

  G = read_input();
  nodes = G.size();

  vector<int> nodes_visited(nodes,0);
  dfs(2,nodes_visited,G);
  return 0;
}
