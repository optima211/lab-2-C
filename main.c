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
    st1.surname = 'Ivanov';
    st1.year = 1998;
    st1.fac = 'phusic';

    struct student st2;
    st2.surname = 'Petrov';
    st2.year = 1999;
    st2.fac = 'history';

    struct student st3;
    st3.surname = 'Sidorov';
    st3.year = 1980;
    st3.fac = 'phusic';

    struct student st4;
    st4.surname = 'Bashkov';
    st4.year = 1995;
    st4.fac = 'phusic';

    struct student st5;
    st5.surname = 'Skripchenko';
    st5.year = 1993;
    st5.fac = 'history';

    struct student st6;
    st6.surname = 'Baranov';
    st6.year = 1998;
    st6.fac = 'mathematic';

    struct student st7;
    st7.surname = 'Obolencev';
    st7.year = 1997;
    st7.fac = 'phusic';

    struct student st8;
    st8.surname = 'Kuznecov';
    st8.year = 1995;
    st8.fac = 'mathematic';

    struct student st9;
    st8.surname = 'Gusev';
    st8.year = 1993;
    st8.fac = 'history';

    struct student st10;
    st8.surname = 'Bittirov';
    st8.year = 1982;
    st8.fac = 'mathematic';
    return 0;
}