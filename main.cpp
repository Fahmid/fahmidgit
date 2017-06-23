#include <bits/stdc++.h>
using namespace std;
 int b[3][3]={
        {4,0,1},
        {1,2,3},
        {3,5,5}
    };
void printsolution(int m[3][3])
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(m[i][j])
            {
                cout<< b[i][j] << " ";
            }
        }
    }
    cout<<endl;
}
bool solve(int a[4][4],int x,int y)
{

}
int main()
{
    int a[3][3]={
        {4,0,1},
        {1,2,3},
        {3,5,5}
    };
    int marked[3][3]={0};
    return 0;
}
