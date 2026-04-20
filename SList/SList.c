#include "SList.h"

//打印链表所有元素
void SLTPrint(SLTNode* phead)
{
	SLTNode* pcur = phead;

	while (pcur != NULL)
	{
		printf("%d->", pcur->data);
		pcur = pcur->next;
	}

	printf("NULL\n");

	return;
}

//申请一个新链表节点
SLTNode* SLTBuyNode(SLTDataType x)
{
	//申请空间
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));

	//申请失败结束程序
	if (newnode == NULL)
	{
		perror("malloc fail!");
		exit(1);
	}

	newnode->data = x;
	newnode->next = NULL;

	return newnode;
}

//链表尾部插入节点
void SLTPushBack(SLTNode** pphead, SLTDataType x)
{
	assert(pphead != NULL);

	//申请新节点
	SLTNode* newnode = SLTBuyNode(x);

	//判断链表是否为空
	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
	else
	{
		SLTNode* ptail = *pphead;

		//找到尾节点
		while (ptail->next != NULL)
		{
			ptail = ptail->next;
		}

		//连接新节点
		ptail->next = newnode;
	}

	return;
}

//链表头部插入节点
void SLTPushFront(SLTNode** pphead, SLTDataType x)
{
	assert(pphead != NULL);

	//申请新节点
	SLTNode* newnode = SLTBuyNode(x);

	//连接新节点
	newnode->next = *pphead;

	//更换头节点
	*pphead = newnode;

	return;
}

//链表尾部删除节点
void SLTPopBack(SLTNode** pphead)
{
	assert((pphead) && (*pphead));

	//判断链表是否只有一个节点
	if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else
	{
		SLTNode* ptail = *pphead;
		//保存尾节点前的节点
		SLTNode* prev = NULL;

		//找到尾节点
		while (ptail->next)
		{
			prev = ptail;
			ptail = ptail->next;
		}

		//删除尾节点
		free(ptail);
		ptail = NULL;

		//更换尾节点
		prev->next = NULL;
	}
	return;
}

//链表头部删除节点
void SLTPopFront(SLTNode** pphead)
{
	assert((pphead) && (*pphead));

	//保存头节点后的节点
	SLTNode* next = (*pphead)->next;

	//删除头节点
	free(*pphead);
	*pphead = next;

	return;
}

//查找节点返回地址
SLTNode* SLTFind(SLTNode* phead, SLTDataType x)
{
	assert(phead);

	SLTNode* pcur = phead;

	//遍历查找
	while (pcur != NULL)
	{
		//判断是否找到
		if (pcur->data == x)
		{
			return pcur;
		}
		else
		{
			pcur = pcur->next;
		}
	}

	//找不到
	return NULL;
}

//指定位置之前插入节点
void SLTInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x)
{
	assert(pos);

	//申请新节点
	SLTNode* newnode = SLTBuyNode(x);

	if (pos == *pphead)
	{
		//头插
		SLTPushFront(pphead, x);
	}
	else
	{
		SLTNode* prev = *pphead;

		//找到指定位置之前的节点
		while (prev->next != pos)
		{
			prev = prev->next;
		}

		//连接新节点
		prev->next = newnode;
		newnode->next = pos;
	}
	return;
}

//指定位置之后插入节点
void SLTInsertAfter(SLTNode* pos, SLTDataType x)
{
	assert(pos);

	//申请新节点
	SLTNode* newnode = SLTBuyNode(x);

	//连接新节点
	newnode->next = pos->next;
	pos->next = newnode;

	return;
}

//删除指定位置节点
void SLTErase(SLTNode** pphead, SLTNode* pos)
{
	assert((pphead) && (*pphead) && pos);

	if (pos == *pphead)
	{
		//头删
		SLTPopFront(pphead);
	}
	else
	{
		SLTNode* prev = *pphead;

		//找到指定位置之前的节点
		while (prev->next != pos)
		{
			prev = prev->next;
		}

		//连接节点
		prev->next = pos->next;

		//删除节点
		free(pos);
		pos = NULL;
	}

	return;
}

//删除指定位置后一个节点
void SLTEraseAfter(SLTNode* pos)
{
	assert(pos && pos->next);

	//保存删除节点位置
	SLTNode* del = pos->next;

	//连接节点
	pos->next = del->next;

	//删除节点
	free(del);
	del = NULL;

	return;
}

//销毁整个链表
void SListDestroy(SLTNode** pphead)
{
	assert(*pphead);

	SLTNode* pcur = *pphead;

	//遍历销毁
	while (pcur->next != NULL)
	{
		//保存删除节点后面节点的位置
		SLTNode* next = pcur->next;

		//删除节点
		free(pcur);
		pcur = next;
	}

	*pphead = NULL;

	return;
}