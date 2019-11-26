#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

// ����+����ͷ+ѭ��
typedef int SLTDateType;
typedef struct SListNode
{
	SLTDateType data;
	struct SListNode* next;
}SListNode;

SListNode* BuySListNode(SLTDateType x);
void SListPrint(SListNode* plist);
void SListPushBack(SListNode** pplist, SLTDateType x);
void SListPushFront(SListNode** pplist, SLTDateType x);
void SListPopBack(SListNode** pplist);
void SListPopFront(SListNode** pplist);