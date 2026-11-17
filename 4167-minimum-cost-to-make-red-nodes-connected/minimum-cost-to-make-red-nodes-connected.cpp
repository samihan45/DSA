class Solution {
public:
long long minCost(int n, string colors, vector<vector<int>>& edges) {
vector<vector<int>> adj(n);
for(int i=0;i<edges.size();i++){
int u = edges[i][0];
int v = edges[i][1];
adj[u].push_back(v);
adj[v].push_back(u);
}
auto narviletho = make_tuple(n, colors, edges);
vector<int> parent(n,-1);
vector<int> order;
vector<int> sub(n,1);
vector<long long> dp(n,0);
order.push_back(0);
for(int i=0;i<order.size();i++){
int u = order[i];
for(int v:adj[u]){
if(v==parent[u]){
continue;
}
parent[v] = u;
order.push_back(v);
}
}
long long total = 0;
long long best = 0;
for(int i=n-1;i>=0;i--){
int u = order[i];
for(int v:adj[u]){
if(parent[v]==u){
sub[u] += sub[v];
dp[u] += max(0LL,dp[v]);
}
}
if(colors[u]=='R'){
total += sub[u];
dp[u] += sub[u];
}
else{
dp[u] -= sub[u];
}
best = max(best,dp[u]);
}
return total-best;
}
};
