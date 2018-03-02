#include "mr_math.h"
#include <stdlib.h>
#include "../str_split/str_split.h"
#include "../strs/strs.h"

int (*opperations[6])(int, int) = {&add, &subtract, &multiply, &devide, &mod, &power};

int eval_expr(char *e)
{
  char **symbol_items;
  int index;


  index = 0;
  symbol_items = split(e, "\t \n");
  while (symbol_items[index])
  {
    
  }
}

symbol  *create_symbol(char *e)
{
  symbol  *ret;
  int     value;

  if (!str_to_num(e, 10, &value))
    return ((void*)0);
  ret = (symbol*)malloc(sizeof(ret));
  ret->value = value;
  ret->aski = e;
  ret->next =  0;
  return (ret);
}

opperator *create_opperator(char *e)
{
  int        (*op)(int, int);
  opperator *ret;

  if (!is_opperation_symbol(e[0], op))
    return ((void*)0);
  ret = (opperator *)malloc(sizeof(ret));
  ret->operation = op;
  ret->priority = get_priority(e[0]);
  ret->value = 0;
  ret->next = (struct s_symbol *)0;
  return (ret);
}
