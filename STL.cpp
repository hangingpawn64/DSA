
#include <bits/stdc++.h>
using namespace std;

// PAIR
void explainPair()
{
    pair<int, int> a = {1, 5}; //---> Pairs can be integer, string , etc.
    cout << a.first << "-" << a.second << endl;

    pair<int, pair<int, int>> p = {1, {2, 3}};
    cout << p.first << "-" << p.second.first << "-" << p.second.second << endl;

    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
    cout << arr[1].second;
}

// VECTOR
void explainVector()
{ 
    vector<int> v1;

    v1.push_back(1);
    v1.emplace_back(2);

    vector<pair<int, int>> vec;
 
    vec.push_back({1, 2});
    vec.emplace_back(1, 2);

    vector<int> v2(5, 100);

    vector<int> v3(5); // here v is declared to have 5 elements but i can still be modified later it will expland or contract if needed

    vector<int> v4(5, 20);
    vector<int> v5(v1);

    //--> iterators
    vector<int> v={20,10,15,5,7};
    vector<int>::iterator it = v.begin();

    it++;

    cout<< *(it) << " ";

    it = it + 2;
    cout<<*(it) << " ";

    vector<int>::iterator it1 = v.end(); // v.end() points at the next memory AFTER the last element, and not At the Last element

    // vector<int>::iterator it = v.rend();
    // vector<int>::iterator it = v.rbegin();

    cout<< v[0] << " " << v.at(0)<<" "; //v.at(0 ) is another way of writing v[0]
    cout<< v.back() <<endl;

    //printing the vector
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout<< *(it) << " ";
    }
    cout<<endl;

    for (auto it = v.begin(); it != v.end(); it++) { // "auto" automatically assigns data type based on the data
        cout<< *(it) << " ";
    }
    cout<<endl;

    for (auto it : v) {
        cout<< it << " ";
    }
    cout<<endl;
    
    //deletion in a vector
     vector<int> v6 = {10, 20, 12, 23, 45, 66};
     v6.erase(v6.begin()+1); // {10, 12, 23, 45, 66}
     v6.erase(v6.begin()+2, v6.begin()+4); //{10, 12, 66} [start, end) --> jaha tk erase krna hai uske baad wle ko end me likhte hai

    //Insert function

    vector<int> v7(2,100); // {100, 100}
    v7.insert(v7.begin(), 300); // {300, 100, 100}
    v7.insert(v7.begin()+1, 2 ,10); // {300, 10, 10, 100, 100}

    vector<int> copy(2,50); // {50,50}
    v7.insert(v7.begin(), copy.begin(), copy.end()); // {50, 50, 300, 10, 10, 100, 100}

    cout << v7.size()<<endl; // 7  
    v7.pop_back(); // {50, 50, 300, 10, 10, 100}


    vector<int>v8 = {10, 20};
    vector<int>v9 = {30, 40};
    v8.swap(v9); //v8 and v9 will swap
    v8.clear(); // clears the entire vector {}

    cout<< v8.empty(); // --> returns 1 if vector is empty, 0 if not
}

//LIST

void explainList(){
    list<int> ls;
    cout<<ls.size()<<endl;

    ls.push_back(2);  //{2}
    ls.emplace_back(4); // {2, 4}
    cout<<ls.size()<<endl;

    ls.push_front(5); // {5, 2, 4}

    ls.emplace_front(); //{0, 5, 2, 4};
    cout<<ls.size()<<endl; 

    //rest functions are same as vector
}

void explainDeque(){

    deque<int>dq;
    dq.push_back(1); //{1}
    dq.emplace_back(2); //{1, 2}
    dq.push_front(4); //{4, 1, 2}
    dq.emplace_front(3); //{3, 4, 1, 2}

    dq.pop_back(); //{3, 4, 1}
    dq.pop_front(); //{4, 1}

    dq.back();

    dq.front();

    //rest functions are same as vector
}

void explainStack(){
    stack<int> st;
    st.push(1); // {1}
    st.push(2); // {2, 1}
    st.push(3); // {3, 2, 1}
    st.push(3); // {3, 3, 2, 1}
    st.emplace(5); // {5, 3, 3, 2, 1}

    cout<< st.top(); // prints 5  "** st[2] is INVALID **"

    st.pop(); // {3, 3, 2, 1}

    cout<< st.top(); // 3

    cout<< st.size(); // 4

    cout<< st.empty(); // 0 (false)

    stack<int>st1, st2;
    st1.swap(st2);
}

void explainQueue(){
    queue<int> q;
    q.push(1); // {1}
    q.push(2); // {1, 2}
    q.emplace(4); // {1, 2, 4}

    q.back() += 5; // {1, 2, 9}

    cout<< q.back(); // 9

    cout<< q.front(); // 1

    q.pop(); // {2,9}
    
    cout<<q.front(); // 2

    //size , swap same as stack
}

void explainPQ(){

//Maximum Heap --> Greater number on top
    priority_queue<int>pq;

    pq.push(5); //{5}
    pq.push(2); //{5, 2}
    pq.push(8); //{8 ,5, 2}
    pq.emplace(10); // {10, 8, 5, 2}

    cout << pq.top(); // 10

    pq.pop(); // {8, 5, 2}

    // size swap empty functions same as others

//Minimum Heap --> Smaller Number on top
    priority_queue<int, vector<int>, greater<int>> pq1;
    pq1.push(5);
    pq.push(2); //{2, 5}
    pq.push(8); //{2 ,5, 8}
    pq.emplace(10); // {2, 5, 8, 10}

    cout<< pq.top(); // 2
}

void explainSet(){   //  SET --> Everything sorted, Everything Unique
    set<int>st;
    st.insert(1); //{1}
    st.emplace(2); //{1,2}
    st.insert(2); //{1,2}
    st.insert(4); //{1,2,4}
    st.insert(3); // {1,2,3,4}

    //begin(), end(), rbegin(), size(), empty(), swap(),... same as above

    //{1, 2, 3, 4}
    auto it = st.find(3); // --> it will point at 3
    auto it1 = st.find(6); // --> it will point at the end (not the last element; at the end)

    st.erase(4); //erases 4, takes Logarithmic time

    int cnt = st.count(1); //Count // if 1 is there in set it will give 1, else zero

    auto it6 = st.find(3);
    st.erase(it); //takes constant time

    set<int>st1 = {1, 2, 3, 4, 5};
    auto it2 = st.find(2);
    auto it3 = st.find(4); // after erase {1, 4, 5} [first, last)

    //lower_bound() and upper_bound() function works in same way as it does in vector

    //this is the syntax
    auto it4 = st.lower_bound(2);
    auto it5 = st.upper_bound(3);
}

void explainMultiSet(){
    // Everything same as set
    // only stores duplicate elements also

    multiset<int>ms;
    ms.insert(1); // {1}
    ms.insert(1); // {1,1}
    ms.insert(1); // {1,1,1}

    ms.erase(1); // all 1's erased
    
    int cnt = ms.count(1);

    ms.erase(ms.find(1)); // only a single 1 erased

    ms.erase(ms.find(1), next(ms.find(1), 2)); // in striver it was given ms.erase(ms.find(1), ms.find(1)+2); but that throws error

    // Rest all functions same as set
}

void explainUSet() {
    unordered_set<int> st;
    // lower_bound and upper_bound function do not work, rest all functions are same
    // as above, it does not store in any particular order, it has a better complexity
    // then set in most cases, except some when collision happens

    //time complexity should be O(1) but in Worst case it is O(N)
}

void explainMap(){
    map<int, int> mpp;

    map<int, pair<int, int>> mpp1;

    mpp[1] = 2;
    // mpp.emplace({3, 1});
    
    mpp.insert({2, 4});
}



int main()
{
    // explainPair();
    // explainVector();
    // explainList();
    // explainDeque();
    // explainStack();
    // explainQueue();
    // explainPQ();
    // explainSet();
    // explainMultiSet();
    // explainUSet();
    explainMap();

    return 0;   
}