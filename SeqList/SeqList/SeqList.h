#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//顺序表储存数据类型
typedef int SLTDataType;

//顺序表结构体
typedef struct SeqList
{
	SLTDataType* arr;//顺序表地址
	int size;//有效数据个数
	int capacity;//空间大小
}SL;

//初始化顺序表
void SLInit(SL* pa);
//销毁顺序表
void SLDesTroy(SL* pa);
//打印顺序表所有元素
void SLPrint(SL* pa);
//检查并扩容顺序表容量
void SLCheckCapacity(SL* pa);
//顺序表尾部插入元素
void SLPushBack(SL* pa, SLTDataType x);
//顺序表头部插入元素
void SLPushFront(SL* pa, SLTDataType x);
//顺序表尾部删除元素
void SLPopBack(SL* pa);
//顺序表头部删除元素
void SLPopFront(SL* pa);
//查找元素返回下标
int SLFind(SL* pa, SLTDataType x);
//在指定下标位置插入元素
void SLInsert(SL* pa, int pos, SLTDataType x);
//在指定下标后插入元素
void SLInsertAfter(SL* pa, int pos, SLTDataType x);
//删除指定下标位置元素
void SLErase(SL* pa, int pos);