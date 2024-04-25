#include "my_mastermind.h"

int command_line_handler(int argc, char **argv, my_mastermind *elem ){
    if(argc == 1) return 1;
    int kiruvchi_matn = 0;
    if(argc == 3 || argc == 5){

        if((kiruvchi_matn = strcmp(argv[1], "-c")) == 0){
            
            strcpy(elem->ans, argv[2]);
          
            if(argc == 5 && (kiruvchi_matn = strcmp(argv[3], "-t")) == 0){

                elem->attempts = atoi(argv[4]);
            
            } else {

                if(kiruvchi_matn) exit(1);
            
            }
               
                
        } else if((kiruvchi_matn = strcmp(argv[1], "-t")) == 0){

            elem->attempts = atoi(argv[2]); 
            
            if(argc == 3) return 1;
            
            if(argc == 5 && (kiruvchi_matn = strcmp(argv[3], "-c")) == 0){
            
               strcpy(elem->ans, argv[4]);

            } else {
                if(kiruvchi_matn) exit(1);
            }
        } else {

             if(kiruvchi_matn) exit(1);
        
        }
    }

    return 0;

}

void read_enter(my_mastermind *elem){
    char olingan;
    int i = 0, raundlar_soni = 0, xato_kiritsa = 0, kiritilgan = 0;
    printf("Will you find the secret code?\n");

    while(elem->attempts > 0){
        if(xato_kiritsa){
            printf("Wrong input!\n");
            xato_kiritsa--;  
        } else {
            printf("---\n");
            printf("ROUND %d\n", raundlar_soni++);
        }
        
        i = 0;
        while((kiritilgan = read(0, &olingan, 1)) > 0){
            if(i == 4 || olingan == '\n'){
                if(i == 4 && olingan != '\n') {
                    while(read(0, &olingan, 1) > 0) if(olingan == '\n') break;
                    xato_kiritsa++;
                }
                if(i < 4) xato_kiritsa++;
                break;  
            } 

            elem->enter[i] = olingan;
            i++;
        }

        if(kiritilgan == 0) exit(0);
        if(xato_kiritsa) continue;
        
        if(check_is_correctly_enter(elem)){
            compare_and_take_results(elem);
            if(elem->is_win){
                printf("Congratz! You did it!");
                return;
            }

        }else{
            xato_kiritsa++;
            continue;
        }
        
        elem->attempts--;
    }
}

int check_is_correctly_enter(my_mastermind *elem){

    for(int i = 0; i < 3; i++){
        for(int j = i+1; j < 4; j++ ){
            if(elem->enter[i] == elem->enter[j]) return 0;
        }
    }
    
    for(int i = 0; i < 4; i++){
       if(elem->enter[i] < '0' || elem->enter[i] > '8') return 0;
    }
    
    return 1;
}


void compare_and_take_results(my_mastermind *elem){
    int well_places = 0;
    int miss_places = 0;
    for(int i = 0; i < 4; i++){
        if(elem->ans[i] == elem->enter[i]) well_places++;
    }

    if(well_places == 4){
        elem->is_win = 1;
        return;
    }

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(j!=i && elem->ans[j] == elem->enter[i]) miss_places++;
        }
    }
    printf("Well placed pieces: %d\nMisplaced pieces: %d\n", well_places, miss_places);
}

void setup_default_params(my_mastermind *elem){
    srand(time(NULL));
    char yangi_sonlar;
    bool qaytuvchi = 0;
    for(int i = 0; i < 4; i++){
        yangi_sonlar = rand()%9 + '0';
        qaytuvchi = 0;
        for(int j = 0; j < i; j++){
            if(elem->ans[j] == yangi_sonlar){
                i--;
                qaytuvchi = 1;
                continue;
            }
        }
        if(!qaytuvchi) elem->ans[i] = yangi_sonlar;
    }
}