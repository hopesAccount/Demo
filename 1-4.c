/*��C���������Լ�� */
#include<stdio.h>
int main()
{
      int a,b,temp,num1,num2;
	  int r;
	  printf("��������������:");
	  scanf("%d %d",&num1,&num2);
	  r=num1%num2;
	  temp=num2;
	  while(r!=0)
	  {
	        num1=num2;
			num2=r;
			r=num1%num2;
	  }
	  printf("���Լ����%d\n",num2);
	   return 0;
}