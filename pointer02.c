#include<stdio.h>
int main()
{
	char ch, *pc;
	short sh, *ps;
	int i, *pi;
	long l, *pl;
	float f, *pf;
	double d, *pd;
	
	pc = &ch;
	ps = &sh;
	pi = &i;
	pl = &l;
	pf = &f;
	pd = &d;
	
	printf("문자형: %u %u\n", pc, pc+1);
	printf("short형: %u %u\n", ps, ps+1);
	printf("정수형: %u %u\n", pi, pi+1);
	printf("long형: %u %u\n", pl, pl+1);
	printf("float형: %u %u\n", pf, pf+1);
	printf("double형: %u %u\n", pd, pd+1);
	
	return 0;
}
