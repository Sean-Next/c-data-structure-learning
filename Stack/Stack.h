#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

//存储数据类型---int
typedef int STDataType;

//栈-结构体
typedef struct Stack
{
	STDataType* arr;//栈地址
	int top;//有效数据个数---栈顶位置
	int capacity;//空间大小
}ST;

//初始化栈
void STInit(ST* ps);
//销毁栈
void STDesTroy(ST* ps);
//打印栈所有元素
void STPrint(ST* ps);
//在栈顶部放入元素
void STPush(ST* ps, STDataType x);
//获取栈顶部元素
STDataType STTop(ST* ps);
//在栈顶部删除元素
void STPop(ST* ps);
//获取栈的有效元素个数
int STSize(ST* ps);
//判断栈是否为空
bool STEmpty(ST* ps);