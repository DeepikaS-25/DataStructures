#include "main.h"

void build_maxheap(int *heap, int size)
{
      /* calling max_heap for the indexes that has been left previously */
    int index = (size / 2) - 1;
    
      /* looping till root node is reached */
    while(index >= 0)
    {
        max_heap(heap, index, size);
        index--;                            //decrementing index to check for next node
    }
}