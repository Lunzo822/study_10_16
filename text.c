#include<stdio.h>
#include "add.h"		//���������������Զ��庯����˫���ţ�"ͷ�ļ�"������
#include "print.h"
#include "my_strlen.h"

//��������ʱ���������ַ����ĳ���
int main()
{
	char arr[] = "bit";
	//int len = strlen(arr);		//������strlen������
	//printf("%d\n",len);

	//�Զ����󳤶ȵĺ���
	int len = my_strlen(arr);
	//arr�����飬���鴫��ʱ������ȥ�Ĳ����������飬���ǵ�һ��Ԫ�صĵ�ַ
	//������Ҫָ�������ʵ��
	printf("%d\n",len);

	return 0;
}



////����һ���޷���������������˳���ӡÿһλ
//int main ()
//{
//	int num = 0;
//	scanf("%d",&num);
//	//�ݹ�
//	print(num);
//
//	return 0;
//}


//�������
//��������
//int main()
//{
//	int a,b = 0;
//	scanf("%d%d",&a,&b);
//	printf("sum = %d\n",Add(a,b));
//
//	return 0;
//}




////��ʽ����
//int main ()
//{
//	printf("%d",printf("%d",printf("%d",43)));		//43 - 2 - 1
//	//printf()�����ķ���ֵ���ַ��ĸ���
//
//	return 0;
//}



////�Զ��庯��
////дһ��������ÿ����һ������������ͻὫnum��ֵ��1
//void Sum(int* p)
//{
//	(*p) ++;
//}
//int main()
//{
//	int num,i,n = 0;
//	printf("�����룺num = " );
//	scanf("%d",&num);
//	printf("�����룺n = " );
//	scanf("%d",&n);
//	for(i = 0;i<n;i++)
//	{
//		Sum(&num);
//		printf("��%d��	num = %d\n",i+1,num);
//	}
//
//	return 0;
//}