//请分别在32位/64位模式下编译运行看结果，分析！
//VS下:long 与 int一样   double与long double 一样

#include <stdio.h>

char c='A';
int  i=100;
short int si=-2;
long l=0x100;
long long  ll=0x12345678;
float f=-1.10102030405060708090102030405F; // 使用 f 或 F 后缀指定为 float 类型
double d=1.10102030405060708090102030405;  // 默认是 double 类型
long double ld=1.10102030405060708090102030405L; // 使用 L 或 l 后缀指定为 long double 类型
char *pc = "Hello World!";
int  ai[100] = { 1,2,3,4 };
double *pd=&d;
int* pi = ai;
int tf = -1 < 2;

void showbytes(unsigned char* p, int bytes)
{
	for (int i = 0; i < bytes; i++)
	{
		printf("%02X ", *p);
		p++;
	}
	printf("\t");
}

int main()
{
	printf("char:		%p:\t",&c);	showbytes(&c,sizeof(c));	printf(",%c\n", c);
	printf("short int:	%p:\t",&si);showbytes(&si, sizeof(si));	printf(",%d\n",si);
	printf("int:		%p:\t",&i);	showbytes(&i, sizeof(i));	printf(",%d\n", i);
	printf("long:		%p:\t",&l);	showbytes(&l, sizeof(l));	printf(",%d\n", l);
	printf("long long:	%p:\t", &ll);	showbytes(&ll, sizeof(ll));	printf("%lld\n", ll);
	printf("float:		%p:\t",&f);	showbytes(&f, sizeof(f));	printf(",%.30f\n", f);
	printf("double:		%p:\t",&d);	showbytes(&d, sizeof(d));	printf(",%.30lf\n", d);
	printf("long double:	%p:\t",&ld);	showbytes(&ld, sizeof(ld));	printf(",%.30Lf\n", ld);
	printf("char  *:		%p:\t",pc);	showbytes(pc, sizeof(pc));	printf(",%s\n", pc); 
	printf("int   *:		%p:\t",ai);	showbytes(ai, sizeof(ai));	printf(",%p\n", ai);
	printf("double*:		%p:\t",pd);	showbytes(pd, sizeof(pd));	printf(",%p\n", pd);
	printf("int   *:		%p:\t",pi);	showbytes(pi, sizeof(pi));	printf(",%p\n", pi);
}
