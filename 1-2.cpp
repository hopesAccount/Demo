/*����һ����λ��Ȼ���������*/
#include<IOSTREAM>
using namespace std;
int main()
{
   int num1,num2;
   int a,b,c;
   cout<<"һ����λ����";
   cin>>num1;
   a=num1/100;
   b=num1/10%10;
   c=num1%10;
   num2=a+b*10+c*100;
   cout<<"ת���������Ϊ��"<<num2<<endl;
   return 0;
}