#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;

int main()
{
    int V,E;
    cout<<"Input number of vertices";
    cin>>V;
    cout<<"Input number of edges";
    cin>>E;

    int a,b;
    vector<int>Adj[V];

    //input the element of graph
    for(int i=1;i<=E;i++){
        cout<<"Input the end point of edge"<<i;
        cin>>a>>b;
        Adj[a].push_back(b);
        Adj[b].push_back(a);
    }

    //print the graph
    for(int i=0;i<V;i++){
        for(int j=0;j<Adj[i].size();j++)
            cout<<Adj[i][j]<<",";
        cout<<endl;
        }

    vector<int>status(V);
    queue<int>Q;
    cout<<endl<<"BFS sequence is ->";
    Q.push(0);
    status[0]=1;
    while(Q.size()!=0)
    {
        int x=Q.front();
        cout<<x<<" ";
        Q.pop();
        for(int j=0;j<Adj[x].size();j++){
            if(status[Adj[x][j]]==0){
                status[Adj[x][j]]=1;
                Q.push(Adj[x][j]);
            }
        }
    }
}
