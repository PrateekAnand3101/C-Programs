#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    int a,b,c,d,e,f,g,h;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    cin>>e;
    cin>>f;
    cin>>g;
    cin>>h;
    int array[2][2] = {{a,b},{c,d}};
    for (int i=0;i<2; i++)
    {
        for (int j=0;j<2; j++)
        {
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
    int array1[2][2] = {{e,f},{g,h}};
    for (int i=0;i<2; i++)
    {
        for (int j=0;j<2; j++)
        {
            cout<<array1[i][j]<<" ";
        }
        cout<<endl;
    }
    for (int i=0;i<2; i++)
    {
        for (int j=0;j<2; j++)
        {
            for (int k=0;k<2;k++)
            {
                int result[i][j] = {{0,0},{0,0}};
                result[i][j] += array[i][k]*array1[k][j];
            }
            cout<<result[i][j]<<" ";
        cout<<endl;
        }
    }
    for (int i=0;i<2;i++)
    {
        for (int j=0;j<2;j++)
        {
            for (int k=0;k<2;k++)
            {
                cout<<result[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}