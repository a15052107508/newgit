#define  _CRT_SECURE_NO_WARNINGS
#include "game.h"


typedef struct stu
{
	char name[20];
	short age;
	char tele[12];
	char sex[5];

}stu;

void print1(stu tmp)
{
	printf("����:%s\n", tmp.name);
	printf("����:%d\n", tmp.age);
	printf("�绰:%s\n", tmp.tele);
	printf("�Ա�:%s\n", tmp.sex);

}

void print2(stu* ps)
{
	printf("����:%s\n", ps->name);
	printf("����:%d\n", ps->age);
	printf("�绰:%s\n", ps->tele);
	printf("�Ա�:%s\n", ps->sex);

}

int main()
{
	stu s1 = { "����",18,"12345678910","��" };
	print1(s1);
	print2(&s1);
	return 0;
}
	//double a = 0.0, b = 0.0, c = 0.0;
	//int ret = 0;
	////ax^2+bx+c=0
	//while (1)
	//{
	//	printf("ax^2+bx+c=0\n��ֱ�����a,b,c��ֵ��");
	//	scanf("%lf%lf%lf", &a, &b, &c);
	//	printf("��ȷ�����󷽳��Ƿ����£�\n");
	//	printf("%lfx^2+%lfx+%lf=0\n", a, b, c);
	//	printf("1.ȷ��       2.ȡ��\n");
	//	scanf("%d", &ret);
	//	switch (ret)
	//	{
	//	case 1:
	//	{
	//		if (b * b - 4 * a * c > 0)
	//		{
	//			double x1 = 0, x2 = 0;
	//			x1 = sqrt(b * b - 4 * a * c) - b;
	//			x1 = x1 / (2 * a);
	//			x2 = sqrt(b * b - 4 * a * c) + b;
	//			x2 = -x2;
	//			x2 = x2 / (2 * a);
	//			printf("���󷽳̽�Ϊ��x1=%lf x2=%lf\n", x1, x2);
	//			break;
	//		}
	//		else if (b * b - 4 * a * c == 0)
	//		{
	//			double X = 0;
	//			X = b / (2 * a);
	//			X = -X;
	//			printf("���󷽳̽�Ϊ��X=%lf\n", X);
	//			break;
	//		}
	//		else if(b * b - 4 * a * c < 0)
	//		{
	//			printf("������ʵ���⣬������\n");
	//			break;
	//		}
	//	}
	//	case 2:
	//	{
	//		return 0;
	//	}
	//	default:
	//	{
	//		printf("������\n");
	//	}
	//	}
	//}
	/*int arr1[] = {1,3,5,7,9};
	int arr2[] = { 2,4,6,8,10 };
	int tmp = 0;
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
		printf("%d %d\n", arr1[i], arr2[i]);
	}*/
	
	