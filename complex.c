#include<stdio.h>
#include<stdlib.h>
typedef struct complex{
	float real;
	float imag;
}complex;
complex add(complex n1, complex n2);
complex multiply(complex n1, complex n2);
complex subtract(complex n1, complex n2);
int main()
{
	complex n1,n2,result;
	printf("Enter real and imaginary part of first complex number: \n");
	scanf("%f %f", &n1.real, &n1.imag);
	printf("Enter real and imaginary part of second complex number: \n");
	scanf("%f %f", &n2.real, &n2.imag);
	result = add(n1,n2);
	printf("Sum = %.1f + %.1fi \n",result.real,result.imag);
	result = multiply(n1,n2);
	printf("Product = %.1f + %.1fi \n",result.real,result.imag);
	result = subtract(n1,n2);
	printf("Subtraction = %.1f + %.1fi \n",result.real,result.imag);
	return 0;

}
complex add(complex n1, complex n2){
	complex temp;
	temp.real =n1.real +n2.real;
	temp.imag = n1.imag+n2.imag;
	return(temp);
}
complex multiply(complex n1, complex n2){
	complex temp;
	temp.real =n1.real*n2.real - n1.imag*n2.imag;
	temp.imag = n1.real*n2.imag +n1.imag*n2.real;
	return(temp);
}
complex subtract(complex n1, complex n2){
	complex temp;
	temp.real =n1.real -n2.real;
	temp.imag = n1.imag-n2.imag;
	return(temp);
}