#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//字符串中大写字母变成小写
//void main()
//{
//	char ch[80] = "123abcdEFG*&";
//	int j;
//	puts(ch);
//	for (j = 0; ch[j] != '\0'; j++)
//		if (ch[j] >= 'A' && ch[j] <= 'Z')
//			ch[j] = ch[j] + 'e' - 'E';
//	puts(ch);
//}

//struct a
//{
//	unsigned short a : 4;
//	unsigned short b : 5;
//	unsigned short c : 7;
//}test;
//
//void main()
//{
//
//	int i;
//	test.a == 2;
//	test.b = 3;
//	test.c = 0;
//	i = *((short*)&test);
//	printf("%d\n", i);
//}

 /*main()
{
	 char c[2][5] = { "6934","8254" }, * p[2];
	 int i, j, s = 0;
	 for (i = 0; i < 2; i++)
	 {
		 p[i] = c[i];
	 }
	 for (i = 0; i < 2; i++)
	 {
		 for (j = 0; p[i][j] > 0 && p[i][j] <= '9'; j += 2)
		 {
			 s = s * 10 + p[i][j] - '0';
		 }
	 }
	 printf("%d\n", s);

}*/

//#include<stdlib.h>
//void fun(double* p1, double* p2, double* s)
//{
//	s = (double*)calloc(1, sizeof(double));
//	*s = *p1 + *(p2 + 1);
//}
//
//main()
//{
//	double a[2] = { 1.1,2.2 }, b[2] = { 10.0,20.0 }, * s = a;
//	fun(a, b, s);
//	printf("%5.2f\n", *s);
//
//}