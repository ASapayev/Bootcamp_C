#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
typedef struct s_string_array
{
    int size;
    char** array;
} string_array;
#endif


char* my_join(string_array* param_1, char* param_2)
{char *javob = (char*)malloc(+param_1->size*10*sizeof(char));
 int x=0, y=0, z=0;
if (!param_1->array){ 
     
    return 0;}
else{
while (x<param_1->size) {
    while (param_1->array[x][y]!='\0'){
        javob[z] = param_1->array[x][y];
        y++;
        z++;}
        y=0;
        x++;
    if (x!=param_1->size){
    while (param_2[y]!='\0'){
        javob[z]=param_2[y];
        y++;
        z++;}
        y=0;
}}

return javob;
}}