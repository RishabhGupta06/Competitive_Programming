#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    while (n--)
    {
        long long s;
        cin>>s;
        vector<long long> arr(s);
        for(int i =0;i<s;i++) cin>>arr[i];
        long long freq =1;
        sort(arr.begin(),arr.end());
        long long curr =1;
        for(int i =1;i<arr.size();i++){
            if(arr[i]==arr[i-1]) curr++;
            else {
                freq = max(freq,curr);
                curr =1;
            }
        }
        freq = max(freq,curr);
        int no_Opp =0;
        int curr_size = s - freq;
        while (curr_size>0)
        {
            if(curr_size - freq >= 0){
                 curr_size -= freq;
                 no_Opp += freq+1;
                 freq *=2;
            }
            else if(curr_size - freq < 0){ 
                no_Opp +=curr_size+1;
                curr_size=0;
            }
        }
        cout<<no_Opp<<endl;
        
    }
    
    
}