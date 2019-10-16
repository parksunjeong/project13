#include <stdio.h>

int main()
{
	int input = 0;
	printf("4자리 정수 입력");
	scanf_s("%d", &input);

	printf("%10d\n", input);
	printf("%010d\n", input);
	printf("%+010d\n", input);
	printf("%d\n", input);
	printf("%10o\n", input);
	printf("%010o\n", input);
	printf("%10x\n", input);
	printf("%#010x|n", input);

	return 0;
}