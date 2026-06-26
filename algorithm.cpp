#include<bits/stdc++.h>
using namespace std;
void explainAlgo(){
    int a[] = {4,3,6,2,40,1};
    sort(&a[0],&a[6]);
    //sort(a,a+6);
    // sort(v.begin(),b.end());
    // sort(&a[0],&a[6],greater<int>()); to short in decreasing manner

    int num =7;
    int cnt = __builtin_popcount(num);
    cout << "Number of set bits in " << num << " is: " << cnt << endl;
    // next permutation
    string s ="123";
    sort(s.begin(),s.end());
    do
    {
        cout<<s<<endl;
    } while (next_permutation(s.begin(),s.end()));
    int max1 = *max_element(a,a+6);
}
int main(){
explainAlgo();
}