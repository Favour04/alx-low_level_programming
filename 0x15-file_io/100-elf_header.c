#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <elf.h>
#include <fcntl.h>
#include <string.h>

void error_exit(const char* msg) {
    fprintf(stderr, "Error: %s\n", msg);
    exit(98);
}

void print_hex(const unsigned char* buf, size_t len)
{
	size_t i;

    for (i = 0; i < len; i++) {
        printf("%02x ", buf[i]);
    }
    printf("\n");
}}
