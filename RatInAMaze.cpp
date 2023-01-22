#include<bits/stdc++.h>
using namespace std;
bool issafe(int newx,int newy,int arr[][3],int visited[][3],int m)
{
if((newx>=0 and newx<m) && (newy>=0 and newy<m) && (visited[newx][newy]==0)&& (arr[newx][newy]==1))
{
    return true;
}
else 
{
    return false;
}
}
void solve(int arr[][3],int m,vector<string>& ans,string path,int visited[][3],int srcx,int srcy)
{
    //base case
    if(srcx==m-1 and srcy==m-1)
    {
        ans.push_back(path);
        return;
    }
    visited[srcx][srcy]=1;
    //down 
    int newx=srcx+1;
    int newy=srcy;
    if(issafe(newx,newy,arr,visited,m))
    {
        path.push_back('D');
    solve(arr,m,ans,path,visited,newx,newy);
    path.pop_back();}
    //uppwards
    newx=srcx-1;
    newy=srcy;
    if(issafe(newx,newy,arr,visited,m))
    {
        path.push_back('U');
    solve(arr,m,ans,path,visited,newx,newy);
    path.pop_back();}
    //left
    newx=srcx;
    newy=srcy-1;
    if(issafe(newx,newy,arr,visited,m))
    {
        path.push_back('L');
    solve(arr,m,ans,path,visited,newx,newy);
    path.pop_back();}
    //righht
     newx=srcx;
    newy=srcy+1;
    if(issafe(newx,newy,arr,visited,m))
    {
        path.push_back('R');
    solve(arr,m,ans,path,visited,newx,newy);
    path.pop_back();}
    }

vector<string> pathfind(int arr[][3],int m,int n)
{
vector<string>ans;
if(arr[0][0]==0)
return ans;
int srcx=0;
int srcy=0;
int visited[3][3];
for(int i=0;i<m;i++)
{
    for(int j=0;j<n;j++)
    {
        visited[i][j]=0;
    }
}
string path="";
solve(arr,m,ans,path,visited,srcx,srcy);
sort(ans.begin(),ans.end());
return ans;
}
int main()
{
    int arr[3][3]={{1,0,0},{1,1,1},{0,1,1}};
vector<string>s=pathfind(arr,3,3);
for(int i=0;i<s.size();i++)
{
    cout<<s.at(i);
}
    return 0;
}