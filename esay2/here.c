#include <stdio.h>

//int main()
//{
//	printf("%.3f %.3f", 3.1411,3.1415);//��5��1
//}
//
//���������
//int main()
//{
//	int x, y, z;
//	scanf("%d %d", &x, &y);
//	if (x < y)
//	{
//		z = x;
//		x = y;
//		y = z;
//		
//	}
//		z = x % y;
//	while (z)
//	{
//		x = y;
//		y = z;
//		z = x % y;
//	}
//	printf("���������%d", y);
//}


//int main(int argc, char *argv[])
//{
//	printf("argc is %d\n", argc);
//	for (int i = 0;i < argc;i++)
//	{
//		printf("argv[%d] is :%s\n", i, argv[i]);
//	}
//	
//	return 0;
//}


//int main()
//{
//	printf("������x��ֵ�ҽ�����һ����Ӧyֵ����,q���˳�:");
//	int x;
//	float y;
//	while ((scanf("%d", &x)) == 1)
//	{
//		if (x > 40)
//		{
//			printf("x��ֵ���\n");
//			break;
//		}
//		if (x < 0)
//			y = 0;
//		else if (x > 0 && x <= 10)
//			y = x;
//		else if (x > 10 && x <= 20)
//			y = 10;
//		else if (x > 20 && x <= 40)
//			y = -0.5 * x + 20;
//		printf("y��ֵΪ%f\n", y);
//
//	}
//	printf("Done!\n");
//	return 0;
//}

//���³���Ӧ���ҽط��󷽳�x�����η���5*x��ƽ��+16x-80=0�ĸ�
//����f�����ɸ���ָ����x��ֵ������̵�ֵ������xpoint�ɸ���x1��x2���f��x1����f��x2����������
//x��Ľ��㣻����root���������䣨x1��x2����ʵ�������дroot����

float root(float x1, float x2);
float f(float x);
float xpoint(float x1, float x2);
int main()
{
	float x1, x2, f1, f2, x;
	do 
	{
		printf("inpput x1,x2:\n");
		scanf("%f %f", &x1, &x2);
		printf("x1=%5.2f,x2=%5.2f\n", x1, x2);
		f1 = f(x1);
		f2 = f(x2);
	} while (f1 * f2 > 0);
	x = root(x1, x2);
	printf("A root of equation is %8.4f", x);
}
float f(float x){}//��
float xpoint(float x1, float x2) {}//��
float root(float x1, float x2)
{
	int i;
	float x, y, y1;
	y1 = f(x1);
	do
	{ 
		x = xpoint(x1, x2);
		y = f(x);
		if (y * y1 > 0)
		{
			y1 = y;
			x1 = x;
		}
		else
			x2 = x;
	} while (fabs(y)!=0);
	return x;
}
