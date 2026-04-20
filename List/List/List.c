#include "List.h"

//申请一个新链表节点
LTNode* LTBuyNode(LTDataType x)
{
	//申请空间
	LTNode* newnode = (LTNode*)malloc(sizeof(LTNode));

	//申请失败结束程序
	if (newnode == NULL)
	{
		perror("malloc fail!");
		exit(1);
	}

	(newnode)->data = x;
	(newnode)->next = (newnode)->prev = newnode;

	return newnode;
}

//初始化链表
LTNode* LTinit()
{
	LTNode* phead = LTBuyNode(-1);

	return phead;
}

//打印链表所有元素
void LTPrint(LTNode* phead)
{
	assert(phead);

	LTNode* pcur = phead->next;

	printf("Head->");
	//遍历打印
	while (pcur != phead)
	{
		printf("%d->", pcur->data);
		pcur = pcur->next;
	}
	printf("Head");
	printf("\n");

	return;
}

//链表尾部插入节点
void LTPushBack(LTNode* phead, LTDataType x)
{
	assert(phead);

	//申请新节点
	LTNode* newnode = LTBuyNode(x);

	//连接新节点
	newnode->next = phead;
	newnode->prev = phead->prev;

	phead->prev->next = newnode;
	phead->prev = newnode;

	return;
}

//链表头部插入节点
void LTPushFront(LTNode* phead, LTDataType x)
{
	assert(phead);

	//申请新节点
	LTNode* newnode = LTBuyNode(x);

	//连接新节点
	newnode->next = phead->prev;
	newnode->prev = phead;

	phead->next->prev = newnode;
	phead->next = newnode;

	return;
}

//判断链表是否为空链表
bool LTEmpty(LTNode* phead)
{
	assert(phead);

	return phead->next == phead;
}

//链表尾部删除节点
void LTPopBack(LTNode* phead)
{
	assert(phead && !LTEmpty(phead));

	//重新连接节点
	LTNode* del = phead->prev;
	del->prev->next = phead;
	phead->prev = del->prev;

	//删除节点
	free(del);
	del = NULL;

	return;
}

//链表头部删除节点
void LTPopFront(LTNode* phead)
{
	assert(phead && !LTEmpty(phead));

	//重新连接节点
	LTNode* del = phead->next;
	del->next->prev = phead;
	phead->next = del->next;

	//删除节点
	free(del);
	del = NULL;

	return;
}

//查找节点返回地址
LTNode* LTFind(LTNode* phead, LTDataType x)
{
	assert(phead);

	LTNode* pcur = phead->next;

	//遍历查找
	while (pcur != phead)
	{
		if (pcur->data == x)
		{
			return pcur;
		}
		pcur = pcur->next;
	}

	return NULL;
}

//指定位置之前插入节点
void LTInsert(LTNode* pos, LTDataType x)
{
	assert(pos);

	//申请新节点
	LTNode* newnode = LTBuyNode(x);

	//连接节点
	newnode->prev = pos->prev;
	newnode->next = pos;

	pos->prev->next = newnode;
	pos->prev = newnode;

	return;
}

//指定位置之后插入节点
void LTInsertAfter(LTNode* pos, LTDataType x)
{
	assert(pos);
	//申请新节点
	LTNode* newnode = LTBuyNode(x);

	//连接节点
	newnode->prev = pos;
	newnode->next = pos->next;

	pos->next->prev = newnode;
	pos->next = newnode;

	return;
}

//删除指定位置节点
void LTErase(LTNode* pos)
{
	assert(pos);

	//连接节点
	pos->prev->next = pos->next;
	pos->next->prev = pos->prev;

	//删除节点
	free(pos);
	pos = NULL;

	return;
}

//删除指定位置后一个节点
void LTEraseAfter(LTNode* pos)
{
	assert(pos && pos->next);

	//记录删除节点
	LTNode* del = pos->next;

	//连接节点
	pos->next->next->prev = pos;
	pos->next = pos->next->next;

	//删除节点
	free(del);
	del = NULL;

	return;
}

//销毁整个链表
void ListDestroy(LTNode* phead)
{
	assert(phead);

	LTNode* pcur = phead->next;

	//遍历删除
	while (pcur != phead)
	{
		//记录下一节点
		LTNode* next = pcur->next;

		//删除节点
		free(pcur);
		pcur = next;
	}

	//删除头节点
	free(phead);

	return;
}