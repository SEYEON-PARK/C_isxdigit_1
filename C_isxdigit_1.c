#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char a = 'A';
	printf("%d\n", isxdigit(a)); //16진수 숫자인지 아닌지 확인하기.

	return 0;
}