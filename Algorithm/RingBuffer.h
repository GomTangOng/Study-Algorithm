#pragma once
#pragma once

#include <Windows.h>

#define MAX_QUEUE_SIZE 100

class CRingBuffer
{
public:
	CRingBuffer();
	~CRingBuffer();

	int  Enqueue(char *pBuf, const int nSize);
	int  Dequeue(char *pOut, const int nSize);

	void ReSize();
	void Clear();

	inline bool IsPacket();
	inline bool IsFull();
	inline bool IsEmpty();
private:
	char *m_pQueue;

	char m_tail;
	char m_head;

	int m_nTotalSize;
	int m_nCurrentSize;
	int m_nEmptySize;
public:

	int GetCurrentSize() const { return m_nCurrentSize; }
	int GetEmptySize()   const { return m_nEmptySize; }
	const int GetTotalSize()   const { return m_nTotalSize; }

	char* GetQueueBuffer() { return &m_pQueue[m_head]; }
};

