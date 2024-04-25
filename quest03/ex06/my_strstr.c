#include <stdlib.h>
char *yukla(int index, char *matn){
    char *javob = malloc(10);  
    int k=0; 
    index++;
    while(matn[index]!='\0'){
        javob[k]=matn[index];
        k++; 
        index++;
    }
    return javob;
}
char* my_strstr(char* param_1, char* param_2)
{ int i=0, z=0, x=0, j=0, y=1;
if (param_2[0]=='\0'){
    return param_1;
}else{  
while (param_2[i]!='\0'){
    
    i++;}

while (param_1[j]!='\0'){
    z=j;    
    while (param_1[z]==param_2[x] && param_2[x]!='\0'){
        if (y==i){
            return yukla(z-i, param_1);
            }
        z++;
        x++;
        y++;}
    x=0;
    y=1;
    j++;}
return 0;}}/*
int main(){
  char matn[10] = "hello", harf[5] = "ll";
  printf("javob: %s\n",my_strstr(&matn, &harf));
  return 0;}
*/
/*    while (param_1[i]!='\0'){
        while (param_2[z]!='\0'){
            y=i;
            if (param_1[y]!=param_2[z]) {
                break;}
            else {
                javob[x]=param_1[i];
                x++;

            }
        }
    }
*/
