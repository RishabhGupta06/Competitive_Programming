#include<bits/stdc++.h>
using namespace std;
int main(){
    int A[] = {1,4,5,6,8,9};
    bool res = binary_search(&A[0],&A[5],4); // starting element, ending element, Element to find
    cout<<res<<"\n";
    int* ind = lower_bound(&A[0],&A[5],9);
    int ind = lower_bound(&A[0],&A[5],9) - &A[0];
    cout<<ind;
    // upper bound function
    int a[] = {1,4,5,6,9,9};
    int ind1 = upper_bound(&a[0],&a[5],4) - &a[0];
    int ind1 = upper_bound(&a[0],&a[5],7) - &a[0];
    int ind1 = upper_bound(&a[0],&a[5],10) - &a[0];
    cout<<ind1;
    // problem for pratice
}