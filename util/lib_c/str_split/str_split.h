#ifndef STR_SPLIT_H
# define STR_SPLIT_H

int is_a(char e, char *delims);
int find_word(char *sentecnt, char* delims, int *start, int *end, int offset);
char **split(char *str, char *delims);
int	count_words(char *e, char *delims);

#endif
