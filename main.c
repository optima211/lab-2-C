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
    st1.surname = 'A';
    st1.year = 1998;
    st1.fac = 'p';

    struct student st2;
    st2.surname = 'B';
    st2.year = 1999;
    st2.fac = 'h';

    struct student st3;
    st3.surname = 'C';
    st3.year = 1980;
    st3.fac = 'p';

    struct student st4;
    st4.surname = 'D';
    st4.year = 1995;
    st4.fac = 'p';

    struct student st5;
    st5.surname = 'E';
    st5.year = 1993;
    st5.fac = 'h';

    struct student st6;
    st6.surname = 'F';
    st6.year = 1998;
    st6.fac = 'm';

    struct student st7;
    st7.surname = 'G';
    st7.year = 1997;
    st7.fac = 'p';

    struct student st8;
    st8.surname = 'H';
    st8.year = 1995;
    st8.fac = 'm';

    struct student st9;
    st9.surname = 'I';
    st9.year = 1993;
    st9.fac = 'h';

    struct student st10;
    st10.surname = 'G';
    st10.year = 1982;
    st10.fac = 'm';

    printf("st1 faculty is %c\n", st1.surname);
    printf("st1 surname is %d\n", st1.year);
    printf("st1 faculty is %c\n", st1.fac);
    return 0;
}