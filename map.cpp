#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int,string> mp;
    mp[0] = "Vaibhav";
    mp[1] = "XYZ";
    mp[2] = "C++";
    mp[3] = "Coding";
    mp[4] = "STL";
    // mp.insert(pair<int,string>(2,"C++"));
    
    for(auto it=mp.begin(); it!=mp.end(); ++it){
        cout<<it->first<<" "<<it->second<<endl;
    }
    cout<<endl;

    // mp.erase(1);

    // for(auto it=mp.begin(); it!=mp.end(); ++it){
    //     cout<<it->first<<" "<<it->second<<endl;
    // }

    // cout<<endl;
    
    // cout<<"check if key 2 present in map : "<<mp.count(2)<<endl;
    
    // auto itr = mp.find(0);
    // cout<<itr->first<<" "<<itr->second<<endl;


    // auto it = mp.upper_bound(2);
    // cout<<it->first<<" "<<it->second<<endl;

    // auto it2 = mp.lower_bound(2);
    // cout<<it2->first<<" "<<it2->second<<endl;
    cout<<mp.size()<<endl;
    mp.clear();
    for(auto it=mp.begin(); it!=mp.end(); ++it){
        cout<<it->first<<" "<<it->second<<endl;
    }
    cout<<endl;
    // auto it3 = mp.lower_bound(5);
    // cout<<it3->first<<" "<<it3->second<<endl;
    return 0;
}