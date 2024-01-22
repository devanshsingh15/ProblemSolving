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
    vector<int>DAT(V,0);

    //input the element of graph
    for(int i=1;i<=E;i++){
        cout<<"Input the end point of edge"<<i;
        cin>>a>>b;
        Adj[a].push_back(b);
        DAT[b]++;
    }

    //print the graph
    cout<<endl<<"Adjancency list: "<<endl;
    for(int i=0;i<V;i++){
        for(int j=0;j<Adj[i].size();j++)
            cout<<Adj[i][j]<<",";
        cout<<endl;
        }

    //for print outdegree
    cout<<endl<<"Outdegree are: "<<endl;
    for(int i=0;i<V;i++){
        cout<<i<<""<<Adj[i].size()<<endl;
    }

    //Indegree
    cout<<endl<<"Indegrees are: "<<endl;
    for(int i=0;i<V;i++){
        cout<<i<<""<<DAT[i]<<endl;
    }
}