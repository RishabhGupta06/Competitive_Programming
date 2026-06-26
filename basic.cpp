#include<bits/stdc++.h> // all the libiary will be included
using namespace std;
void print(){
    cout<<"Name";
}
void explainPair(){
    // pair<int, int> p = {1,3};
    // cout<<p.first<<" "<<p.second;
    pair<int, pair<int,int>> p = {1,{3,4}};
    cout<<p.first<<" "<<p.second.second;
    pair<int,int> arr[] = {{1,2},{2,5},{5,1}};// pair can be stored in array
    
    cout<<arr[1].second;
}
void explainVector(){
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);
    
    vector<pair<int, int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(1,6);
    vector<int> v1(15);
    vector<int> v2(15,30);
    vector<int> v3(v2);
    // how to access the element of an vector
    vector<int>::iterator anyname = v.begin();
    anyname++;
    cout<<*(anyname)<<" ";
    anyname = anyname+ 2;
    cout<<*(anyname)<<" ";
    vector<int>::iterator anyname = v.end(); // it will point after the last element of the vector to access the last element of the vector please use anyname--

    // vector<int>::iterator anyname = v.rend();
    // vector<int>::iterator anyname = v.rbegin();
    cout<<v.back()<<" ";
    // printing all element of vector
    for(vector<int>::iterator it = v.begin(); it!=v.end(); it++ ){
        cout<<*(it)<<" ";
    }
    for(auto it2 = v.begin();it2 != v.end();it2++){
        cout<<*(it2)<<" ";
    }
    for(auto it3:v){
        cout<<it3<<" ";
    }

    // {10,20,30,40}
    v.erase(v.begin()+1);
    //{10,30,40}

    // {10,20,30,40,65}
    v.erase(v.begin()+2,v.begin()+4);
    // {10,20,65}
    //insert function
    vector<int>v5(2,400);
    v5.insert(v.begin(),300); // {300,400,400}
    v5.insert(v.begin()+1,2,10); // {300,10,10,400,400}
    v.pop_back();
    v1.swap(v2); // swap vector element 
    v.clear();// erases the entire vector
    cout<<v.empty();// return 1 if empty 0 for not empty
}
// vector is single linklist where as list is a double link list
void explainList(){
    list<int> ls;
    ls.push_back(2);
    ls.emplace_back(4);
    ls.push_front(5);
    ls.emplace_front(8); 
    //all function of vector are same
}
void explainDeque(){
    deque<int>dq;
    dq.push_back(1);
    dq.emplace_back(2);
    dq.push_front(4);
    dq.emplace_front(3);
    dq.pop_back();
    dq.pop_front();
    dq.back();
    dq.front();
}
void explainStack(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(3);
    st.emplace(5); // {5,3,3,2,1}
    cout<<st.top();
    cout<<st.size();
    cout<<st.empty();
    stack<int>st1,s2;
    st1.swap(s2);

}
void explainQueue(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.emplace(4);//{1,2,4}

    q.back() += 5; // 4+5 --> 9
    cout<<q.back(); // prints 9

    q.pop(); // {2,9} remove the first element
    cout<<q.front(); // print 2
}
void explainPQ(){
    priority_queue<int>pq; // also known as max heap
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.push(3); // {8,5,3,2} it store in lexgraphic manner
    
    pq.pop(); // {5,3,2}
    
    cout<<pq.top();
    // now code for which min element is stored at the top
    priority_queue<int, vector<int>, greater<int>> pq; // also know as min heap
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.push(3); // {2,3,5,8}
    
}
void explainSet(){ // every thing happens in logrithm time
    set<int>st;
    
    st.insert(1);
    st.insert(2);
    st.insert(4);
    st.insert(2);
    st.insert(3); // {1,2,3,4}

    auto it = st.find(3); // this is an itrator
//    auto it = st.find(6); // if the element is not present in the element then it will point after the end element
    st.erase(3); // takes logarithmic time and erase 3
    int cnt = st.count(2); // if it is there in the set then it return 1 otherwise 0
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1,it2); // [first,last)

}
void explainMultiset(){
    multiset<int>ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(3);
    ms.insert(1); // {1,1,1,3}
    
    ms.erase(1);
    int cnt = ms.count(1);
    ms.erase(ms.find(1)); // erase adderes
    ms.erase(ms.find(1),ms.end()); // erase adderes
}
void explainUSet(){
    unordered_set<int> st;
    // all the function will work of set
    // but upper bound and lower bound will not work
}
void explainMap(){
    map<int,int> mpp; // map stores unique keys but value must best be same, key are stored in sorted ordered
    map<int, pair<int,int>> mpp1;
    map<pair<int,int>, int> mpp2;
    mpp[1] = 2; // key is 1 and value is 2
    mpp.emplace(make_pair(3, 1));
    mpp2[{2,4}] = 10;
    for(auto it : mpp){
        cout<<it.first<<" " <<it.second<<endl;
    }
    cout<<mpp[1];
    auto it = mpp.find(1);
    cout<<it->second;
}
int main(){
    print();
}