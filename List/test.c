#include "List.h"

//测试链表初始化
void test01()
{
	printf("测试1\n");

	LTNode* phead = LTinit();
	LTPrint(phead);
	printf("\n");

	return;
}

//测试链表尾插
void test02()
{
	printf("测试2\n");

	LTNode* phead = LTinit();

	LTPushBack(phead, 1);
	LTPrint(phead);
	LTPushBack(phead, 2);
	LTPrint(phead);
	LTPushBack(phead, 3);
	LTPrint(phead);
	LTPushBack(phead, 4);
	LTPrint(phead);
	printf("\n");

	return;
}

//链表头部插入节点
void test03()
{
	printf("测试3\n");

	LTNode* phead = LTinit();

	LTPushFront(phead, 1);
	LTPrint(phead);
	LTPushFront(phead, 2);
	LTPrint(phead);
	LTPushFront(phead, 3);
	LTPrint(phead);
	LTPushFront(phead, 4);
	LTPrint(phead);
	printf("\n");

	return;
}

//测试链表尾删
void test04()
{
	printf("测试4\n");

	LTNode* phead = LTinit();

	LTPushBack(phead, 1);
	LTPushBack(phead, 2);
	LTPushBack(phead, 3);
	LTPushBack(phead, 4);
	LTPrint(phead);

	LTPopBack(phead);
	LTPrint(phead);
	LTPopBack(phead);
	LTPrint(phead);
	LTPopBack(phead);
	LTPrint(phead);
	LTPopBack(phead);
	LTPrint(phead);
	printf("\n");

	return;
}

//测试链表头删
void test05()
{
	printf("测试5\n");

	LTNode* phead = LTinit();

	LTPushBack(phead, 1);
	LTPushBack(phead, 2);
	LTPushBack(phead, 3);
	LTPushBack(phead, 4);
	LTPrint(phead);

	LTPopFront(phead);
	LTPrint(phead);
	LTPopFront(phead);
	LTPrint(phead);
	LTPopFront(phead);
	LTPrint(phead);
	LTPopFront(phead);
	LTPrint(phead);
	printf("\n");

	return;
}

//测试链表节点查找
void test06()
{
	printf("测试6\n");

	LTNode* phead = LTinit();

	LTPushBack(phead, 1);
	LTPushBack(phead, 2);
	LTPushBack(phead, 3);
	LTPushBack(phead, 4);
	LTPrint(phead);

	if (LTFind(phead, 3) != NULL)
	{
		printf("找到“3”了\n");
	}
	else
	{
		printf("没找到“3”\n");
	}

	if (LTFind(phead, 100) != NULL)
	{
		printf("找到“100”了\n");
	}
	else
	{
		printf("没找到“100”\n");
	}
	printf("\n");

	return;
}

//指定位置之前插入节点
void test07()
{
	printf("测试7\n");

	LTNode* phead = LTinit();

	LTPushBack(phead, 1);
	LTPushBack(phead, 2);
	LTPushBack(phead, 3);
	LTPushBack(phead, 4);
	LTPrint(phead);

	LTInsert(LTFind(phead, 1), 100);
	LTPrint(phead);
	LTInsert(LTFind(phead, 2), 200);
	LTPrint(phead);
	LTInsert(LTFind(phead, 3), 300);
	LTPrint(phead);
	LTInsert(LTFind(phead, 4), 400);
	LTPrint(phead);
	printf("\n");

	return;
}

//指定位置之后插入节点
void test08()
{
	printf("测试8\n");

	LTNode* phead = LTinit();

	LTPushBack(phead, 1);
	LTPushBack(phead, 2);
	LTPushBack(phead, 3);
	LTPushBack(phead, 4);
	LTPrint(phead);

	LTInsertAfter(LTFind(phead, 1), 100);
	LTPrint(phead);
	LTInsertAfter(LTFind(phead, 2), 200);
	LTPrint(phead);
	LTInsertAfter(LTFind(phead, 3), 300);
	LTPrint(phead);
	LTInsertAfter(LTFind(phead, 4), 400);
	LTPrint(phead);
	printf("\n");

	return;
}

//删除指定位置节点
void test09()
{
	printf("测试9\n");

	LTNode* phead = LTinit();

	LTPushBack(phead, 1);
	LTPushBack(phead, 2);
	LTPushBack(phead, 3);
	LTPushBack(phead, 4);
	LTPrint(phead);

	LTErase(LTFind(phead, 1));
	LTPrint(phead);
	LTErase(LTFind(phead, 2));
	LTPrint(phead);
	LTErase(LTFind(phead, 3));
	LTPrint(phead);
	LTErase(LTFind(phead, 4));
	LTPrint(phead);
	printf("\n");

	return;
}

//删除指定位置后一个节点
void test10()
{
	printf("测试10\n");

	LTNode* phead = LTinit();

	LTPushBack(phead, 1);
	LTPushBack(phead, 2);
	LTPushBack(phead, 3);
	LTPushBack(phead, 4);
	LTPrint(phead);

	LTEraseAfter(LTFind(phead, 1));
	LTPrint(phead);
	LTEraseAfter(LTFind(phead, 3));
	LTPrint(phead);
	LTEraseAfter(LTFind(phead, 1));
	LTPrint(phead);
	printf("\n");

	return;
}

//销毁整个链表
void test11()
{
	printf("测试11\n");

	LTNode* phead = LTinit();

	LTPushBack(phead, 1);
	LTPushBack(phead, 2);
	LTPushBack(phead, 3);
	LTPushBack(phead, 4);

	ListDestroy(phead);
	phead = NULL;

	return;
}

//主函数：链表功能总测试
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
	test10();
	test11();

	return 0;
}