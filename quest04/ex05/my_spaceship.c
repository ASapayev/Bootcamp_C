#define DIRECTION_UP "up"
#define DIRECTION_DOWN "down"
#define DIRECTION_LEFT "left"
#define DIRECTION_RIGHT "right"

struct position {
 int x, y;
 const char* direction;
};

void move(struct position* pos, char c) {
 switch (c) {
 case 'R':
 if (strcmp(pos->direction, DIRECTION_UP) == 0) {
 pos->direction = DIRECTION_RIGHT;
 } else if (strcmp(pos->direction, DIRECTION_RIGHT) == 0) {
 pos->direction = DIRECTION_DOWN;
 } else if (strcmp(pos->direction, DIRECTION_DOWN) == 0) {
 pos->direction = DIRECTION_LEFT;
 } else if (strcmp(pos->direction, DIRECTION_LEFT) == 0) {
 pos->direction = DIRECTION_UP;
 }
 break;
 case 'L':
 if (strcmp(pos->direction, DIRECTION_UP) == 0) {
 pos->direction = DIRECTION_LEFT;
 } else if (strcmp(pos->direction, DIRECTION_LEFT) == 0) {
 pos->direction = DIRECTION_DOWN;
 } else if (strcmp(pos->direction, DIRECTION_DOWN) == 0) {
 pos->direction = DIRECTION_RIGHT;
 } else if (strcmp(pos->direction, DIRECTION_RIGHT) == 0) {
 pos->direction = DIRECTION_UP;
 }
 break;
 case 'A':
 if (strcmp(pos->direction, DIRECTION_UP) == 0) {
 pos->y++;
 } else if (strcmp(pos->direction, DIRECTION_LEFT) == 0) {
 pos->x--;
 } else if (strcmp(pos->direction, DIRECTION_DOWN) == 0) {
 pos->y--;
 } else if (strcmp(pos->direction, DIRECTION_RIGHT) == 0) {
 pos->x++;
 }
 break;
 default:
 printf("Invalid input character: %d\n", (int)c);
 }
}

char* my_spaceship(const char* flight_path) {
 struct position pos = {0, 0, DIRECTION_UP};
 for (int i = 0; i < strlen(flight_path); i++) {
 move(&pos, flight_path[i]);
 }
 char* result = malloc(50);
 sprintf(result, "{x: %d, y: %d, direction: '%s'}", pos.x, -pos.y, pos.direction);
 return result;
}

/*//Input: "RAALALL"
//Return Value: "{x: 2, y: -1, direction: 'down'}"
//#ifndef STRUCT_STRING_ARRAY
//#define STRUCT_STRING_ARRAY
typedef struct boshlangich
{
    int x;
    int y;
    char yonalish;
} nol;
//#endif
 
char* my_spaceship(char* param_1)
{   nol *joyi; 
    joyi = (nol*)malloc(10*sizeof(char));
    char jj [7] = "";
    char yunalish [4]= "urdl";
    joyi->x = 0;
    joyi->y = 0;
    joyi->yonalish = yunalish[0];
    int x=0, y=0, a=0, b=0;
while (param_1[a]!='\0'){
    if (param_1[a]=='R'){
        joyi->yonalish = yunalish[b+1];
        b++;}
    else if (param_1[a]=='L'){
        joyi->yonalish = yunalish[b-1];
        b--;
    }
    else if (param_1[a]=='A'){
        if (joyi->yonalish == yunalish[0]) joyi->y++;
        if (joyi->yonalish == yunalish[1]) joyi->x++;
        if (joyi->yonalish == yunalish[2]) joyi->y--;
        if (joyi->yonalish == yunalish[3]) joyi->x--;      
    }
    a++;
}
printf("x: %d, y: %d, direction: '%c'", joyi->x, -joyi->y, joyi->yonalish);
return 0;
}*/