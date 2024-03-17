/*
** EPITECH PROJECT, 2023
** iajsoji
** File description:
** oaijsoiajs
*/

#include <unistd.h>
#include <string.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>

#ifndef MY_H
    #define MY_H

struct attributs {
    int dieze;
    int tiret;
    char *espaces;
    char *plus_sign;
    int zero;
    int affi;
};

int getnbr(char const *);
int pstr(char const *, int );
int strl(char const *);
double pw(int nb ,int p);
char *revstr(char *str);
int str_isalpha(char const *str);
int str_islower(char const *str);
int my_str_isnum(char const *str);
int my_str_isupper(char const *str);
char *my_strcapitalize(char *str);
int my_strcmp(char const *s1, char const *s2);
char *my_strcpy(char *dest, char const *src);
char *my_strlowcase(char *str);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strstr(char *str, char const *to_find);
char *my_strupcase(char *str);
char *my_strcat(char *dest, char const *src);
char *my_strdup(char const *src);
char *my_strncat(char *dest, char const *src, int nb);
void pchar(char c);
int strl(char const *str);
int pnbr(int nb);
void pcharc(char c, int *compteur);
int pnbrc(int nb, int *compteur);
int pstrc(char const *str, int *compteur);

char *my_put_void(char *s);

int ai(int *a, int *i);

int assert_b(va_list list, char c, int *compteur, struct attributs **attr);

char *conv_to_bin(long long a);

int get_affi(struct attributs **attr,
    const char *restrict format, int *compteur, int *a);

int check_i(int *a, int *i);

int my_put_double3(double *nb, char **str, int *len, int affi);

int my_put_double2(double *nb, char **str, int *len, int affi);

int def_i(int *a, struct attributs **attr);

int reset_attr(struct attributs **attr);

char *my_justify_text(char *str);

int assert_tiret(va_list list, char c, int *compteur, struct attributs **attr);

int strl(char const *str);

int assert_c(va_list list, char c, int *compteur, struct attributs **attr);

int assert_s(va_list list, char c, int *compteur, struct attributs **attr);

int assert_di(va_list list, char c, int *compteur, struct attributs **attr);

int assert_pourcent(va_list list, char c, int *compt, struct attributs **attr);

int assert_o(va_list list, char c, int *compteur, struct attributs **attr);

int assert_dieze(va_list list, char c, int *compteur, struct attributs **attr);

int assert_x(va_list list, char c, int *compteur, struct attributs **attr);

int assert_xx(va_list list, char c, int *compteur, struct attributs **attr);

int assert_u(va_list list, char c, int *compteur, struct attributs **attr);

int assert_p(va_list list, char c, int *compteur, struct attributs **attr);

int assert_cc(va_list list, char c, int *compteur, struct attributs **attr);

int assert_e(va_list list, char c, int *compteur, struct attributs **attr);

int assert_espace(va_list list,
    char c, int *compteur, struct attributs **attr);

int asrt_n(va_list list, char c, int *compteur, struct attributs **attr);

int asrt_f(va_list list, char c, int *compteur, struct attributs **attr);

int assert_plus(va_list list, char c, int *compteur, struct attributs **attr);

char *my_revstr(char *str);

char *conv_to_oct(long long a);

char *conv_to_hex(long long a);

char *conv_to_hexx(long long a);

int strl(char const *str);

int my_intlen(long long i);

int my_doublelen(double num);

char *adr_hex(void *paddress);

int set_espaces(struct attributs **attr,
    const char *restrict format, int *compteur, int *a);

int mini_printf(const char *format, ...);

char *my_int_to_char(long long a);

char *my_int_to_char1(long long a);

char *my_put_double(double nb, int affi);

char *my_put_float(double nb, int affi);

void my_putchar(char c, int *compteur);

void my_putstr(char const *str, int *compteur);

int my_put_long(long long nb, int *compteur);

int my_put_nbr(int nb, int *compteur);

int my_put_unbr(unsigned int nb, int *compteur);

double power(double *nb, int p);

double power_nb(double nb, int p);

char *my_strrevcat(char *a, char *b);

int my_isnum(char c);

int my_isodd(int i);

int my_getnbr(char const *str);

char *my_revstr(char *str);

int my_printf(const char *restrict format, ...);

int print_zero(struct attributs **attr);

char *my_strcat(char *dest, char const *src);

char *my_strcat2(char *dest, char const *src);

#endif /* FONCTION BASIQUE */