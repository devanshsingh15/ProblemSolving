#include <iostream>
#include<queue>

using namespace std;
int main(){
    cout<<"integer queue:-"<<endl;
    queue<int> q;
    //inserting element in queue
    q.push(1);
    q.push(2);

    //printing element in queue
    cout<<q.front()<<endl;
    //printing size of queue
    cout<<q.size()<<endl;

    //deleting element(pop delete from front)
    q.pop();
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    cout<<q.size()<<endl;

    // string queue:-
    queue<string> name;
    name.push("D");
    name.push("e");
    name.push("v");
    name.push("a");
    name.push("n");
    name.push("s");
    name.push("h");
    int n=name.size();
    cout<<n<<endl;
    cout<<name.front()<<" ";
    for(int i=0;i<n;i++){
        name.pop();
        cout<<name.front()<<" ";
    }

    return 0;
}
