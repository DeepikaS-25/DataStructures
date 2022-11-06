#include "main.h"

/* Function to sort the array using heap sort */
int heap_sort(int *heap, int size )
{
    build_maxheap(heap, size);                  //building binary tree of heap first

    int index = size - 1;

     /* calling max_heap till entire array is sorted */
    while(index >= 0)
    {
          /* since we used max_heap heap[0] will have largest value so shifting it to last */
        swap(&heap[0], &heap[index]);
          
          /* calling max_heap again with modified size and index */
        max_heap(heap, 0, index);
        index--;
    }
}       
