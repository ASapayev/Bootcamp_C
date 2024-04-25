int* my_range(int min, int max)
{   //min = 1; max=3;
    int i=0;
    int *javob = malloc(10*sizeof(int));
    
    while (min<max){
        javob[i] = min;
        
        i++;
        min++;

    }
return javob;
}