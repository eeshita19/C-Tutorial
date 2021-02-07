#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int findLaddu(int arr[], int N, int K)
{
    if(N==0 || K==0 || N<K){
        return 0;
    }
	sort(arr, arr + N);
	int res = INT_MAX;
	for (int i = 0; i <= (N - K); i++){
		int diff = arr[i + K - 1] - arr[i];
		res = min(res, diff);	}
	return res;
}

int main()
	{
		int test, N , K;
		cin>>test;
		for(int j=0; j<test; j++){
		cin>>N>>K;
		int arr[N];
		for(int i=0;i<N;i++){
		    cin>>arr[i];
		}
		int r = findLaddu(arr, N,  K);
		cout<<r<<endl;
		}
		return 0;
	}
