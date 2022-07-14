#include "dynamic_lib.h"
#include <stdio.h>
/**
 * add -prints add two numbers
 *@i: print int i
 *@k: print int k
 * Return: Always 0.
 */
int add(int i, int k)
{
	return (i + k);
}

int sub(int i, int k)
{
	return ( i - k);
}

int mul(int i, int k)
{
	return (i * k);
}

int div(int i, int k)
{
	return (i / k);
}

int mod(int i, int k)
{
	return (i % k);
}
