#include "SeqList.h"

//初始化顺序表
void SLInit(SL* pa)
{
	assert(pa != NULL);

	pa->arr = NULL;
	pa->size = pa->capacity = 0;

	return;
}

//打印顺序表所有元素
void SLPrint(SL* pa)
{
	assert(pa != NULL);

	for (int i = 0; i < pa->size; i++)
	{
		printf("%d ", pa->arr[i]);
	}
	printf("\n");
}

//检查并扩容顺序表容量
void SLCheckCapacity(SL* pa)
{
	//判断是否增容
	if (pa->size == pa->capacity)
	{
		//2倍增容
		int newcapacity = (pa->capacity == 0) ? 4 : (pa->capacity * 2);

		SLTDataType* temp = (SLTDataType*)realloc(pa->arr, newcapacity * sizeof(SLTDataType));

		//判断申请是否成功
		if (temp == NULL)
		{
			perror("realloc");
			exit(1);
		}

		pa->arr = temp;
		pa->capacity = newcapacity;
	}
	return;
}

//顺序表尾部插入元素
void SLPushBack(SL* pa, SLTDataType x)
{
	assert(pa);

	//增容 
	SLCheckCapacity(pa);

	//在尾部插入
	pa->arr[pa->size++] = x;

	return;
}

//顺序表头部插入元素
void SLPushFront(SL* pa, SLTDataType x)
{
	assert(pa);

	//增容
	SLCheckCapacity(pa);

	//在头部插入
	for (int i = pa->size; i > 0; i--)
	{
		pa->arr[i] = pa->arr[i - 1];
	}
	pa->arr[0] = x;
	pa->size++;

	return;
}

//顺序表尾部删除元素
void SLPopBack(SL* pa)
{
	assert(pa && pa->size);

	//在尾部删除
	pa->size--;

	return;
}

//顺序表头部删除元素
void SLPopFront(SL* pa)
{
	assert(pa && pa->size);

	//在头部删除
	for (int i = 0; i < pa->size - 1; i++)
	{
		pa->arr[i] = pa->arr[i + 1];
	}

	pa->size--;

	return;
}

//查找元素返回下标
int SLFind(SL* pa, SLTDataType x)
{
	assert(pa);

	//遍历寻找
	for (int i = 0; i < pa->size; i++)
	{
		if (pa->arr[i] == x)
		{
			return i;
		}
	}

	return -1;
}

//在指定下标位置插入元素
void SLInsert(SL* pa, int pos, SLTDataType x)
{
	assert(pa && (pos >= 0 && pos < pa->size));

	//增容
	SLCheckCapacity(pa);

	//遍历后移
	for (int i = pa->size; i > pos; i--)
	{
		pa->arr[i] = pa->arr[i - 1];
	}

	pa->arr[pos] = x;
	pa->size++;

	return;
}

//在指定下标后插入元素
void SLInsertAfter(SL* pa, int pos, SLTDataType x)
{
	assert(pa && (pos >= 0 && pos < pa->size));

	//增容
	SLCheckCapacity(pa);

	//遍历后移
	for (int i = pa->size; i > pos + 1; i--)
	{
		pa->arr[i] = pa->arr[i - 1];
	}

	pa->arr[pos + 1] = x;
	pa->size++;

	return;
}

//删除指定下标位置元素
void SLErase(SL* pa, int pos)
{
	assert(pa && (pos >= 0 && pos < pa->size));

	//遍历前移
	for (int i = pos; i < pa->size - 1; i++)
	{
		pa->arr[i] = pa->arr[i + 1];
	}

	pa->size--;

	return;
}