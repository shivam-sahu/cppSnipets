#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

const ll mod = 1e9+7;
vector<int> a;
void inline add(ll& a, ll b){
	a+=b;
	a+=mod;
	a%=mod;
}
void inline mul(ll &a, ll b){
	a*=b;
	a%=mod;
}
template<typename T, typename U> inline void amin(T &x, U y) { if(y < x) x = y; }
template<typename T, typename U> inline void amax(T &x, U y) { if(x < y) x = y; }
//take power with mod
ll modPower(ll xx,ll yy){
	ll res = 1;
	xx = xx%mod;
	while(yy>0){
		if(yy&1) mul(res, xx);
		yy >>=1;
		mul(xx, xx);
	}
	return res;
}
//fermat's little theorm a^p = a(mod p);
//a^(p-1) = 1(mod p) => a^(p-2) = a^(-1)(mod p);
ll modInverse(ll nn){
	return modPower(nn, mod-2);
}
//normal ncr with mod
ll ncr(ll nn , ll rr){
	if(nn<rr) return 0;
	if(rr == 0 || nn == rr) return 1;
	ll fac[nn+1];
	fac[0] =1;
	for(ll i=1;i<nn+1;++i) fac[i] =i;
	for(int i= 1;i<=nn;++i) mul(fac[i], fac[i-1]);
	ll res = fac[nn];
	mul(res, modInverse(fac[rr]));
	mul(res, modInverse(fac[nn-rr]));
	return res;
}
//cnr with dp
//takes n^2 time &space complexity
//good for multiple queries
const ll ma = 100;
ll ddp[ma+1][ma+1];
ll dpncr(ll nn, ll rr){
	if(nn == rr) return ddp[nn][rr] = 1;
	if(rr == 0) return ddp[nn][rr] =1;
	if(rr == 1) return ddp[nn][rr] = nn;
	if(ddp[nn][rr]) return ddp[nn][rr];
	return ddp[nn][rr] = dpncr(nn-1, rr)+dpncr(nn-1, rr-1);
}
//normalise vector a
void normalise(){
	map<ll, int> m;
	for(int i=0;i<a.size();++i) m[a[i]];
	int pt = 0;
	for(auto &mm:m) mm.second = pt++;
	for(int i=0;i<a.size();++i)a[i]= m[a[i]];
}
int main(){
	return 0;
}
