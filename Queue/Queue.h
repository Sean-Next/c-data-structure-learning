#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

typedef int QDataType;

//定义节点结构
typedef struct QueueNode
{
	QDataType data;
	struct QueueNode* next;
}QueueNode;

//定义队列的结构
typedef struct Queue
{
	QueueNode* phead;//队列头节点
	QueueNode* ptail;//队列尾节点
	int size;//有效数据个数
}Queue;

//初始化队列
void QueueInit(Queue* pq);
//队列尾部放入元素
void QueuePush(Queue* pq, QDataType x);
//判断队列是否为空
bool QueueEmpty(Queue* pq);
//队列头部删除元素
void QueuePop(Queue* pq);
//队列头部获取元素
QDataType QueueFront(Queue* pq);
//队列尾部获取元素
QDataType QueueBack(Queue* pq);
//获取队列有效数据个数
int QueueSize(Queue* pq);
//销毁队列
void QueueDesTroy(Queue* pq);


