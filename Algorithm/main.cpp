#include <cstdio>
#include "RingBuffer.h"

int main()
{
	CRingBuffer *buf = new CRingBuffer();
	char temp[100];
	while (1)
	{
		scanf("%s", temp);
		int num = buf->Enqueue(temp, strlen(temp));
		if (num == -1)
		{
			buf->Dequeue(temp, 20);
			ZeroMemory(temp, sizeof(temp));
		}
		else
		{
			ZeroMemory(temp, sizeof(temp));
		}		
		printf("Enequeue(CurrentSize : %d) : %s\n", buf->GetCurrentSize(), buf->GetQueueBuffer());
	}

	return 0;
}