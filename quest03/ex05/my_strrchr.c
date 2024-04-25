char* my_strrchr(char* param_1, char param_2)
{int x=0, joyi = 0, z=0;

    while (param_1[x]!='\0'){
        if (param_1[x]==param_2){
            joyi = x;}
        x++;}
    char *javob = malloc(x-joyi+1);
    if (joyi==0){
        return 0;}
    else{
        while (param_1[joyi] != '\0'){
            javob[z] = param_1[joyi];
            z++;
            joyi ++;
        }
    return javob;}

}