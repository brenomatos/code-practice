#include <bits/stdc++.h>
#define INF 99999999
using namespace std;



// returns graph ready for the floyd warshall algorithm
vector<vector<int> > read_input(){
  int v,e;
  int s,d,w;
  cin >> v >> e;
  vector<vector<int> > matrix(v);
  for ( int i = 0 ; i < v ; i++ ) matrix[i].resize(v);

  for (int i = 0; i < v; i++) {
    for (int j = 0; j < v; j++) {
      if (i!=j) matrix[i][j] = INF;
    }
  }
  for (int i = 0; i < e; i++) {
    cin >> s >> d >> w;
    matrix[s-1][d-1] = w;
  }
  return matrix;
}

// returns matrix of distances
vector<vector<int>> floyd_warshall(vector<vector <int>> m){
  int v = m.size();
  for (int i = 0; i < v; i++) {
    for (int j = 0; j < v; j++) {
      for (int k = 0; k < v; k++) {
        m[i][j] = min(m[i][j],m[i][k] + m[k][j]);
      }
    }
  }

  return m;
}

void print(vector<vector<int>> m){
  int v = m.size();
  for (int i = 0; i < v; i++) {
    for (int j = 0; j < v; j++) {
      cout << m[i][j] << " ";
    }
    cout << endl;
  }
}

int main(int argc, char const *argv[]) {
  vector<vector <int>> m,dist;
  m = read_input();
  dist = floyd_warshall(m);
  print(dist);
  return 0;
}
