// C++ program to do modular division 
#include<iostream> 
using namespace std; 
typedef long long int ll;
// C function for extended Euclidean Algorithm 
ll gcdExtended(ll a, ll b, ll *x, ll *y); 

// Function to find modulo inverse of b. It returns 
// -1 when inverse doesn't 
ll modInverse(ll b, ll m) 
{ 
	ll x, y; // used in extended GCD algorithm 
	ll g = gcdExtended(b, m, &x, &y); 

	// Return -1 if b and m are not co-prime 
	if (g != 1) 
		return -1; 

	// m is added to handle negative x 
	return (x%m + m) % m; 
} 

// Function to compute a/b under modlo m 
ll modDivide(ll a, ll b, ll m) 
{ 
	a = a % m; 
	ll inv = modInverse(b, m); 
	if (inv == -1) return -1;
	else return (inv*a)%m;
	cout << "Result of division is " << (inv * a) % m; 
} 

// C function for extended Euclidean Algorithm (used to 
// find modular inverse. 
ll gcdExtended(ll a, ll b, ll *x, ll *y) 
{ 
	// Base Case 
	if (a == 0) 
	{ 
		*x = 0, *y = 1; 
		return b; 
	} 

	ll x1, y1; // To store results of recursive call 
	ll gcd = gcdExtended(b%a, a, &x1, &y1); 

	// Update x and y using results of recursive 
	// call 
	*x = y1 - (b/a) * x1; 
	*y = x1; 

	return gcd; 
} 

// Driver Program 
int main() 
{ 
	ll a = 8, b = 3, m = 5; 
cout<<	modDivide(a, b, m)<<endl;
	return 0; 
} 
