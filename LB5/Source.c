#include <stdio.h>
#include <locale.h>
#include <math.h>
#define _USE_MATH_DEFINES 
#define M_PI 3.14159265358979323846
#define t -6

void main()
{
	setlocale(LC_ALL, "RUS");
	/*puts("Задание 1");
	float gr, gr1;
	scanf("%e", &gr);
	gr1 = gr * M_PI / 180;
	gr1 = sin(gr1);
	printf("%.6f\n", gr1);
	puts("----------");
	puts("Задание 2");
	float a, b, x, y, res1, res2;
	scanf("%f", &x);
	a = log(x);
	b = sqrt(pow(x, 2) + pow(t, 2));
	y = pow(sqrt(fabs(a - b * x)), 1. / 5);
	printf("Введённое число %f, ответ %f\n", x, y);
	puts("----------");
	puts("Задание 3");
	int k, o;
	scanf("%d", &k);
	o = pow(2.f, k);
	printf("%d\n", o);*/
	puts("Отчёт");
	float X = 4000, Y = -0.875, Z = -0.475 * pow(10, -3), Res1, Res2, res3, res4, res5,pr,pr1,pr2;
	Res1 = fabs(cos(X) - cos(Y));
	Res2 = 1 + 2 * pow(sin(Y), 2);
	res3 = pow(Res1, Res2);
	pr = pow(Z, 2);
	pr1 = pow(Z, 3);
	pr2 = pow(Z, 4);
	res4 = 1 + Z + pr/ 2 + pr1 / 3 + pr2 / 4;
	res5 = res3 * res4;
	printf("Ответ %f", res5);
}