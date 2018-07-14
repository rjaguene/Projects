
#include <stdio.h>
#define MAX 5
#define ALL UN, DEUX, TROIS, QUATRE, CINK
#define UN f1
#define DEUX f2
#define TROIS f3
#define QUATRE f4
#define CINK f5

void *f1(char **str)
{
	printf("fonction %s\n",*str);
	printf("fonction %p\n",str);
	return (*str);
}

void *f2(char **str)
{
	printf("fonction %s\n",*str);
	return (*str);
}

void *f3(char **str)
{
	printf("fonction %s\n",*str);
	return (*str);
}

void *f4(int *d)
{
	printf("result tata\n");
	return (d);
}

void *f5(int *d)
{
	printf("fonction 5\n");
	return (d);
}

void *sigleton(int d, char **str)
{
	static void *(*f[MAX])() = {ALL};
	// static int (*f[5])(void) = { 1, 2, 3, 4, 5};
	// (*f[d])(c, d);
	if (d > 2)
		return ((*f[d])(d));
	else
		return ((*f[d])(str));
}


int main(void)
{
	int i;
	static char *toto = "toto";
	i =0;
	while (i <5)
	{
		if (i > 2)
			printf("%d\n",(int)sigleton(i++, &toto));
		else
			printf("%s\n",(char*)sigleton(i++, &toto));
	}
	return (0);
}
