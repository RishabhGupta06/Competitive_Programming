#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = {2,3,5,6,7};
    vector<int> ::iterator it;
    vector<pair<int,int>> pa = {{1,2},{2,3},{3,4}};
    for(it = v.begin();it != v.end();++it) cout<<(*it)<<endl;
    vector<pair<int,int>> ::iterator it1;
    for(it1 = pa.begin();it1 != pa.end();++it1) cout<<(*it1).first<<endl;
}