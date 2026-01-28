#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <queue>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <algorithm>
using namespace std;

bool comparator(pair<int , int> p1 , pair<int , int> p2){
    if(p1.second<p2.second) return true;
    if(p1.second>p2.second)return false;

    if(p1.first<p2.first) return true;
    else return false;
}

int main()
{
    list<int> l = {7, 8, 9};

    l.emplace_back(1); // l.push_back(1);
    l.push_back(2);
    l.push_back(3);

    l.emplace_front(6);
    l.push_front(4);
    l.push_front(5);

    l.pop_back();  // deletes last
    l.pop_front(); // deletes first

    for (int val : l) {
        cout << val << " ";
    }
    cout << endl;

    cout << endl;

    // deque contains same operations(push_back , pop_back etc)as that of list
    deque<int> d = {11, 12, 13, 14};

    for (int i : d) {
        cout << i << " ";
    }
    cout << endl;

    cout << d[2] << endl; // random access is possible is deque but not in list

    // pair
    pair<int, int> p = {1, 2};
    pair<char, string> a = {'a', "pilgrim"};

    cout << p.first << endl;
    cout << p.second << endl;
    cout << a.first << endl;
    cout << a.second << endl;

    cout << endl;

    // pair in pair
    pair<int, pair<char, int>> c = {1, {'c', 7}};
    cout << c.first << endl;
    cout << c.second.first << endl;

    cout << endl;

    // in vector(pair)
    vector<pair<int, int>> vec = {{1, 2}, {3, 4}, {5, 6}};

    vec.push_back({7, 8});  // insert
    vec.emplace_back(9, 0); // in place objects create

    for (auto b : vec) { // for(pair<int , int> b : vec){
        cout << b.first << " " << b.second << endl;
    }

    cout << endl;

    // stack
    stack<int> s;

    s.push(1);
    s.push(2);
    s.emplace(3);

    while (!s.empty()){
        cout << "top value=" << s.top() << endl; // returns top most element
        s.pop();                                 // deletes elements
    }

    cout << endl;

    stack<int> s1;

    s1.push(4);
    s1.push(5);
    s1.push(6);

    stack<int> s2;

    s2.swap(s1);

    cout << "s1 size=" << s1.size() << endl; // 0
    cout << "s2 size=" << s2.size() << endl; // 3

    cout << endl;

    // queue
    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);

    while (!q.empty()) {
        cout << "front value=" << q.front() << " " << endl;
        q.pop(); // deletes from front order-1,2,3
    }

    cout << endl;

    // priority queue
    priority_queue<int> pq;

    pq.push(5);
    pq.push(3);
    pq.push(10);
    pq.push(4);

    while (!pq.empty()){
        cout << pq.top() << " "; // sorted in descending order
        pq.pop();
    }

    cout << endl;

    // for reverse order i.e. int ascending order
    priority_queue<int, vector<int>, greater<int>> aq;

    aq.push(5);
    aq.push(3);
    aq.push(10);
    aq.push(4);

    while (!aq.empty()) {
        cout << aq.top() << " " << endl; // sorted in ascending order
        aq.pop();
    }

    cout << endl;

    // map-by default sorted in ascending order
    map<string, int> m;

    m["tv"] = 100;
    m["laptop"] = 50;
    m["headphone"] = 25;
    m["tablets"] = 120;
    m["watch"] = 50;

    m.emplace("camera", 25); // m.insert("camera",25);

    m.erase("tv");

    for (auto p : m){
        cout << p.first << " " << p.second << endl;
    }

    cout << "count=" << m.count("laptop") << endl; // how many keys does exits in map i.e 1 for laptop
    cout << "value=" << m["laptop"] << endl;       // value i.e 100

    if (m.find("camera") != m.end()) {
        cout << "found\n";
    }
    else {
        cout << "not found\n";
    }

    cout << endl;

    // multimap-[] cant be used
    multimap<string, int> mp;

    mp.emplace("tv", 100); // map gives only 1 value if repeated but multimap gives all
    mp.emplace("tv", 100);
    mp.emplace("tv", 100);
    mp.emplace("tv", 100);

    // mp.erase("tv");//erases all

    mp.erase(mp.find("tv")); // erases any 1

    for (auto k : mp) {
        cout << k.first << " " << k.second << endl;
    }

    cout << endl;

    //unordered map-gives randomly not in sorted 
    unordered_map<string, int> um;

    um.emplace("tv", 100); // unoreder_map gives only 1 value if duplicates are preasent 
    um.emplace("tv", 100);
    um.emplace("tv", 100);
    um.emplace("laptop", 50);
    um.emplace("watch",10);


    for (auto x : um) {
        cout << x.first << " " << x.second << endl;
    }

    cout << endl;

    //set
    set<int> st;

    st.insert(1);
    st.insert(2);
    st.insert(3);
   // st.insert(4);
    st.insert(5);

    st.insert(1);//ignores duplicate values 
    st.insert(2);
    st.insert(3);

    cout<<"size="<<st.size()<<endl;//5

    cout<<"lower bound ="<<*(st.lower_bound(3))<<endl;//gives 3 as its there in set
    cout<<"lower bound ="<<*(st.lower_bound(4))<<endl;//gives 5 which is nxt greater value of 4
    cout<<"lower bound ="<<*(st.lower_bound(6))<<endl;//gives st.end() value i.e no valid ans 

    cout<<"upper bound ="<<*(st.upper_bound(3))<<endl;//nxt greater value 


    for(auto v : st){
        cout<<v<<" ";
    }

    cout<<endl<<endl;

    //multiset
    multiset<int> ms;

    ms.insert(1);
    ms.insert(2);
    ms.insert(3);
    ms.insert(4);
    ms.insert(5);

    ms.insert(1);//doest not ignore duplicate values 
    ms.insert(2);
    ms.insert(3);

    cout<<"size="<<ms.size()<<endl;//8

    for(auto n : ms){
        cout<<n<<" ";
    }

    cout<<endl<<endl;
    

    //unorederd set
    unordered_set<int> us;//gives randomly not in sorted 

    us.insert(1);
    us.insert(2);
    us.insert(3);
    us.insert(4);
    us.insert(5);

    us.insert(1);//ignores duplicate values 
    us.insert(2);
    us.insert(3);

    cout<<"size="<<us.size()<<endl;//8

    for(auto j : us){
        cout<<j<<" ";
    }

    cout<<endl<<endl;

    //algorithms 
    //sorting in array A.O
    int arr[5]={ 5, 6 ,3 , 4 ,2 };

    sort(arr , arr+5);

    for(int z : arr){
        cout<<z<<" ";
    }

    cout<<endl<<endl;

    //sorting in vector A.O
    vector<int> vect={8, 7, 5, 6 , 3, 2};

    sort(vect.begin() , vect.end());

    for(int y : vect){
        cout<<y<<" ";
    }

    cout<<endl;
    
    //in D.O
    vector<int> vt={8, 7, 5, 6 , 3, 2};

    sort(vt.begin() , vt.end() , greater<int>());

    for(int g : vt){
        cout<<g<<" ";
    }

    cout<<endl<<endl;

    //sorting in pairs 
    vector<pair<int, int>> vc={{3,4} , {2,1} , {6,5} , {4,1}};

    sort(vc.begin() , vc.end(),comparator);

    for(auto h : vc){ 
        cout<<h.first<<" "<<h.second<<endl;
    }

    cout<<endl;
    
    //reverse
    vector<int> vr={1,2,3,4,5};

    reverse(vr.begin(), vr.end());

    for(auto f : vr){
        cout<<f<<endl;
    }

    cout<<endl;

    //reverse in range
    vector<int> ve={1,2,3,4,5};

    reverse(ve.begin()+1, ve.begin()+3);

    for(auto r : ve){
        cout<<r<<" ";
    }

    cout<<endl<<endl;

    //next permutation
    string e="abc";

    next_permutation(e.begin(), e.end());

    cout<<"next permutation="<<e<<endl;

     //previous permutation
    string o="bca";

    next_permutation(o.begin(), o.end());

    cout<<"previous permutation="<<o<<endl;

    cout<<endl;

    //max and min 
    cout<<"max="<<max(4,5)<<"  "<<"min="<<min(3,4)<<endl;

    cout<<endl;

    //swap
    int t=4 , w=9;
    swap(t,w);
    cout<<"t="<<t<<" "<<"w="<<w<<endl;

    return 0;
}
