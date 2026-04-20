#include "Queue.h"

//初始化队列
void QueueInit(Queue* pq)
{
	assert(pq);
	pq->phead = pq->ptail = NULL;
	pq->size = 0;

	return;
}

//队列尾部放入元素
void QueuePush(Queue* pq, QDataType x)
{
	assert(pq);

	//申请空间
	QueueNode* newnode = (QueueNode*)malloc(sizeof(QueueNode));

	//申请失败结束程序
	if (newnode == NULL)
	{
		perror("malloc fail!");
		exit(1);
	}

	newnode->data = x;
	newnode->next = NULL;

	//判断是否是空队列
	if (QueueEmpty(pq))
	{
		pq->phead = pq->ptail = newnode;
	}
	else
	{
		pq->ptail->next = newnode;
		pq->ptail = pq->ptail->next;
	}
	pq->size++;

	return;
}

//判断队列是否为空
bool QueueEmpty(Queue* pq)
{
	assert(pq);
	return pq->phead == NULL;
}

//队列头部删除元素
void QueuePop(Queue* pq)
{
	assert(!QueueEmpty(pq));

	//判断是否为唯一节点
	if (pq->phead == pq->ptail)
	{
		free(pq->phead);
		pq->phead = pq->ptail = NULL;
	}
	else
	{
		//记录新头节点
		QueueNode* next = pq->phead->next;

		free(pq->phead);
		pq->phead = next;
	}
	pq->size--;

	return;
}

//队列头部获取元素
QDataType QueueFront(Queue* pq)
{
	assert(!QueueEmpty(pq));

	return pq->phead->data;
}

//队列尾部获取元素
QDataType QueueBack(Queue* pq)
{
	assert(!QueueEmpty(pq));

	return pq->ptail->data;
}

//获取队列有效数据个数
int QueueSize(Queue* pq)
{
	assert(pq);

	return pq->size;
}

//销毁队列
void QueueDesTroy(Queue* pq)
{
	assert(pq);

	QueueNode* pcur = pq->phead;

	while (pcur)
	{
		//记录下一节点
		QueueNode* next = pcur->next;

		free(pcur);
		pcur = next;
	}

	pq->phead = pq->ptail = NULL;
}