#include <stdlib.h>
char *reverse_string(char *param_1)
{   char *revers;
    
    int i, j, len;
    int z=0;
    while (param_1[z]!='\0') {
    z++;
    }
    len = z;
    revers = (char*) malloc(z * sizeof(char));
    j = 0;
    for (i = len - 1; i >= 0; i--) {
        revers[j++] = param_1[i];
    }
    revers[j] = '\0';
    
return revers;
}