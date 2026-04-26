#include "Stack.h"

//测试初始化栈
void test01()
{
	printf("测试1：\n");
	ST st;
	STInit(&st);
	STPrint(&st);
	printf("\n");
	return;
}

//测试在栈顶部放入元素
void test02()
{
	printf("测试2：\n");
	ST st;
	STInit(&st);

	STPush(&st, 1);
	STPrint(&st);
	STPush(&st, 2);
	STPrint(&st);
	STPush(&st, 3);
	STPrint(&st);
	STPush(&st, 4);
	STPrint(&st);
	printf("\n");

	return;
}

//测试获取栈顶部元素
void test03()
{
	printf("测试3：\n");
	ST st;
	STInit(&st);

	STPush(&st, 1);
	STPush(&st, 2);
	STPush(&st, 3);
	STPush(&st, 4);
	STPrint(&st);

	printf("%d\n\n", STTop(&st));

	return;
}

//测试在栈顶部删除元素
void test04()
{
	printf("测试4：\n");
	ST st;
	STInit(&st);

	STPush(&st, 1);
	STPush(&st, 2);
	STPush(&st, 3);
	STPush(&st, 4);
	STPrint(&st);

	STPop(&st);
	STPrint(&st);
	STPop(&st);
	STPrint(&st);
	STPop(&st);
	STPrint(&st);
	STPop(&st);
	STPrint(&st);
	printf("\n");

	return;
}

//测试获取栈有效元素个数
void test05()
{
	printf("测试5：\n");
	ST st;
	STInit(&st);

	STPush(&st, 1);
	STPush(&st, 2);
	STPush(&st, 3);
	STPush(&st, 4);
	STPrint(&st);
	printf("size=%d\n", STSize(&st));
	printf("\n");

	return;
}

//测试销毁栈
void test06()
{
	printf("测试6：\n");
	ST st;
	STInit(&st);

	STPush(&st, 1);
	STPush(&st, 2);
	STPush(&st, 3);
	STPush(&st, 4);
	STPrint(&st);

	STDesTroy(&st);
	STPrint(&st);

	return;
}

//测试判断栈是否为空
void test07()
{
	printf("测试7：\n");
	ST st;
	STInit(&st);

	STPush(&st, 1);
	STPush(&st, 2);
	STPush(&st, 3);
	STPush(&st, 4);
	STPrint(&st);

	STDesTroy(&st);
	STPrint(&st);

	if (STEmpty(&st))
	{
		printf("栈为空\n");
	}
	else
	{
		printf("栈不为空\n");
	}
	printf("\n");

	return;
}

//主函数：栈功能综合测试
int main()
{
	test01();
	test02();
	test03();
	test04();
	test05();
	test06();
	test07();

	return 0;
}