char* my_upcase(char* matn){
    int i=0, farq;
    char javob[30];
        while (matn[i]!= '\0'){
        farq = 32;
        if (matn[i] >= 'a' && matn[i] <= 'z'){
            //printf("%c", matn[i]-farq);
            matn[i] = matn[i]-farq;
        }//else{
        //printf("%c", matn[i]);


        i++;
    }
    //printf("\n%s", matn);
    return matn;
}