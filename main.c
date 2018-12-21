#include <stdio.h>
#include <stdlib.h>

int facc=1;
struct person {
    char surname[20];
    int year;
    int fac;
};

int save(char *filename, struct person *st, int n);

int load(char *filename, int facc);

int main() {
    char *filename = "people.dat";
    struct person people[] = {
            "Artur", 1998, 1,
            "Bob", 1999, 2,
            "Kevin", 1980, 1,
            "Kate", 1995, 1,
            "Bill", 1993, 2,
            "Marina", 1998, 3,
            "Irina", 1997, 1,
            "Marge", 1995, 3,
            "Liza", 1993, 2,
            "Mary", 1982, 3
    };
    printf("\nHello!\n---------------------\n Convention:\n 1 - Physic\n 2 - History\n 3 - Mathematics\n---------------------\n Insert faculty:\n\n");

    scanf_s("%d", &facc);
    if((facc>3)||(facc<1)){printf("\nenter correct number!\n");}else{
        int n = sizeof(people) / sizeof(people[0]);
        save(filename, people, n);
        load(filename, facc);
    }
    return 0;
}

// запись в файл массива структур
int save(char *filename, struct person *st, int n) {
    FILE *fp;
    char *c;
    // число записываемых байтов
    int size = n * sizeof(struct person);

    if ((fp = fopen(filename, "wb")) == NULL) {
        perror("Error occurred while opening file");
        return 1;
    }
    // записываем количество структур
    c = (char *) &n;
    for (int i = 0; i < sizeof(int); i++) {
        putc(*c++, fp);
    }
    // посимвольно записываем в файл все структуры
    c = (char *) st;
    for (int i = 0; i < size; i++) {
        putc(*c, fp);
        c++;
    }
    fclose(fp);
    return 0;
}

// загрузка из файла массива структур
int load(char *filename, int facc) {
    FILE *fp;
    char *c;
    int m = sizeof(int);
    int n, i;
    // выделяем память для количества данных
    int *pti = (int *) malloc(m);

    if ((fp = fopen(filename, "r")) == NULL) {
        perror("Error occurred while opening file");
        return 1;
    }
    // считываем количество структур
    c = (char *) pti;
    while (m > 0) {
        i = getc(fp);
        if (i == EOF) break;
        *c = i;
        c++;
        m--;
    }
    //получаем число элементов
    n = *pti;
    // выделяем память для считанного массива структур
    struct person *ptr = (struct person *) malloc(n * sizeof(struct person));
    c = (char *) ptr;
    // после записи считываем посимвольно из файла
    while ((i = getc(fp)) != EOF) {
        *c = i;
        c++;
    }
    // перебор загруженных элементов и вывод на консоль
    printf("#, surname,      year,      fac\n");
    for (int k = 0; k < n; k++) {
        if ((ptr + k)->fac == facc)
            printf("%-2d %-6s %11d %7d\n", k + 1, (ptr + k)->surname, (ptr + k)->year, (ptr + k)->fac);
    }
    free(pti);
    free(ptr);
    fclose(fp);
    return 0;
}