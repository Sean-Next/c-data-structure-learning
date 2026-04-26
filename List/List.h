#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

//存储数据类型---int
typedef int LTDataType;

//带头双向循环链表-结构体
typedef struct ListNode
{
	LTDataType data;//数据
	struct ListNode* next;//下一节点地址
	struct ListNode* prev;//上一节点地址
}LTNode;

//打印链表所有元素
void LTPrint(LTNode* phead);
//申请一个新链表节点
LTNode* LTBuyNode(LTDataType x);
//初始化链表
LTNode* LTinit();
//链表尾部插入节点
void LTPushBack(LTNode* phead, LTDataType x);
//链表头部插入节点
void LTPushFront(LTNode* phead, LTDataType x);
//判断链表是否为空链表
bool LTEmpty(LTNode* phead);
//链表尾部删除节点
void LTPopBack(LTNode* phead);
//链表头部删除节点
void LTPopFront(LTNode* phead);
//查找节点返回地址
LTNode* LTFind(LTNode* phead, LTDataType x);
//指定位置之前插入节点
void LTInsert(LTNode* pos, LTDataType x);
//指定位置之后插入节点
void LTInsertAfter(LTNode* pos, LTDataType x);
//删除指定位置节点
void LTErase(LTNode* pos);
//删除指定位置后一个节点
void LTEraseAfter(LTNode* pos);
//销毁整个链表
void ListDestroy(LTNode* phead);