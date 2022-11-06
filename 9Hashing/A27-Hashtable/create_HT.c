#include "hash.h"

void create_HT(hash_t *HT, int size)
{
    int i;
      /* updating index, value and link parts for the given size */
    for(i = 0; i < size; i++)
    {
        HT[i].index = i;
        HT[i].value = -1;
        HT[i].link = NULL;
    }
}