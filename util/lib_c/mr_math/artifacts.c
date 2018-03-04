#include "mr_math.h"
#include "../strs/strs.h"
#include <stdlib.h>
artifact	*create_artifact(char *askii)
{
	artifact *ret;
	
	ret = malloc(sizeof(artifact));
	ret->type = (a_type)(is_char_in_str(askii[0], OPPERATION_SYMBOLS, 0) >= 0);
	ret->askii = askii;
	ret->next = 0;
	return (ret);
}

artifact	*linkify(int count, char **e)
{
	int index;
	artifact *current;
	artifact *last;
	
	index = 0;
	last = 0;
	while (index < count)
	{
		current = create_artifact(e[index]);
		if (last)
			current->next = last;
		last = current;
		index++;
	}
	
	return (current);
}

void	replace_artifacts(artifact *start, int len, artifact *with)
{
	artifact *end;
	
	end = free_artifacts(start->next, len);
	start->next = with;
	with->next = end;
}

/* returns the last unlinked artifact */
artifact	*free_artifacts(artifact *free, int limit)
{
	artifact *hold;
	if (limit == 0)
		hold = free->next;
	else
		hold = free_artifacts(free->next, limit - 1);
	return hold;
}