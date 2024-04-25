
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int my_strlen(char *str)
{
    int len = 0;
    while (str[len] != '\0')
    {
        len++;
    }
    return len;
}

void my_itoa(int n, char *str)
{
    int i = 0;
    int sign = 0;
    if (n < 0)
    {
        sign = 1;
        n = -n;
    }
    do
    {
        str[i++] = n % 10 + '0';
        n /= 10;
    } while (n > 0);
    if (sign)
    {
        str[i++] = '-';
    }
    str[i] = '\0';
    int j = 0;
    for (j = 0; j < i / 2; j++)
    {
        char temp = str[j];
        str[j] = str[i - 1 - j];
        str[i - 1 - j] = temp;
    }
}

void my_xtoa(unsigned int n, char *str, int uppercase)
{
    const char *digits = uppercase ? "0123456789ABCDEF" : "0123456789abcdef";
    int i = 0;
    do
    {
        str[i++] = digits[n % 16];
        n /= 16;
    } while (n > 0);
    str[i] = '\0';
    int j = 0;
    for (j = 0; j < i / 2; j++)
    {
        char temp = str[j];
        str[j] = str[i - 1 - j];
        str[i - 1 - j] = temp;
    }
}
void my_otoa(unsigned int n, char *str, int uppercase)
{
    const char *digits = uppercase ? "0123456789ABCDEF" : "0123456789abcdef";
    int i = 0;
    do
    {
        str[i++] = digits[n % 8];
        n /= 8;
    } while (n > 0);
    str[i] = '\0';
    int j = 0;
    for (j = 0; j < i / 2; j++)
    {
        char temp = str[j];
        str[j] = str[i - 1 - j];
        str[i - 1 - j] = temp;
    }
}
void my_ptoa(void* p, char* str)
{
    const char* digits = "0123456789abcdef";
    unsigned long n = (unsigned long)p;
    int i = 0;
    do
    {
        str[i++] = digits[n % 16];
        n /= 16;
    } while (n > 0);
    str[i] = '\0';
    int j = 0;
    for (j = 0; j < i / 2; j++)
    {
        char temp = str[j];
        str[j] = str[i - 1 - j];
        str[i - 1 - j] = temp;
    }
}



int my_printf(const char *fmt, ...)
{
    va_list args;
    int count = 0;
    va_start(args, fmt);
    while (*fmt != '\0')
    {
        if (*fmt == '%')
        {
            fmt++;
            char buf[32];
            switch (*fmt)
            {
                case 'd':
                {
                    int n = va_arg(args, int);
                    my_itoa(n, buf);
                    write(STDOUT_FILENO, buf, my_strlen(buf));
                    count += my_strlen(buf);
                    break;
                }
                case 'o':
                {
                    unsigned int n = va_arg(args, unsigned int);
                    my_otoa(n, buf, 0);
                    write(STDOUT_FILENO, buf, my_strlen(buf));
                    count += my_strlen(buf);
                    break;
                }
                case 'u':
                {
                    unsigned int n = va_arg(args, unsigned int);
                    my_itoa(n, buf);
                    write(STDOUT_FILENO, buf, my_strlen(buf));
                    count += my_strlen(buf);
                    break;
                }
                case 'x':
                {
                    unsigned int n = va_arg(args, unsigned int);
                    my_xtoa(n, buf, 1);
                    write(STDOUT_FILENO, buf, my_strlen(buf));
                    count += my_strlen(buf);
                    break;
                }
                case 'c':
                {
                    char c = va_arg(args, int);
                    write(STDOUT_FILENO, &c, 1);
                    count++;
                    break;
                }
                /*case 's':
                {
                    char *s = va_arg(args, char*);
                    write(STDOUT_FILENO, s, my_strlen(s));
                    count += my_strlen(s);
                    break;
                }*/
                case 's':
{
 char *s = va_arg(args, char*);
 if (s == NULL)
 {
 write(STDOUT_FILENO, "(null)", 6);
 count += 6;
 }
 else
 {
 write(STDOUT_FILENO, s, my_strlen(s));
 count += my_strlen(s);
 }
 break;
}
                case 'p':
                {
                    void* p = va_arg(args, void*);
                    my_ptoa(p, buf);
                    write(STDOUT_FILENO, "0x", 2);
                    write(STDOUT_FILENO, buf, my_strlen(buf));
                    count += 2 + my_strlen(buf);
                    break;
                }
            }
        }
        else
        {
            write(STDOUT_FILENO, fmt, 1);
            count++;
        }
        fmt++;
    }
    va_end(args);
    return count;
}
/*
int main() {
    int a = 15;

    printf("   %d\n", my_printf("Hello world!\n"));
    printf("    %d\n", my_printf("%c!\n", 'H'));
    printf("    %d\n", my_printf("%c%c%c%c%c!\n", 'H', 'e', 'l', 'l', 'o'));
    printf("    %d\n", my_printf("Hello %s!\n", "QWASAR.IO"));
    printf("    %d\n", my_printf("Hello %s %s!\n", "Mr", "Gaetan"));
    printf("    %d\n", my_printf("NULL STRING %s!\n", (char*)NULL));
    printf("    %d\n", my_printf("%d!\n", 1337));
    printf("    %d\n", my_printf("%d - %d - %d!\n", 2048, 0, -1337));
    printf("    %d\n", my_printf("%o!\n", 100));
    printf("    %d\n", my_printf("%u!\n", 1337));
    printf("    %d\n", my_printf("%x!\n", 14));
    printf("    %d\n", my_printf("%p!\n",&a));
    printf("    %d\n", printf("%p!\n",&a));


return 0;}
*/