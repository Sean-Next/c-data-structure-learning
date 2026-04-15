#include "Stack.h"

//初始化栈
void STInit(ST* ps)
{
	assert(ps);

	ps->arr = NULL;
	ps->top = ps->capacity = 0;

	return;
}

//销毁栈
void STDesTroy(ST* ps)
{
	assert(ps);

	if (ps != NULL)
	{
		free(ps->arr);
	}

	ps->arr = NULL;
	ps->top = ps->capacity = 0;

	return;
}

//在栈的顶部放入元素
void STPush(ST* ps, STDataType x)
{
	assert(ps);

	if (ps->top == ps->capacity)
	{
		//2倍增容
		int newcapacity = (ps->capacity == 0) ? 4 : (2 * ps->capacity);

		STDataType* temp = (STDataType*)realloc(ps->arr, newcapacity * sizeof(STDataType));

		//判断申请是否成功
		if (temp == NULL)
		{
			perror("realloc");
			exit(1);
		}

		ps->arr = temp;
		ps->capacity = newcapacity;
	}

	//元素入栈
	ps->arr[ps->top++] = x;

	return;
}

//获取栈的顶部元素
STDataType STTop(ST* ps)
{
	assert(ps && !STEmpty(ps));

	return ps->arr[ps->top - 1];
}

//在栈的顶部删除元素
void STPop(ST* ps)
{
	assert(!STEmpty(ps));

	ps->top--;

	return;
}

//获取栈的有效元素个数
int STSize(ST* ps)
{
	return ps->top;
}

//判断栈是否为空
bool STEmpty(ST* ps)
{
	return ps->top == 0;
}