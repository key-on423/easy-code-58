#include <stdio.h>

//int main()
//{
//	printf("%.3f %.3f", 3.1411,3.1415);//满5进1
//}
//
//求最大公因数
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
//	printf("最大公因数是%d", y);
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
//	printf("请输入x的值我将返还一个对应y值给你,q来退出:");
//	int x;
//	float y;
//	while ((scanf("%d", &x)) == 1)
//	{
//		if (x > 40)
//		{
//			printf("x的值溢出\n");
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
//		printf("y的值为%f\n", y);
//
//	}
//	printf("Done!\n");
//	return 0;
//}

//以下程序应用弦截法求方程x的三次方减5*x的平方+16x-80=0的根
//其中f函数可根据指定的x的值求出方程的值：函数xpoint可根据x1和x2求出f（x1）和f（x2）的连线与
//x轴的交点；函数root用来求区间（x1，x2）的实根，请编写root函数

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
float f(float x){}//略
float xpoint(float x1, float x2) {}//略
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
