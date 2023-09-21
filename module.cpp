#include <iostream>

using namespace std;
void printHello(void) {
	cout << "Hello, World!!!" << endl;
}
void itc_name(void) {
	cout << "Anton" << " ";
}
void itc_fio(void) {
	cout << "Zankevich ";
	itc_name();
	cout << "Pavlovich";
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
	int pos = num % 10; // первая
	int sr = (((num - pos) / 10) % 10); // вторая
	int nac = ((num / 10) - sr) / 10;  // третья
	int sum = (pos * 100) + (sr * 10) + nac;
	if ((num / 10 == 0) and (((num - pos) / 10) % 10)) { sum = nac * 100; }

	return sum;


}
bool itc_iseven(int num) {
	if (num % 2 == 0) { return 1; }
	else { return 0; }
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
	if (num == 1) { return 1; }
	if (num == 0) { return 0; }
	for (int s = 1; s < num; s++)
	{
		if (s * s == num)
			return s;
	}
	return -1; 
}
int itc_skv(int num) {
	if (num > 0) { return num * num; }
	else { return -1; }
	
}
int itc_spr(int a, int b) {
	if (a > 0 and b > 0) { return a * b; }
	else {
		return -1;
	}
}
int itc_str(int a, int b, int c) {
	double s;
	double t = b;
	double q = 2.0;
	double polp;
	if (a > 0 and b > 0 and c > 0) {
		if (a + b > c and b + c > a and c + a > b) {
		   polp = (a + t + c)/ q;
		}
		else { return -1; }
	}
	else { return -1; }
	itc_sqrt((polp * (polp - a) * (polp - b) * (polp - c)));
}
 
double itc_scir(int radius) {
	double p = 3.14;
	if (radius >= 0) {
		double s = p* (radius * radius);
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
