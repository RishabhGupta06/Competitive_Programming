#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        int one =0;
        for(int i =0;i<n;i++){ cin>>arr[i];
        if(arr[i] == 1) one++;}
        if(n%2 !=0) cout<<"No"<<endl;
        else{
            int x =0;
             if(one<n/2) x = (n-2 *one)/4;
             else  x = (n-2 *(n-one))/4;

            if(one == n -one || one + x*2 == n/2 || n - one +x*2 == n/2) cout<<"Yes"<<endl;
            
            else cout<<"No"<<endl;
        }
    }
}