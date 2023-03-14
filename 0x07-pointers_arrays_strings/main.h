#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stddef.h>

int _strlen(char *c);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy();
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
#endif /* MAIN_H */
