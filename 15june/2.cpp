#include <bits/stdc++.h>
using namespace std;
#define Noushil ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long 
#define ld long double
#define pb push_back
#define ppb pop_back
#define mkp make_pair
#define endl "\n"
#define input(n,arr) for(ll i=0; i<n; i++){cin>>arr[i];}
#define fo(i, a, b) for (ll i = a; i < b; i++)
#define print(a)  for(auto x : a) cout << x << " "; 
#define printvp(a) for(auto x: a) cout << x.first << " " << x.second << endl
#define printmap(a)  for(auto x : a) cout << x.first << " " << x.second << endl
#define sort(a) sort(a.begin(),a.end())
#define reverse(a) reverse(a.begin(),a.end())
#define revsort(a) sort(a.rbegin(),a.rend())
#define Yes cout<<"YES";
#define No cout<<"NO";
ll mod=1000000007;

ll binarySearch(vector<ll> v, ll To_Find)
{
    int lo = 0, hi = v.size() - 1;
    int mid;
    // This below check covers all cases , so need to check
    // for mid=lo-(hi-lo)/2
    while (hi - lo > 1) {
        int mid = (hi + lo) / 2;
        if (v[mid] < To_Find) {
            lo = mid + 1;
        }
        else {
            hi = mid;
        }
    }
    if (v[lo] == To_Find) {
        return lo;
    }
    else if (v[hi] == To_Find) {
        return hi;
    }
    else {
        return -1;
    }
}
 
 
int power(ll x, ll y)
{
    ll res = 1;     // Initialize result
 
    x = x % mod; // Update x if it is more than or
                // equal to p
  
    if (x == 0) return 0; // In case x is divisible by p;
 
    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % mod;
 
        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % mod;
    }
    return res;
}

ll ceilDiv(ll x, ll y){
    if(x%y==0){
        return (x/y);
    }
    else{
        return (x/y)+1;
    }
}
// set<ll>pr;
void SieveOfEratosthenes(int n)
{
    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
    bool prime[n + 1];

    memset(prime, true, sizeof(prime));
 
    for (int p = 2; p * p <= n; p++) {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true) {
            // Update all multiples of p greater than or
            // equal to the square of it numbers which are
            // multiple of p and are less than p^2 are
            // already been marked.
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
 
    // Print all prime numbers
    for (int p = 2; p <= n; p++)
        if (prime[p])
        {
            // pr.insert(p);
           // cout << p << " ";
        }
}
int main() {
  Noushil
  
  int t;
  cin>>t;
  while(t--){
    ll n,k,a,b;
    cin>>n;
    vector<ll>v(n);
    input(n,v);
    if(v[n-1]==1){
        No
    }
    else{
        vector<ll>ans;
        ll sum = 0;
        for(ll i = n-1; i>0; i--){

            if(v[i]==0){
                ans.pb(0);
                sum = 0;
            }
            else{
                sum++;
                if(v[i-1]==0){
                    ans.pb(sum);
                    sum = 0;
                }
                else{
                    ans.pb(0);
                }
            }
        }
        if(v[0]==0){
            ans.push_back(0);
        }
        else{
            sum++;
            ans.push_back(sum);
        }
        Yes
        cout<<"\n";
        print(ans);
        
    }
    
    

   cout<<"\n";
  }


  
    
    return 0;
}