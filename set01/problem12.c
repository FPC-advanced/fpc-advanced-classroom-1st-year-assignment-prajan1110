#include <stdio.h>
struct _complex {
	float real,imaginary;
};
typedef struct _complex Complex;

int get_n();
Complex input_complex();
void input_n_complex(int n, Complex c[n]);
Complex add(Complex a, Complex b);
Complex add_n_complex(int n, Complex c[n]);
void output(int n, Complex c[n], Complex result);

int main()
{
	int n;
	int a,b;
	Complex result;
	n=get_n();
	input_complex();
	Complex c[n];
	input_n_complex(n,&c[n]);
    result = add_n_complex(n,&c[n]);
	output(n,&c[n],result);
	return 0;

}
int get_n()
{
	int n;
	printf("Enter the number of  complex numbers:\n");
	scanf("%d",&n);
	return n;
}
Complex input_complex()
{
	Complex a;
	printf("Enter the real part:\n");
	scanf("%f",&a.real);
	printf("Enter the imaginary part:\n");
	scanf("%f",&a.imaginary);
	return a;
}
void input_n_complex(int n, Complex c[n])
{
	for (int i=0;i<n;i++)
	{
		printf("The complex number %d is \n",i+1);
		c[i]=input_complex();
	}
}
Complex add(Complex a, Complex b)
{
	Complex sum;
	sum.real = a.real+b.real;
	sum.imaginary=a.imaginary+b.imaginary;
	return sum;
}
Complex add_n_complex(int n, Complex c[n])
{
	int i=0;
	Complex sum ={0,0};
	for ( i=0;i<n;i++)
	{
		sum=add(sum,c[i]);
	}
	return sum;
}
void output(int n, Complex c[n], Complex result)
{
	int i=0;
	printf("The complex numbers are:\n");
	for (i=0;i<n;i++)
	{
		printf("%.2f+%.2fi\n",c[i].real,c[i].imaginary);
	}

	printf("Sum of the complex number is: %.2f+%.2fi\n",result.real,result.imaginary);
}

