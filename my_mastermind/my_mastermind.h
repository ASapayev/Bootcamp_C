#ifndef MY_MASTERMIND_H
#define MY_MASTERMIND_H
    #include <stdio.h>
    #include <unistd.h>
    #include <time.h>   
    #include <stdlib.h>
    #include <string.h>
    #include <stdbool.h>
    typedef struct Mastermind{
        char ans[4];
        char enter[4];
        int attempts;
        int is_win;
    }my_mastermind;
    int check_is_correctly_enter(my_mastermind *elem);
    void compare_and_take_results(my_mastermind *elem);

    int command_line_handler(int argc, char **argv, my_mastermind *elem );
    void read_enter(my_mastermind *elem);
    void setup_default_params(my_mastermind *elem); 
#endif