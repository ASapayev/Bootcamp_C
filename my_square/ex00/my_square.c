#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int ac, char **av){
int a=0,b=0,c=0,d=0;
int y;
int x;
    if(!av[1]){
    
        return 0;
    }
    else if(!av[2]){
    
        return 0;
    }
//int x = atoi(av[1]);
//int y = atoi(av[2]);

else{
    x = atoi(av[1]);
    y = atoi(av[2]);
    char *matn = (char*)malloc(x*y*2*sizeof(char));
    char belgi[4] = "o-| ";
    while (b<y){
        while (a<x){
            if ((a==0 && b==0)||(a==x-1 && b==0)||(a==0 && b==y-1)||(a==x-1 && b==y-1)){
                matn[c]=belgi[0];
                c++;}
            else if ((b==0 && 0<a && a<x)||(b==y-1 && 0<a && a<x)){
                matn[c]=belgi[1];
                c++;}
            else if ((a==0 && 0<b && b<y)||(a==x-1 && 0<b && b<y)){
                matn[c]=belgi[2];
                c++;}
            else {
                matn[c]=belgi[3];
                c++;}
            a++;}
        a=0;
        matn[c]='\n';
        c++;
        b++;}
printf("%s", matn);
    return 0;
}}