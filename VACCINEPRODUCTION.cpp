#include<bits/stdc++.h>
#define R(i,a,b) for(int i=a;i<b;i++)
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll,ll> pi;

int main()
{	ios::sync_with_stdio(0);
	cin.tie(0);  
	ll d1,v1,d2,v2,p,t=0,c=0;
	cin>>d1>>v1>>d2>>v2>>p;
	while(p>0){
		if(c<d1 && c<d2 ){
			c++;
		}
		else if(c>=d1 && c<d2){
			p = p-v1;
			c++;
		}
		else if(c>=d2 && c<d1){
			p = p-v2;
			c++;
		}
		else{
			p = p-(v1+v2);
			c++;
		}
	}
	cout<<c-1;
		
	return 0;
	}
