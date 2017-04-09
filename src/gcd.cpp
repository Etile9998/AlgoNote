
typedef long long ll;
ll gcd(ll a,ll b){
  return b?gcd(b,a%b):a;
}

ll lcd(ll a,ll b){
  return a*b/gcd(a,b);
}