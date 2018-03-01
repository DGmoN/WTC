#include <stdlib.h>
#include "str_split.h"
#include "../strs/strs.h"
int is_a(char e, char *delims)
{
  int index;

  index = 0;
  while (delims[index])
  {
    if (delims[index] == e)
    {
      return (1);
    }
    index++;
  }
  return (0);
}

int find_word(char *sentecnt, char* delims, int *start, int *end, int offset)
{
  int index;
  int seeking;

  index = offset;
  *start = index;
  seeking = 0;
  while (sentecnt[index])
  {
    if (is_a(sentecnt[index], delims))
    {
      if (seeking)
      {
        *end = index;
        return (1);
      }
      *start = index;
    }
    else
    {
      if(!seeking)
      {
        seeking = 1;
        *start = index;
      }
    }
    index++;
  }
  return (0);
}

char *slice(char *str, int start, int end)
{
  char  *ret;
  int   index;

  index = start;
  ret = malloc(sizeof(char *) * (end - start));
  while (index < end)
  {
    ret[index - start] = str[index];
    index++;
  }
  return (ret);
}

char **split(char *str, char *delims)
{
  int   start;
  int   end;
  char  **ret;
  int   index;

  ret = malloc((count_words(str, delims) + 1) * sizeof(char**));
  index = 0;
  start = 0;
  end = 0;
  while (find_word(str, delims, &start, &end, end))
  {
    ret[index++] = slice(str, start, end);
  }
  ret[index] = slice(str, end, str_len(str));
  return (ret);
}

int	count_words(char *e, char *delims)
{
	int index;
	int count;
	int reading;

	index = 0;
	count = 0;
	while (e[index])
	{
		if (is_a(e[index], delims))
		{
			if (reading)
				count++;
			reading = 0;
		}
		else
			reading = 1;
		index++;
	}
	if (index > 0)
		return (count + 1);
	return (count);
}
