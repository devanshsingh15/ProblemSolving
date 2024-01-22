#include<iostream>
#include<array>
#include<vector>

using namespace std;

int main(){
    array<int,5>a={1,2,3,4,5};
    cout<<"The size of array is: "<<a.size()<<endl;
    // a.at(2);
    // a.front();
    // a.back();

    vector<string>v;
    cout<<"Size & Capacity "<<v.size()<<" "<<v.capacity()<<endl;
    v.push_back("Manasviii");
    v.push_back("Meenal");
    v.push_back("Minnie");
    v.push_back("Pav Bhaji");
    v.push_back("Yeh Dil MAnge Morrr");
    cout<<"Size & Capacity "<<v.size()<<" "<<v.capacity()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    v.pop_back();
    cout<<"Size & Capacity "<<v.size()<<" "<<v.capacity()<<endl;
    cout<<"Front & Back "<<v.front()<<" "<<v.back()<<endl;
}
