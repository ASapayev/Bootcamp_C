int my_putchar(char c) {
  return write(1, &c, 1);
}

int		my_putstr(char *str)
{
  while (*str != '\0')
    {
      my_putchar(*str);
      str++;
    }
  return (1);
}
