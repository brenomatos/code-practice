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
    matrix[d-1][s-1] = w;
  }

  return matrix;
}
bool in_visited(int node, vector<int> visited){
    for (int i = 0; i < visited.size(); i++) {
      if (node == visited[i]) {
        return true;
      }
    }
    return false;
}

int prim(vector<vector<int>> G, int nnodes, int starting_node){
  vector<int> visited;
  int cost = 0;

  visited.push_back(starting_node);
  while (visited.size()!=nnodes) {
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> > pq;
    for (int i = 0; i < visited.size(); i++) {
      for (int j = 0; j < nnodes; j++) {
        if (G[visited[i]][j] && visited[i]!=j) {
          if (!in_visited(j,visited)) {
            pq.push(make_pair(G[visited[i]][j],j));
          }
        }
      }
    }
    cost += pq.top().first;
    visited.push_back(pq.top().second);
  }

  return cost;
}

int main(int argc, char const *argv[]) {
  int nnodes, min_cost;
  vector<vector<int>> G;

  G = read_input();
  print(G);
  nnodes = G.size();

  vector<int> nodes_visited(nnodes,0);
  min_cost = prim(G, nnodes, 0);
  cout << "custo minimo " << min_cost << endl;
  return 0;
}
