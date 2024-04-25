#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
typedef struct s_string_array
{
    int size;
    char** array;
} string_array;
#endif

#ifndef STRUCT_INTEGER_ARRAY
#define STRUCT_INTEGER_ARRAY
typedef struct s_integer_array
{
    int size;
    int* array;
} integer_array;
#endif


integer_array* my_count_on_it(string_array* param_1)
/*
integer_array* my_count_on_it(string_array* param_1) {
 integer_array *javob;
 javob = (integer_array*)malloc(sizeof(integer_array));
 javob->array = (int *)malloc(param_1->size * sizeof(int));
 int x=0, z=0, y=0;
 
 while (x < param_1->size){
 while(param_1->array[x][y]!='\0'){
 z++;
 y++;
 }
 javob->array[x] = z; 
 z=0;
 y=0;
 x++;
 }
 javob->size = x;
 
 return javob;
}
*/{   integer_array *javob;
    javob = (integer_array*)malloc(param_1->size*sizeof(integer_array));
    javob->array = (int*)malloc(param_1->size*sizeof(int));
    int x=0, z=0, y=0;
    
    while (x<param_1->size){
        while(param_1->array[x][y]!='\0'){
            z++;
            y++;}
        javob->array[x] = z; 
        z=0;
        y=0;
        x++;
    }        
javob->size = x;
return javob;
}