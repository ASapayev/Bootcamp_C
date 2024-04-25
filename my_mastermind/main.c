#include "my_mastermind.h"

int main(int argc, char **argv){
    my_mastermind game;
    game.is_win = 0;
    game.attempts = 10;

    if(command_line_handler(argc, argv, &game)){
        printf("Please enter a valid guess\n");
        setup_default_params(&game);
    }
    
    read_enter(&game);


    return 0;
}