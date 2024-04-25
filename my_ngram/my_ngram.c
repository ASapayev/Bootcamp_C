#include <stdio.h>
#include <string.h>
void count_chars(const char* str) {
 int counts[256] = {0};
 
 // Count the occurrences of each character
 for (const char* p = str; *p != '\0'; p++) {
 counts[(int)*p]++;
 }
 
 // Print the counts in alphanumerical order
 for (int i = 0; i < 256; i++) {
 if (counts[i] != 0) {
 char c = (char)i;
 printf("%c:%d\n", c, counts[i]);
 }
 }
}

int main(int argc, char** argv) {
 // Process each input string
 for (int i = 1; i < argc; i++) {
 count_chars(argv[i]);
 }
 
 return 0;
}