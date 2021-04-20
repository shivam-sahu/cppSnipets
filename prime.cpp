int MX = 1e5+2;
//seive method for finding numbers are prime or not;
//refer cp algorithms.
vector<bool> is_prime(MX, true);
is_prime[0] = is_prime[1] = false;
for (int i = 2; i <MX; i++) {
    if (is_prime[i] && (long long)i * i <= MX) {
        for (int j = i * i; j < MX; j += i)
            is_prime[j] = false;
    }
}
// seive method for finding smallest prime number which can divide a number.
// used in spliting the numbers into its prime factors with power.
//refer geeks for geeks.
vector<int>lp;// lowest prime
void seive(){
	lp[0] = lp[1] = 1;
	for(int i=2;i<MX;i+=2) lp[i] = 2;
		for (int i = 3; i<MX;i+=2) {
			if(lp[i] != 0) continue;
			if(lp[i] == 0) lp[i] =i;
			for(int j=i;(ll)j*i<MX;j+=2){
				if(lp[j*i])continue;
				lp[j*i] = i;
			}
		}
}
