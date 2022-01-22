#include<iostream>
#include<cstring>
#include<cstdio>
#include<cmath>
using namespace std;
int x[501],dv[501],w[501][501],b1[101];
int main()
{
    freopen("Travel.in", "r", stdin);
    freopen("Travel.out", "w", stdout);
	int m,n;
	cin>>m>>n;
	memset(w,0x7f,sizeof(w));
	for(int i=1;i<=m;i++)
	{
		char as=1;
		int a=0;
		while(as!=10)
		{
			cin>>x[++a];
			as=getchar();
		}
		for(int j=1;j<a;j++)
		for(int k=j+1;k<=a;k++)
		{
			w[x[j]][x[k]]=1;
		}
	}
	dv[1]=0;
	b1[1]=1;
	for(int i=1;i<=n;i++)
	{
		dv[i]=w[1][i];
	}
	for(int i=1;i<=n-1;i++)
	{
		int k=0;
		int mint=100000000000;
		for(int j=1;j<=n;j++)
		{
			if(b1[j]==0&&dv[j]<mint)
			{
				k=j;
				mint=dv[j];
			}
		}
		if(k==0) break;
		b1[k]=1;
		for(int j=1;j<=n;j++)
		{
		    if(dv[k]+w[k][j]<dv[j])
		    dv[j]=dv[k]+w[k][j];
		}
	}
	cout<<dv[n]-1;
	return 0;
}