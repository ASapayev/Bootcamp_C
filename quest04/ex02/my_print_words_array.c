#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
typedef struct s_string_array
{
    int size;
    char** array;
} string_array;
#endif

int my_putchar(char c) {
  return write(1, &c, 1);
}

int	my_putstr(char *str)
{
  while (*str != '\0')
    {
      my_putchar(*str);
      str++;
    }
  return (1);
}

void my_print_words_array(string_array* param_1)
{   int x=0;
    while(x<param_1->size){

        my_putstr(param_1->array[x]);
        my_putstr("\n");       
        
        x++;
    }

}
