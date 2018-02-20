/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 13:46:15 by wgourley          #+#    #+#             */
/*   Updated: 2018/02/19 14:25:34 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*copy_str(char *str);
int	str_len(char *str);
char	*ft_struppercase(char *str);
char	to_lower(char e);
char	to_upper(char e);
int	is_alpha(char e);

int	str_len(char *str)
{
	int count;
	
	count = 0;
	while (str[count] != 0)
		count++;
	
	return count;
}

char	*copy_str(char *str)
{
	//putstr("Received string: ");
	//putstr(str);
	//putstr("\n");
	//putstr("Copy length: ");
	//putnbr(str_len(str));
	//putstr("\n");
	char *ret = (char *)malloc(str_len(str));
	
	int index;
	index = 0;
	
	while (str[index] != 0)
	{
		//put_char(str[index]);
		//put_char(' ');
		//putnbr(index);
		//put_char('\n');
		ret[index] = str[index];
		index++;
	}
	ret[index] = 0;
	//putstr("Copied string: ");
	//putstr(ret);
	//put_char('\n');
	return ret;
}

char	*ft_struppercase(char *str)
{
	char *clone;
	int index;
	int first;
	
	index = 0;
	first = 0;
	clone =	str;
	
	while (clone[index] != 0)
	{
		if (is_alpha(clone[index]))
		{
			if (!first){
				clone[index] = to_upper(clone[index]);
				first = 1;
			}
			else
				clone[index] = to_lower(clone[index]);
		}
		else
		{
			first = 0;
			clone[index] = clone[index];
		}
		index++;
	}
	clone[index] = 0;
	return clone;
}

char	to_lower(char e)
{
	if (e >= 'A' && e <= 'Z')
		return (e + 32);
	return (e);
}

char	to_upper(char e)
{
	if (e >= 'a' && e <= 'z')
		return (e - 32);
	return (e);
}
int	is_alpha(char e)
{
	return ((e >= 'A' && e <= 'Z') || 
			(e >= 'a' && e <= 'z'));
}