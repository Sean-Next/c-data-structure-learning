#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int SLTDataType;

typedef struct SListNode
{
	SLTDataType data;//数据
	struct SListNode* next;//下一节点地址
}SLTNode;

//打印链表所有元素
void SLTPrint(SLTNode* phead);
//申请一个新链表节点
SLTNode* SLTBuyNode(SLTDataType x);
//链表尾部插入节点
void SLTPushBack(SLTNode** pphead, SLTDataType x);
//链表头部插入节点
void SLTPushFront(SLTNode** pphead, SLTDataType x);
//链表尾部删除节点
void SLTPopBack(SLTNode** pphead);
//链表头部删除节点
void SLTPopFront(SLTNode** pphead);
//查找节点返回地址
SLTNode* SLTFind(SLTNode* phead, SLTDataType x);
//指定位置之前插入节点
void SLTInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x);
//指定位置之后插入节点
void SLTInsertAfter(SLTNode* pos, SLTDataType x);
//删除指定位置节点
void SLTErase(SLTNode** pphead, SLTNode* pos);
//删除指定位置后一个节点
void SLTEraseAfter(SLTNode* pos);
//销毁整个链表
void SListDestroy(SLTNode** pphead);