int my_strcmp(char* param_1, char* param_2)
{
    int x=0, z;
    while (param_1[x]!='\0'){
        z = param_1[x] - param_2[x];
        if ( z != 0) {
            return z;
            
            
        }
        x++;
        
    }return 0;

}