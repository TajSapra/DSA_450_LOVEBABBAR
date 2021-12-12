#include<bits/stdc++.h> 
#define ll long long int
#define pb push_back
#define uii unordered_map<int,int>
#define uill unordered_map<int,ll>
#define usi unordered_map<string,int>
#define udi unordered_map<double, int>
#define mii map<int,int>
#define uci unordered_map<char,int>
#define mci map<char,int>
#define mci map<char,int>
#define ucc unordered_map<char,char>
#define uic unordered_map<int,char>
#define vll vector<long long int>
#define vl vector<long int>
#define vi vector<int>
#define vvi vector<vi> 
#define graphumap unordered_map<int,unordered_map<int,int>>
#define graphmap map<int,map<int,int>>
#define vd vector<double> 
#define vb vector<bool>
#define vs vector<string>
#define mp make_pair
#define vc vector<char>
#define fr(i,s,e,w) for(ll i=s;i<e;i+=w)
#define fra(i, map) for(auto i:map)
#define frd(i,s,e,w) for(ll i=s;i>=e;i-=w)
#define vf vector<float>
#define pYES cout<<"YES";
#define pNO cout<<"NO";
#define info(v) cout<<v.size()<<"\n";fr(i,0,v.size(),1){cout<<v[i]<<" ";}cout<<"\n";
#define printvec(v) fr(k,0,v.size(),1){cout<<v[k]<<" ";}
#define pyes cout<<"yes";
#define pno cout<<"no";
#define vpii vector<pair<int,int>>
#define MOD 998244353
#define all(v) v.begin(), v.end()
using namespace std; 
class Graph{
    int V;  
    vi *adj;  
    vi *weight;
    public:
    Graph(int V);
    void addEdge(int v, int w);
    void BFS(); 
    void DFS();
}; 
Graph::Graph(int V)
{
    this->V = V;
    adj = new vi[V];
}
void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w); 
    adj[w].push_back(v); 
}
bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;
  
    // Check from 2 to n-1
    for (int i = 2; i <=sqrt(n); i++)
        if (n % i == 0)
            return false;
  
    return true;
}
void Graph::BFS(){
    vi visited(V,0);
    queue<int> q;
    q.push(0);
    visited[0]=1;
    while(!q.empty()){
        int u=q.front();
        q.pop();
        ///perform function on u
        for(int i=0;i<adj[u].size();i++){
            if(visited[adj[u][i]]==0){
                visited[adj[u][i]]=1;
                q.push(adj[u][i]);
            }
        }
    }
}
void Graph::DFS(){
    vi visited(V,0);
    stack<int> s;
    s.push(0);
    visited[0]=1;
    while(!s.empty()){
        int u=s.top();
        s.pop();
        
        for(int i=0;i<adj[u].size();i++){
            if(visited[adj[u][i]]==0){
                visited[adj[u][i]]=1;
                s.push(adj[u][i]);
            }
        }
    }
}
// bool ispalindrome(string input){
//     return input == string(input.rbegin(), input.rend());
// }
// vi primeFactors(int n){ 
//     uii answers;
//     vi ans;
//     while (n%2 == 0){ 
//         answers[2]=1; 
//         n = n/2; 
//     } 
//     for (int i = 3; i <= sqrt(n); i = i+2){ 
//         while (n%i == 0){ 
//             answers[i]=1; 
//             n = n/i; 
//         } 
//     }     
//     if (n > 2) 
//         answers[n]=1;
//     for(auto i:answers){
//         if(i.second)
//         ans.pb(i.first);
//     }
//     return ans;
// } 
// int gcd(int a, int b){ 
//     if (b == 0)
//         return a;
//     return gcd(b, a % b);
// }
// ll nc2(ll n){ 
//     return n*(n-1)/2;
// } 
// ll ncr(ll n, ll r){
// ll ans=1;
    // for(ll i=1;i<=r;i++){
    //     ans=ans*(n-i+1)/i;
    // }
// return ans;
// }
// void buildtree(vll&segment_tree, ll node, ll start, ll end, vll input){
//     if(start == end){
//         segment_tree[node] = input[start]; 
//         return;
//     }
//     ll mid = (start+end)/2;
//     buildtree(segment_tree, 2*node, start, mid, input);
//     buildtree(segment_tree, 2*node+1, mid+1, end, input);
//     // add recursive line problem wise where segment_tree[node] is related to segment_tree[2*node+1] and segment_tree[2*node]
// }
// void segment_tree(ll n, vll input, ll q, vvi queries){
//     vll segment_tree(4*n);
//     build(segment_tree, 1,0, n-1, input);
// }


// The Best Time Complexity is O(n*log(n)). There is an article on gfg saying that the usage of set data structure can solve the problem in O(n) time. 
// However they are mistaken. They Have not taken into account the time complexity of STL set operations. Hence they are missing a factor of log(n) in the time complexity.
// Hence since time complexity cannot be reduced by O(n*log(n)), we should use an approach in which space is minimized. That is we should use a sort approach.


void fun(){
    int n, k;
    cin>>n>>k;
    vi input(n,0);
    fr(i,0,n,1){
        cin>>input[i];
    }
    sort(all(input));
    cout<<input[k-1]<<"\n";
    // for kth largest element sort the array in descending order using: sort(all(input), greater<int>());
}
int main(){
    int t=1;
    // cin>>t;
    while(t--){
        // ll x,y,n,m;
        // cin>>x>>y>>n>>m;   
        // vvi input(n, vl(3,0));
        // fr(i,0,n,1){
        //     cin>>input[i][0]>>input[i][1]>>input[i][2];
        // }
        // fun(x,y,n,m);
        // ll ans=n(1);
        // cout<<ans;
        // ll a,b,n,m, te;
        // cin>>n; 
        // cin>>te;
        // cin>>m;
        // ll k,d;
        // ll x,y;
        // cin>>x>>y;
        // vvi input(n, vi(n,0));
        // multiset<int>s;
        // vll input(n,0);
        // string input;
        // cin>>input;
        // vi l(m,0);
        // vi r(m,0);
        // fr(i,0,n,1){
        //     cin>>input[i];
        // }
        // vll input(m,0);
        // fr(i,0,input.length(),1){
            
        // }
        // fr(i,0,m,1){
        //     cin>>l[i];
        // }
        // fr(i,0,m,1){
        //     cin>>r[i];
        // }
        // fun(a,b,n);
        // fun(n,m,input,input1);
        // unordered_map<int,pair<int,int>> visited;
        // if(fun(a,b,n)){
        //     pYES;
        // }
        // else{
        //     pNO;
        // }
        // vb ans=checkArithmeticSubarrays(input, l, r);
        // for(int k=0;k<ans.size();k++){
        //     cout<<ans[k]<<" ";
        // }
        // cout<<"Case #"<<counter++<<": "<<fun(d,n,k,input)<<"\n";
        // cout<<fun();
        fun();
        // cout<<"\n";
    }
    return 0;
}