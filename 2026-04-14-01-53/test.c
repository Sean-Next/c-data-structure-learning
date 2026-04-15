#include "Stack.h"

void test()
{
	printf("测试所有函数功能\n");

	ST st;
	STInit(&st);

	STPush(&st, 1);
	STPush(&st, 2);
	STPush(&st, 3);
	STPush(&st, 4);

	while (STSize(&st))
	{
		printf("%d ", STTop(&st));
		STPop(&st);
	}
	printf("\n");

	STDesTroy(&st);

	if (STEmpty(&st))
	{
		printf("销毁成功\n");
	}
	else
	{
		printf("销毁失败\n");
	}
	
	return;
}

//主函数：顺序表功能综合测试
int main()
{
	test();

	return 0;
}