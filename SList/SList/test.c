#include "SList.h"

//测试链表打印
void test01()
{
	printf("测试1\n");

	//创建链表
	SLTNode* node1 = (SLTNode*)malloc(sizeof(SLTNode));
	SLTNode* node2 = (SLTNode*)malloc(sizeof(SLTNode));
	SLTNode* node3 = (SLTNode*)malloc(sizeof(SLTNode));
	SLTNode* node4 = (SLTNode*)malloc(sizeof(SLTNode));

	node1->data = 1;
	node2->data = 2;
	node3->data = 3;
	node4->data = 4;

	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	node4->next = NULL;

	SLTNode* pList = node1;

	//打印
	SLTPrint(pList);
	printf("\n");

	return;
}

//测试链表尾插
void test02()
{
	printf("测试2\n");

	SLTNode* pList = NULL;

	SLTPushBack(&pList, 1);
	SLTPushBack(&pList, 2);
	SLTPushBack(&pList, 3);
	SLTPushBack(&pList, 4);

	SLTPrint(pList);
	printf("\n");

	return;
}

//测试链表头插
void test03()
{
	printf("测试3\n");

	SLTNode* pList = NULL;

	SLTPushFront(&pList, 1);
	SLTPushFront(&pList, 2);
	SLTPushFront(&pList, 3);
	SLTPushFront(&pList, 4);

	SLTPrint(pList);
	printf("\n");

	return;
}

//测试链表尾删
void test04()
{
	printf("测试4\n");

	SLTNode* pList = NULL;

	SLTPushBack(&pList, 1);
	SLTPushBack(&pList, 2);
	SLTPushBack(&pList, 3);
	SLTPushBack(&pList, 4);
	SLTPrint(pList);

	SLTPopBack(&pList);
	SLTPrint(pList);
	SLTPopBack(&pList);
	SLTPrint(pList);
	SLTPopBack(&pList);
	SLTPrint(pList);
	SLTPopBack(&pList);
	SLTPrint(pList);
	printf("\n");

	return;
}

//测试链表头删
void test05()
{
	printf("测试5\n");

	SLTNode* pList = NULL;

	SLTPushBack(&pList, 1);
	SLTPushBack(&pList, 2);
	SLTPushBack(&pList, 3);
	SLTPushBack(&pList, 4);
	SLTPrint(pList);

	SLTPopFront(&pList);
	SLTPrint(pList);
	SLTPopFront(&pList);
	SLTPrint(pList);
	SLTPopFront(&pList);
	SLTPrint(pList);
	SLTPopFront(&pList);
	SLTPrint(pList);
	printf("\n");

	return;
}

//测试链表节点查找
void test06()
{
	printf("测试6\n");

	SLTNode* pList = NULL;

	SLTPushBack(&pList, 1);
	SLTPushBack(&pList, 2);
	SLTPushBack(&pList, 3);
	SLTPushBack(&pList, 4);
	SLTPrint(pList);

	if (SLTFind(pList, 3) != NULL)
	{
		printf("找到“3”了\n");
	}
	else
	{
		printf("没找到“3”\n");
	}

	if (SLTFind(pList, 100) != NULL)
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

//测试指定位置前插节点
void test07()
{
	printf("测试7\n");

	SLTNode* pList = NULL;

	SLTPushBack(&pList, 1);
	SLTPushBack(&pList, 2);
	SLTPushBack(&pList, 3);
	SLTPushBack(&pList, 4);
	SLTPrint(pList);

	SLTInsert(&pList, SLTFind(pList, 1), 100);
	SLTPrint(pList);
	SLTInsert(&pList, SLTFind(pList, 3), 200);
	SLTPrint(pList);
	SLTInsert(&pList, SLTFind(pList, 4), 300);
	SLTPrint(pList);
	printf("\n");

	return;
}

//测试指定位置后插节点
void test08()
{
	printf("测试8\n");

	SLTNode* pList = NULL;

	SLTPushBack(&pList, 1);
	SLTPushBack(&pList, 2);
	SLTPushBack(&pList, 3);
	SLTPushBack(&pList, 4);
	SLTPrint(pList);

	SLTInsertAfter(SLTFind(pList, 1), 100);
	SLTPrint(pList);
	SLTInsertAfter(SLTFind(pList, 3), 200);
	SLTPrint(pList);
	SLTInsertAfter(SLTFind(pList, 4), 300);
	SLTPrint(pList);
	printf("\n");

	return;
}

//测试删除指定位置节点
void test09()
{
	printf("测试9\n");

	SLTNode* pList = NULL;

	SLTPushBack(&pList, 1);
	SLTPushBack(&pList, 2);
	SLTPushBack(&pList, 3);
	SLTPushBack(&pList, 4);
	SLTPrint(pList);

	SLTErase(&pList, SLTFind(pList, 1));
	SLTPrint(pList);
	SLTErase(&pList, SLTFind(pList, 3));
	SLTPrint(pList);
	SLTErase(&pList, SLTFind(pList, 4));
	SLTPrint(pList);
	printf("\n");

	return;
}

//测试删除指定位置后一个节点
void test10()
{
	printf("测试10\n");

	SLTNode* pList = NULL;

	SLTPushBack(&pList, 1);
	SLTPushBack(&pList, 2);
	SLTPushBack(&pList, 3);
	SLTPushBack(&pList, 4);
	SLTPrint(pList);

	SLTEraseAfter(SLTFind(pList, 1));
	SLTPrint(pList);
	SLTEraseAfter(SLTFind(pList, 3));
	SLTPrint(pList);
	SLTEraseAfter(SLTFind(pList, 1));
	SLTPrint(pList);
	printf("\n");

	return;
}

//测试链表整体销毁
void test11()
{
	printf("测试11\n");

	SLTNode* pList = NULL;

	SLTPushBack(&pList, 1);
	SLTPushBack(&pList, 2);
	SLTPushBack(&pList, 3);
	SLTPushBack(&pList, 4);
	SLTPrint(pList);

	SListDestroy(&pList);
	SLTPrint(pList);
	printf("\n");

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