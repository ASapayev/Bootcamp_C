int my_string_index(char* param_1, char param_2){
    int i = 0, z=-1;
    while (param_1[i] != '\0') {
        if (param_1[i]!=param_2 && param_1[i] == '\0'){
            return z;
        }else if (param_1[i] != '\0' && param_1[i]==param_2 ){
            return i;}
        i++;}
return z;
}