/*����������a��b���������������Լ�� */
#include<IOSTREAM>
using namespace std;
int main()
{
      int a,b,temp,r;
	  cout<<"��������������a,b:";
	  cin>>a>>b;
      r=a%b;
	  temp=b;
	  while(r!=0)
	  {
	        a=b;
			b=r;
			r=a%b;
	  }
	  cout<<"���Լ��:"<<b<<endl;
	  return 0;
}