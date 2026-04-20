#include "SeqList.h"

//测试顺序表初始化
void test01()
{
	printf("测试1：\n");

	SL s;
	SLInit(&s);
	printf("\n");

	return;
}

//测试顺序表尾插
void test02()
{
	printf("测试2：\n");

	SL s;
	SLInit(&s);

	SLPushBack(&s, 1);
	SLPushBack(&s, 2);
	SLPushBack(&s, 3);
	SLPushBack(&s, 4);
	SLPushBack(&s, 5);

	SLPrint(&s);
	printf("\n");

	return;
}

//测试顺序表头插
void test03()
{
	printf("测试3：\n");

	SL s;
	SLInit(&s);

	SLPushFront(&s, 1);
	SLPushFront(&s, 2);
	SLPushFront(&s, 3);
	SLPushFront(&s, 4);
	SLPushFront(&s, 5);

	SLPrint(&s);
	printf("\n");

	return;
}

//测试顺序表尾删
void test04()
{
	printf("测试4：\n");

	SL s;
	SLInit(&s);

	SLPushFront(&s, 1);
	SLPushFront(&s, 2);
	SLPushFront(&s, 3);
	SLPushFront(&s, 4);
	SLPushFront(&s, 5);
	SLPrint(&s);

	SLPopBack(&s);
	SLPrint(&s);
	SLPopBack(&s);
	SLPrint(&s);
	SLPopBack(&s);
	SLPrint(&s);
	SLPopBack(&s);
	SLPrint(&s);
	SLPopBack(&s);
	SLPrint(&s);

	return;
}

//测试顺序表头删
void test05()
{
	printf("测试5：\n");

	SL s;
	SLInit(&s);

	SLPushFront(&s, 1);
	SLPushFront(&s, 2);
	SLPushFront(&s, 3);
	SLPushFront(&s, 4);
	SLPushFront(&s, 5);
	SLPrint(&s);

	SLPopFront(&s);
	SLPrint(&s);
	SLPopFront(&s);
	SLPrint(&s);
	SLPopFront(&s);
	SLPrint(&s);
	SLPopFront(&s);
	SLPrint(&s);
	SLPopFront(&s);
	SLPrint(&s);

	return;
}

//测试顺序表元素查找
void test06()
{
	printf("测试6：\n");

	SL s;
	SLInit(&s);

	SLPushFront(&s, 1);
	SLPushFront(&s, 2);
	SLPushFront(&s, 3);
	SLPushFront(&s, 4);
	SLPushFront(&s, 5);
	SLPrint(&s);

	int pos = SLFind(&s, 5);

	if (pos >= 0)
	{
		printf("找到了5，下标为%d\n", pos);
	}
	else
	{
		printf("没找到5\n");
	}

	pos = SLFind(&s, 100);

	if (pos >= 0)
	{
		printf("找到了100，下标为%d\n", pos);
	}
	else
	{
		printf("没找到100\n");
	}
	printf("\n");

	return;
}

//测试指定下标位置插入元素
void test07()
{
	printf("测试7：\n");

	SL s;
	SLInit(&s);

	SLPushFront(&s, 1);
	SLPushFront(&s, 2);
	SLPushFront(&s, 3);
	SLPushFront(&s, 4);
	SLPushFront(&s, 5);
	SLPrint(&s);

	SLInsert(&s, SLFind(&s, 2), 100);
	SLPrint(&s);
	SLInsert(&s, SLFind(&s, 2), 200);
	SLPrint(&s);
	SLInsert(&s, SLFind(&s, 2), 300);
	SLPrint(&s);
	printf("\n");

	return;
}

//测试指定下标后插入元素
void test08()
{
	printf("测试8：\n");

	SL s;
	SLInit(&s);

	SLPushFront(&s, 1);
	SLPushFront(&s, 2);
	SLPushFront(&s, 3);
	SLPushFront(&s, 4);
	SLPushFront(&s, 5);
	SLPrint(&s);

	SLInsertAfter(&s, SLFind(&s, 2), 100);
	SLPrint(&s);
	SLInsertAfter(&s, SLFind(&s, 2), 200);
	SLPrint(&s);
	SLInsertAfter(&s, SLFind(&s, 2), 300);
	SLPrint(&s);
	printf("\n");

	return;
}

//测试删除指定下标位置元素
void test09()
{
	printf("测试9：\n");

	SL s;
	SLInit(&s);

	SLPushFront(&s, 1);
	SLPushFront(&s, 2);
	SLPushFront(&s, 3);
	SLPushFront(&s, 4);
	SLPushFront(&s, 5);
	SLPrint(&s);

	SLErase(&s, SLFind(&s, 2));
	SLPrint(&s);
	SLErase(&s, SLFind(&s, 5));
	SLPrint(&s);
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
	test09();

	return 0;
}