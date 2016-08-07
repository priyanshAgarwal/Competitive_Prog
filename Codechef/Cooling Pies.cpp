#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,pies[30],rack[30];
		scanf("%d",&n);
		
		for(int i=0;i<n;i++) scanf("%d",&pies[i]);
		for(int i=0;i<n;i++) scanf("%d",&rack[i]);
		
		sort(pies,pies+n);
		sort(rack,rack+n);
		
		short int match=0,j=0;
		
		for(int i=0;i<n;i++)
		{
			if(pies[j]<=rack[i])
			{
				match++,j++;
			}			
		}
		printf("%d\n",match);

	}
	
	return 0;
}
