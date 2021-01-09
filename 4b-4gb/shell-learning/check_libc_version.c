/*******
 *Time      : 2021/01/09 13:56
 *Author    : Julius Lee
 *File      : check_libc_version.c
 *DevTool   : Vim
*******/

#include <stdio.h>
#include <gnu/libc-version.h>

int main(void) {
    puts(gnu_get_libc_version());
    return 0;
}
