#include<iostream>

using namespace std;

//int main()
//{
//	int no,mul=1;
//	scanf("%d",&no);
//	for(int i=1;i<=no;i++){
//		mul=mul*i;
//	}
//	printf("%d",mul);	
//}

int main()
{
	int loop,a;
	cin>>loop;
	while(loop--){
		int res=0,i=5;
		cin>>a;
		while(i<=a){
			res=res+a/i;
			i*=5;
		}
		cout<<res<<endl;
	}
	return 0;
}
