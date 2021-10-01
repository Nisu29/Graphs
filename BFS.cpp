#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;

void addEdge(vll adj[], ll u, ll v){
	adj[u].push_back(v);
	adj[v].push_back(u);
}

void BFS(ll u, vll adj[], vector<bool> &visited){
	queue<ll> q;
	q.push(u);
	visited[u]=true;
	while(!q.empty()){
		ll f=q.front();
		cout<<f<<" ";
		q.pop();
		for(auto i=adj[f].begin(); i!=adj[f].end();i++){ //using auto to automatically determine type of i
			if(visited[*i]==false){
				q.push(*i);
				visited[*i]=true;
			}//*operator used because idk the type and have used i
		}
	}
}
int main(){
	ll V=5;
	vll adj[V];
	vector<bool> visited(V, false);
	addEdge(adj, 0, 1); 
  	addEdge(adj, 0, 4); 
  	addEdge(adj, 1, 2); 
	addEdge(adj, 1, 3); 
	addEdge(adj, 1, 4); 
	addEdge(adj, 2, 3); 
	addEdge(adj, 3, 4); 

	BFS(0,adj,visited);
	cout<<endl;
	return 0; 
}
