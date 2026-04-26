#include "Queue.h"

//测试初始化队列
void test01()
{
	printf("测试1：\n");

	Queue qu;
	QueueInit(&qu);
	QueuePrint(&qu);
	printf("\n");

	return;
}

//测试队列尾部放入元素
void test02()
{
	printf("测试2：\n");

	Queue qu;
	QueueInit(&qu);

	QueuePush(&qu, 1);
	QueuePrint(&qu);
	QueuePush(&qu, 2);
	QueuePrint(&qu);
	QueuePush(&qu, 3);
	QueuePrint(&qu);
	QueuePush(&qu, 4);
	QueuePrint(&qu);
	printf("\n");

	return;
}

//测试队列头部删除元素
void test03()
{
	printf("测试3：\n");

	Queue qu;
	QueueInit(&qu);
	QueuePush(&qu, 1);
	QueuePush(&qu, 2);
	QueuePush(&qu, 3);
	QueuePush(&qu, 4);
	QueuePrint(&qu);

	QueuePop(&qu);
	QueuePrint(&qu);
	QueuePop(&qu);
	QueuePrint(&qu);
	QueuePop(&qu);
	QueuePrint(&qu);
	QueuePop(&qu);
	QueuePrint(&qu);
	printf("\n");

	return;
}

//测试队列头部获取元素
void test04()
{
	printf("测试4：\n");

	Queue qu;
	QueueInit(&qu);
	QueuePush(&qu, 1);
	QueuePush(&qu, 2);
	QueuePush(&qu, 3);
	QueuePush(&qu, 4);
	QueuePrint(&qu);

	printf("%d\n\n", QueueFront(&qu));

	return;
}

//测试队列尾部获取元素
void test05()
{
	printf("测试5：\n");

	Queue qu;
	QueueInit(&qu);
	QueuePush(&qu, 1);
	QueuePush(&qu, 2);
	QueuePush(&qu, 3);
	QueuePush(&qu, 4);
	QueuePrint(&qu);

	printf("%d\n\n", QueueBack(&qu));

	return;
}

//测试获取队列有效数据个数
void test06()
{
	printf("测试6：\n");

	Queue qu;
	QueueInit(&qu);
	QueuePush(&qu, 1);
	QueuePush(&qu, 2);
	QueuePush(&qu, 3);
	QueuePush(&qu, 4);
	QueuePrint(&qu);

	printf("size=%d\n\n", QueueSize(&qu));

	return;
}

//测试销毁队列
void test07()
{
	printf("测试7：\n");

	Queue qu;
	QueueInit(&qu);
	QueuePush(&qu, 1);
	QueuePush(&qu, 2);
	QueuePush(&qu, 3);
	QueuePush(&qu, 4);
	QueuePrint(&qu);

	QueueDesTroy(&qu);
	QueuePrint(&qu);
	printf("\n");

	return;
}

//测试判断队列是否为空
void test08()
{
	printf("测试8：\n");

	Queue qu;
	QueueInit(&qu);
	QueuePush(&qu, 1);
	QueuePush(&qu, 2);
	QueuePush(&qu, 3);
	QueuePush(&qu, 4);
	QueuePrint(&qu);

	QueueDesTroy(&qu);
	QueuePrint(&qu);

	if (QueueEmpty(&qu))
	{
		printf("队列为空\n");
	}
	else
	{
		printf("队列不为空\n");
	}
	printf("\n");

	return;
}

//主函数：顺序表功能总测试
int main()
{
	test01();
	test02();
	test03();
	test04();
	test05();
	test06();
	test07();
	test08();

	return 0;
}