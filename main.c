#include <stdio.h>
#include <conio.h>
#include <string.h>

struct student {
    char surname;
    int year;
    char fac;
};

int main() {
    printf("Hello, World!\n");
    struct student st1;
    st1.surname = 'I';
    st1.year = 1998;
    st1.fac = 'p';

    struct student st2;
    st2.surname = 'P';
    st2.year = 1999;
    st2.fac = 'h';

    struct student st3;
    st3.surname = 'S';
    st3.year = 1980;
    st3.fac = 'p';

    struct student st4;
    st4.surname = 'B';
    st4.year = 1995;
    st4.fac = 'p';

    struct student st5;
    st5.surname = 'S';
    st5.year = 1993;
    st5.fac = 'h';

    struct student st6;
    st6.surname = 'B';
    st6.year = 1998;
    st6.fac = 'm';

    struct student st7;
    st7.surname = 'O';
    st7.year = 1997;
    st7.fac = 'p';

    struct student st8;
    st8.surname = 'K';
    st8.year = 1995;
    st8.fac = 'm';

    struct student st9;
    st9.surname = 'G';
    st9.year = 1993;
    st9.fac = 'h';

    struct student st10;
    st10.surname = 'B';
    st10.year = 1982;
    st10.fac = 'm';
    return 0;
}