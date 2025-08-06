//https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/E

#include <bits/stdc++.h>
using namespace std;

#define loop(n,a) for(int i=a;i<n;i++)
#define loopvar(var,n,a) for(int var =a;var<n;var++)
#define input(a) for(auto &x:a) cin>>x;
#define display(x) cout<<x<<endl
#define input_of_vec(vec,end,start) loop(end,start) {cin>>vec[i];}
#define print_matrix(a,n,m) for(int i=0; i<n; i++){for(int j=0; j<m; j++){cout<<a[i][j]<<' ';}cout<<endl;}
#define display_vec(vec,end,start) loop(end,start) {cout<<vec[i]<<" ";}
#define sorting(vec) sort(vec.begin(),vec.end())
#define nextline cout<<endl
#define int long long 
#define ll long long
#define MOD 1000000007
bool isPowerOfTwo(int n){if(n==0)return false;return (ceil(log2(n)) == floor(log2(n)));}
bool isPerfectSquare(int x){if (x >= 0) {int sr = sqrt(x);return (sr * sr == x);}return false;}
#define all(a) begin(a),end(a)
#define vi(a,size) vector<int>a(size)
#define vii vector<vector<int>>
#define faster_input_output ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define MAX LLONG_MAX;
#define MIN LLONG_MIN;
#define contain(map, i) (map.find(i) == map.end())
#define maxele max_element
#define minele min_element
#define len(s) (s).length()

int f(int m){
    // function u need to find minimum value
    return m;
}
double ternarySearch(double l, double r, double eps = 1e-7) {
    while (r - l > eps) {
        double m1 = l + (r - l) / 3;
        double m2 = r - (r - l) / 3;

        if (f(m1) < f(m2))
            r = m2;
        else
            l = m1;
    }
    // After the loop, l ? r and f(l) ? minimum
    return (l + r) / 2;
}

int32_t main() {
	// your code goes here
  faster_input_output;
	int t=1;//cin>>t;
	while(t--){
	    int n,s;cin>>n>>s;
	   /// s--;//answer of this q= total_no_of_subarrays- (no of seg with sum <=s-1)
	    // 
	    vector<int>a(n);
	 input(a);
	 int l=0,r=0;
	 map<int,int>f;
	 
	 int sum=0;int ans=0;
	 while(r<n){
	     f[a[r]]++;
	     //sum+=a[r];
	     while(f.size()>s){
	         f[a[l]]--;
	         if(f[a[l]]==0)f.erase(a[l]);
	         //sum-=a[l];
	         l++;
	     }
	     if(f.size()<=s){
	         //if(r>=l)
	         int len=r-l+1;
	         ans+= max(0ll,len);
	         
	     }
	     r++;
	     
	 }
	 display(ans);
	 // sorting(a);
//	 display_vec(a,n,0);
	// nextline;
	 
	}
}

/*
ll expo(ll a, ll b, ll mod)
{
    ll res = 1;
    while (b > 0)
    {
        if (b & 1) res = (res * a) % mod;
        a = (a * a) % mod;
        b = b >> 1;
    }
    return res;
}
ll inverse(ll a, ll b) {return expo(a, b - 2, b);}// (a^(-1)%b)

ll mod_add(ll a, ll b, ll m) {
    a = a % m; b = b % m; 
    return (((a + b) % m) + m) % m;
    
}
ll mod_mul(ll a, ll b, ll m) {
    a = a % m; b = b % m; 
    return (((a * b) % m) + m) % m;
    
}
ll mod_sub(ll a, ll b, ll m) {
    a = a % m; b = b % m; 
    return (((a - b) % m) + m) % m;
    
}
ll mod_div(ll a, ll b, ll m) {// m-->prime
    a = a % m; b = b % m; 
    return (mod_mul(a, inverse(b, m), m) + m) % m;
}

*/
