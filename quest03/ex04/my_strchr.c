
char* my_strchr(char *param_1, char param_2)
{int i=0, z=0;
    while (param_1[0]!='\0'){
        if (param_1[0] != param_2){
            while (param_1[z]!='\0'){
                param_1[z]=param_1[z+1];
                z++;}
        }
        
        
    if (param_1[0]==param_2){
            return param_1;
        }else {
            
        return 0;
        }}}