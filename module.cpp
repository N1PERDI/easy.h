#include <iostream>
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
	if (s < 0) { s = s * -1; }
	return s;
}
double itc_fabs(double d) {
	if (d < 0) { d = d * -1; }
	return d;
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
	return a;
}
int itc_skv(int num) {
	if (num > 0) { return num * num; }
	else { return -1; }
	
}
int itc_spr(int a, int b) {
	if (a > 0 and b > 0) { cout << a * b << endl; }
	else {
		cout << -1 << endl;
	}
	return 0;
}
int itc_str(int a, double b, int c) {
	int s, d, e = -1;
	if ((a < b + c) && (b < a + c) && (c < a + b))
	{
		d = (a + b + c) / 2.0;
		s = 0.5 * (d * (d - a) * (d - b) * (d - c));
		return s;
	}
	else { return e; }

}
double itc_scir(int radius) {
	double p = 3.14, s;
	if (radius > 0) {
		s = (p * radius) * (p * radius);
		return s;
	}
	else { return -1; }
}
double itc_pow(int num, int step)
{
	double d = num;
		if (step < 0)
		{
		step *= -1;
		for (int n = 1; n < step; n++)
		{
		d *= num;
		}
		d = 1 / d;
		}
		else if (step == 0)
		d = 1;
		else
		{
		for (int n = 1; n < step; n++)
		{
			d *= num;
		}
		}
		return d;
	}

bool itc_ispositive(int num)
{
	if (num >= 0) { return 1; }
	return 0;
}
bool itc_ispositive_d(double num) {
	if (num >= 0) { return 1; }
	return 0;
}
