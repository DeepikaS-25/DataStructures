#include "main.h"

/* Function to check the number is minimum or maximum to decide the position */
void max_heap(int *heap, int i, int size)
{
    int Left, Right, large;
    Left = (2 * i) + 1;             //index of left node
    Right = (2 * i) + 2;            //index of right node
     
     /* comparing left and root and storing highest at large */
    if((heap[i] < heap[Left]) && (Left < size))
    {
        large = Left;
    }
    else
    {
        large = i;
    }
     
     /* comparing large and right and storing highest at the large */
    if((heap[large] < heap[Right]) && (Right < size))
    {
        large = Right;
    }
     
     /* placing large at the root */
    if(i != large)
    {
        swap(&heap[large], &heap[i]);  //swapping values
        max_heap(heap, large, size);   //calling max_heap again with large as index
    }
}
