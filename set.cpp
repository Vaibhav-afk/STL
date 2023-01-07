#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int> s1;
    set<int> s = {1,2,3};
    s.insert(4);
    s.insert(3);

    // for(auto it=s.begin(); it!=s.end(); ++it){
    //     cout<<*it<<" ";
    // }
    // cout<<endl;

    // s.erase(1);

    // for(auto it=s.begin(); it!=s.end(); ++it){
    //     cout<<*it<<" ";
    // }
    // cout<<endl;

    // cout<<"check if 2 present in set : "<<s.count(2)<<endl;
    
    // cout<<s[0]<<endl;
    
    // auto itr = s.find(3);
    // cout<<*itr<<endl;

    // auto it = s.lower_bound(2);
    // cout<<*it<<endl;
    // auto it2 = s.lower_bound(5);
    // cout<<*it2<<endl;
    // auto it3 = s.upper_bound(2);
    // cout<<*it3<<endl;
    // cout<<*it<<" "<<*it2<<" "<<*it3<<endl;

cout<<s.size();
    s.clear();
    cout<<s.size();

    for(auto it=s.begin(); it!=s.end(); ++it){
        cout<<*it<<" ";
    }
    cout<<endl;

    return 0;
}