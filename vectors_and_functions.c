#include <stdio.h>
#define SIZE 10

void func(int v[])
{
	printf("Tamanho do vector na funcao func(int v[]) =  %lu\n", sizeof(v));
}
void func2(int v[SIZE])
{
	printf("Tamanho do vector na funcao func(int v[10]) =  %lu\n", sizeof(v));
}
void func3(int * v)
{
	printf("Tamanho do vector na funcao func(int * v) =  %lu\n", sizeof(v));
}
void func4(int *v, int n)
{
	printf("Tamanho do vector na funcao func(int * v, int n) =  %d\n", n);
}

int main(void) {
	int v[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	printf("Tamanho do vector =  %lu\n", sizeof(v));
	func(v);
	func2(v);
	func3(v);
	func4(v, SIZE);

	return 0;
}