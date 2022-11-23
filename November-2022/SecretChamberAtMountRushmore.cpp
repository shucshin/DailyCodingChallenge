//#include<bits/stdc++.h>
#include <iostream>
#include <vector>
#include <map>
#include <queue>
using namespace std;
#define pb(a) push_back(a)
#define rep(i,a,b) for(int i = a; i < b; i++)

void clearVisited(map<char, bool> &visited) {
    for(auto u : visited) {
        visited[u.first] = 0;
    }
}

bool bfs(char c, char d, map<char, vector<char> > &graph, map<char, bool> &visited) {
    // regreso true si encuentro d
    if(c == d) return true;
    visited[c] = 1;
    queue<char> q; q.push(c);
    while(!q.empty()) {
        char u = q.front(); q.pop();
        for(auto v : graph[u]) {
            // checo si cada vértice que se conectan con aristas con u son d
            if(v == d) return true;
            if(!visited[v]) {
                visited[v] = 1;
                q.push(v);
            }
        }
    }
    return false;
}

void solve(map<char, vector<char> > &graph, map<char, bool> &visited) {
    string s, t;
    cin >> s >> t;
    // no se puede traducir si tienen longitudes diferentes
    if(s.length() != t.length()) {
        cout << "no\n"; return;
    }
    rep(i,0,s.length()) {
        //si alguno de los caracteres no se puede traducir imprimo no
        if(!bfs(s[i], t[i], graph, visited)) {
            cout << "no\n"; 
            clearVisited(visited);
            return;
        }
        // reseteo después de bfs
        clearVisited(visited);
    }
    // llega aquí si todos los caracteres si llegan haciendo bfs
    cout << "yes\n";
}


int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    //freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
    int m, n; cin >> m >> n;
    map<char, vector<char> > graph;
    map<char, bool> visited;
    char u, v;
    // m aristas
    rep(i,0,m) {
        cin >> u >> v;
        graph[u].pb(v);
        visited[u] = 0; visited[v] = 0;
    }
    // n casos
    rep(i,0,n) {
        solve(graph, visited);
    }
    return 0;
}