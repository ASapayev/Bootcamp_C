char* my_strdup(char* param_1)
{   char *javob = malloc(15*sizeof(char));
    int x=0;
    while (param_1[x]!='\0'){
        javob[x]=param_1[x];
        x++;
    }
return javob;


}