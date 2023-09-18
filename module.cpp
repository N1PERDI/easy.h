#include <iostream>
#include "easy.h"
#include <cmath>
using namespace std;
void printHello(void) {
	cout << "Hello, World!!!" << endl;
}
void itc_name(void) {
	cout << "BABIDJON" << " ";
}
void itc_fio(void) {
	cout << "BABIDJONOVICH" << endl;
}
int itc_abs(int s) {
	cout << fabs(s) << endl;
	return s;
}
double itc_fabs(double d) {
	double c = fabs(d);
	cout << c << endl;
	return c;
}
int itc_revnbr(int num) {
	int a, b, c;
	a = num % 10;
	b = (num % 100 - a) / 10;
	c = num / 100;
	cout << a << b << c << endl;
	return a, b, c;
}
bool itc_iseven(int num) {
	if (num % 2 == 0) { cout << "TRUE" << endl; }
	else { cout << "FALSE" << endl; }
	return 0;
}
int itc_max(int num, int num2) {
	if (num > num2) { return num; }
	else { return num2; }
}
int itc_min(int min, int min2) {
	if (min > min2) { return min2; }
	else { return min; }
}
double itc_fmax(double e, double v) {
	if (e > v) { return e; }
	else { return v; }

}
double itc_fmin(double e, double v) {
	if (e > v) { return v; }
	else { return e; }

}
int itc_sqrt(int num) {
	int a = -1;
	for (int i = 1; i < num; i++)
	{
		if (i * i == num)
			a = i;
	}
	cout  << a << endl;
	return a;
}
int itc_skv(int num) {
	if (num > 0) { cout  << num * num << endl; }
	else { cout << -1 << endl; }
	return 0;
}
int itc_spr(int a, int b) {
	if (a > 0 and b > 0) { cout << a * b << endl; }
	else {
		cout << -1 << endl;
	}
	return 0;
}
int itc_str(int a, int b, int c) {
	int s, d, e = -1;
	if ((a < b + c) && (b < a + c) && (c < a + b))
	{
		d = (a + b + c) / 2;
		s = sqrt(d * (d - a) * (d - b) * (d - c));
		return s;
	}
	else { return e; }

}
double itc_scir(int radius) {
	double p = 3.14, s;
	int a = -1;
	if (radius > 0) {
		s = pow((p * radius), 2);
		return s;
	}
	else { return a; }
}
double itc_pow(int num, int step)
{
	int a;
	a = pow(num, step);
	return a;
}
bool itc_ispositive(int num)
{
	if (num >= 0) { return 1; }
	return 0;
}
bool its_ispositive_d(double num) {
	if (num >= 0) { return 1; }
	return 0;
}