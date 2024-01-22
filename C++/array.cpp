#include <iostream>
#include <array>

using namespace std;

int main()
{
    //array in C++
    cout<<"array->";
    array<int,4> a={1,2,3,4};
    int s=a.size();
    for(int i=0;i<s;i++)
    {
        cout<<a[i]<<' ';
    }

    cout<<endl<<"element at 2nd index:"<<a.at(2)<<endl;
    cout<<"empty or not:"<<a.empty()<<endl;
    cout<<"first element:"<<a.front()<<endl;
    cout<<"last element:"<<a.back()<<endl;
    cout<<endl<<endl;

}
