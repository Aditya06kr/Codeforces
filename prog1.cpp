#include<bits/stdc++.h>
using namespace std;

int check(int arr[],int n){
	for(int i=0;i<n-1;i++){
		if(arr[i]!=arr[i+1]){
			return 0;
		}
	}
	return 1;
}
 
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
        int flag=0,sum;
        if(check(arr,n)){
            flag=1;
        }
        else{
        	for(int i=0;i<n;i++){
        		sum=0;
                for(int j=0;j<n;j++){
                    if(i!=j){
                	    sum+=arr[j];
                    }
                }
                if((arr[i]==(sum/(n-1))) && (sum%(n-1)==0)){
            	    flag=1;
            	    break;
                }
            }
        }
        if(flag==0){
        	cout<<"NO\n";
        }
        else{
        	cout<<"YES\n";
        }
	}
}
