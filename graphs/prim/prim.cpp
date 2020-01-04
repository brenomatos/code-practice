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

int prim(vector<vector<int>> G, int nnodes){
  vector<int> visited;
  int cost = 0;

  visited.push_back(0);
  for (int i = 1; i < nnodes; i++) {
      priority_queue<int, vector<int>, greater<int> > pq;
      for (int j = 0; j < visited.size(); j++) {
        if (G[i][visited[j]]) {
          pq.push(G[i][visited[j]]);
        }
      }
      cost += pq.top();
      cout << "custoh " << pq.top() << endl;
      visited.push_back(i);
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
  min_cost = prim(G, nnodes);
  cout << "custo minimo " << min_cost << endl;
  return 0;
}
