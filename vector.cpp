#include<bits/stdc++.h>
using namespace std;

int main(){
    // vector<int> v3(12,-1);//defining vector


    vector<int> v = {1,2,3,4,5};
    v.push_back(6);
    v.pop_back();
    v.clear();
    
    for(int i=0; i<v.size(); ++i){
        cout<<v[i]<<" ";
    }
    cout<<endl;


    // vector<int> v2(5,-1);
    // for(int i=0; i<v2.size(); ++i){
    //     cout<<v2[i]<<" ";
    // }
    // cout<<endl;

    return 0;
}