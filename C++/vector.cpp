#include <iostream>
#include<vector>

using namespace std;

int main()
{
    //vector in C++
    cout<<"vector->"<<endl;
    vector<int> v;
    cout<<"capacity:"<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"capacity:"<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"capacity:"<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"capacity:"<<v.capacity()<<endl;
    cout<<"size:"<<v.size()<<endl;

    v.push_back(4);
    cout<<"capacity:"<<v.capacity()<<endl;
    cout<<"size:"<<v.size()<<endl;

    v.push_back(5);
    cout<<"capacity:"<<v.capacity()<<endl;
    cout<<"size:"<<v.size()<<endl;

    cout<<"vector elements:"<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }

    cout<<endl<<"element at index 2: "<<v.at(2)<<endl;

    cout<<"front: "<<v.front()<<endl;
    cout<<"back: "<<v.back()<<endl;

    cout<<"before pop: "<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    v.pop_back();

    cout<<"after pop:"<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }

    cout<<endl<<"before clear size: "<<v.size()<<endl;
    v.clear();
    cout<<"after clear size: "<<v.size()<<endl;

    vector<int> b(5,1);
    cout<<"vector b: ";
    for(int i=0;i<b.size();i++)
    {
        cout<<b[i]<<" ";
    }

    vector<int> last(b);
    cout<<endl<<"vector last: ";
    for(int i=0;i<last.size();i++)
    {
        cout<<last[i]<<" ";
    }

}
