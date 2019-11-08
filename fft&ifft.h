#ifndef __FFT_H__
#define __FFT_H__

typedef struct {
	double real;
	double img;
}complex;
 complex *W; /* 输入序列 ,变换核 */

#define PI 3.1415926535897932384626433832795028841971 /*圆周率 */
#define N 4096 /*定义复数类型 */ 

void fft(complex x[], int size_x); /*快速傅里叶变换 */
void ifft(complex x[], int size_x);
void initW(int size_x); /*初始化变换核 */
void change(complex x[], int size_x); /* 变址 */
void add(complex, complex, complex *); /* 复数加法 */
void mul(complex, complex, complex *); /* 复数乘法 */
void sub(complex, complex, complex *); /* 复数减法 */
void divi(complex, complex, complex *);/* 复数除法 */
void output(complex x[], int size_x);
double* Conv_overlap1(double* h, double* x);

#endif
