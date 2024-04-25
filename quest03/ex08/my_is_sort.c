#include <stdbool.h>
#ifndef STRUCT_INTEGER_ARRAY
#define STRUCT_INTEGER_ARRAY
typedef struct s_integer_array
{
    int size;
    int* array;
} integer_array;
#endif


bool my_is_sort(integer_array* param_1)
{ int n=0, z=0, x=0;
while (n<param_1->size) {
    if (n<param_1->size-1){
        if (param_1->array[n] <= param_1->array[n+1]) z++;
        else if(param_1->array[n] >= param_1->array[n+1]) x++;}
    else if (param_1->array[param_1->size-2]<=param_1->array[param_1->size-1])z++;
    else if (param_1->array[param_1->size-2]>=param_1->array[param_1->size-1])x++;
    n++;}
if (z==param_1->size || x==param_1->size) return true;
else return false;}