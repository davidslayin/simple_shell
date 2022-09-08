#ifndef SIMPLESHELL_H
#define SIMPLESHELL_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <signal.h>
#include <errno.h>
#include <limits.h>
extern char **environ;
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
char *str;
struct list_s *next;
} env_t;
/* main.c */
int exec(char **input, char *s, int *i, env_t **head);
/* path_finder.c */
char **get_env(char *name, char **env);
char *path_finder(char **s, char **env);
char *get_env_val(char *name, char **env);
/* tokenize.c */
int wordcount(char *str, char delim);
char **_strtok(char *str, char delim);
/* print_funcs.c */
void print_prompt(void);
int _putchar(char c);
void _puts(char *str);
/* print_errors.c */
void print_error(int *i, char *s, char **argv);
void print_error_env(char **argv);
void print_error_exit(int *i, char *s, char **argv);
void print_error_main(char **av);
void print_error_cd(int *i, char *s, char **argv);
/* string_funcs_1.c */
int _strcmp(char *s1, char *s2);
char *str_concat(char *s1, char *s2);
char *_strstr(char *haystack, char *needle);
int _strncmp(char *s1, char *s2, unsigned int n);
char *_strdup(char *str);
/* string_funcs_2.c */
int _strlen(char *s);
char *_strcpy(ch;
#endif
