
#include "BubbleSort.h"

void BubbleSort(Enemy** pointerPointer, int l)
{
	bool swapped = true;
	int j = 0;
	int indextemp;
	while (swapped)
	{
		swapped = false;
		j++;
		for (int i = 0; i < l - j; i++)
		{
			if (pointerPointer[i]->health > pointerPointer[i + 1]->health)
			{
				Enemy* temp = pointerPointer[i];
				pointerPointer[i] = pointerPointer[i + 1];
				pointerPointer[i + 1] = temp;
				swapped = true;
			}
		}
	}
}