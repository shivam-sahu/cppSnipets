#include<bits/stdc++.h>
using namespace std;

// ? quickSort

// int partition(vector<int> &a, int x, int y){
// 	int pivot = y;
// 	int j = x;
// 	for(int i=x;i<y;++i){
// 		if(a[i]<a[pivot]) {
// 			swap(a[i], a[j]);
// 			j++;
// 		}
// 	}
// 	swap(a[j], a[pivot]);
// 	return j;
// }

// void quickSort(vector<int> &a, int i, int j){
// 	int pi = partition(a, i, j);
// 	if(i<j){
// 		quickSort(a, i, pi-1);
// 		quickSort(a, pi+1, j);
// 	}
// }
//? insetion sort
// void insertionSort(vector<int> &a){
// 	int n = a.size();
// 	for(int i=1;i<n;++i){
// 		int x = i;
// 		int y = x-1;
// 		while(y>=0 && a[x]<a[y]){
// 			swap(a[x], a[y]);
// 			x--;
// 			y--;
// 		}
// 	}
// }

// ?selection Sort
// void selectionSort(vector<int> &a){
// 	int n = a.size();
// 	int j=0;
// 	while(j<n){
// 		int minIndex  = j;
// 		for(int i=j+1;i<n;++i){
// 			if(a[i]<a[minIndex]) minIndex = i;
// 		}
// 		swap(a[j], a[minIndex]);
// 		j++;
// 	}
// }

// ? bubble sort
// void bubbleSort(vector<int> &a){
// 	int n = a.size();
// 	for(int i=n-1;i>=0;--i){
// 		for(int j=0;j<i;++j){
// 			if(a[j]>a[j+1]) swap(a[j], a[j+1]);
// 		}
// 	}
// }

int main(){
	vector<int> a = {9, 1,2,4,2,5,2, 7};
	// quickSort(a, 0, (int)(a.size())-1);
	// insertionSort(a);
	// selectionSort(a);
	// bubbleSort(a);
	for(auto &A:a) cout<<A<<" ";
	return 0;
}

