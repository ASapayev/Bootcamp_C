char* my_strncpy(char* param_1, char* param_2, int param_3)
{ int z=0;
    while (param_3!=z) {

        param_1[z] = param_2[z];
        z++;

    }
return param_1;
}