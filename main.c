#include <stdio.h>
#include <conio.h>
#include <string.h>

struct student {
    char surname;
    int year;
    char fac;
};
int x;

int main() {
    printf("hello, User!\n");
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
    printf("---------------------\n Convention:\n 1 - Physic\n 2 - History\n 3 - Mathematics\n---------------------\n Insert faculty:\n");
    scanf_s("%d", &x);
    switch (x) {
        case 1:
            printf("st1 surname is %c\n", st1.surname);
            printf("st1 year of birth is %d\n", st1.year);
            printf("st1 faculty is %c\n", st1.fac);
            printf("---------------------\n");
            printf("st3 surname is %c\n", st3.surname);
            printf("st3 year of birth is %d\n", st3.year);
            printf("st3 faculty is %c\n", st3.fac);
            printf("---------------------\n");
            printf("st4 surname is %c\n", st4.surname);
            printf("st4 year of birth is %d\n", st4.year);
            printf("st4 faculty is %c\n", st4.fac);
            printf("---------------------\n");
            printf("st7 surname is %c\n", st7.surname);
            printf("st7 year of birth is %d\n", st7.year);
            printf("st7 faculty is %c\n", st7.fac);
            break;
        case 2:
            printf("st2 surname is %c\n", st2.surname);
            printf("st2 year of birth is %d\n", st2.year);
            printf("st2 faculty is %c\n", st2.fac);
            printf("---------------------\n");
            printf("st5 surname is %c\n", st5.surname);
            printf("st5 year of birth is %d\n", st5.year);
            printf("st5 faculty is %c\n", st5.fac);
            printf("---------------------\n");
            printf("st9 surname is %c\n", st9.surname);
            printf("st9 year of birth is %d\n", st9.year);
            printf("st9 faculty is %c\n", st9.fac);
            break;
        case 3:
            printf("st6 surname is %c\n", st6.surname);
            printf("st6 year of birth is %d\n", st6.year);
            printf("st6 faculty is %c\n", st6.fac);
            printf("---------------------\n");
            printf("st8 surname is %c\n", st8.surname);
            printf("st8 year of birth is %d\n", st8.year);
            printf("st8 faculty is %c\n", st8.fac);
            printf("---------------------\n");
            printf("st10 surname is %c\n", st10.surname);
            printf("st10 year of birth is %d\n", st10.year);
            printf("st10 faculty is %c\n", st10.fac);
            break;
        default:
            printf("There is no such value!\n");
    }
    return 0;
}