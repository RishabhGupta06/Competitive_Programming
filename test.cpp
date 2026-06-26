#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int s;
        cin>>s;
        int counti =0;
        int arr[s];
        for(int i=0;i<s;i++) cin>>arr[i];
        for(int i =s-1;i>0;i--){
            while(arr[i]<=arr[i-1]){ 
                arr[i-1] /= 2;
                counti++;
                if(arr[i-1] == 0) break;
            }
            if(arr[i] == 0 && arr[i-1] == 0){
                counti = -1;
                break;
            }
        }   
        cout<<counti<<"\n";
    }
}