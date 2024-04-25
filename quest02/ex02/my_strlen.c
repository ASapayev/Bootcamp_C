/*int my_strlen(char* param_1){
    int i=0, z=0;
    for (i=0, param_1[i]!= "/0")
    
        {z++;}
    
    return i;
}*/
 int my_strlen(char * param_1)
{
  int i = 0;
  while (param_1[i] != '\0')
    i++;
  return i;
}