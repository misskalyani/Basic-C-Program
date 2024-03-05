#include<stdio.h>
void show()
{
    static int n=5;
	n++;
	printf("\n Value=%d",n);
}
/*kalyani
int main()
{
	show();
	show();
	show();
	show();
}
