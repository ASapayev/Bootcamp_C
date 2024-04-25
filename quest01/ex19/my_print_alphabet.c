/*
#include <stdio.h>

void my_print_alphabet()
{
    printf("abcdefghijklmnopqrstuvwxyz\n");

}
int main(){
    my_print_alphabet();
    return 0;
}*/
void my_print_alphabet() {
  write(1, "abcdefghijklmnopqrstuvwxyz\n",27);
}
