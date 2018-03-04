/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_split.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/03 10:21:29 by wgourley          #+#    #+#             */
/*   Updated: 2018/03/04 16:12:15 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STR_SPLIT_H
# define STR_SPLIT_H

int		is_a(char e, char *delims);
int		find_word(char *sentecnt, char *delims, int *bounds);
int		find_item(char *sentecnt, char *word, int *start, int *end);
char	**split(char *str, char *delims);
int		count_words(char *e, char *delims);
char	*sub_str(char *sentence, int stat, int end);
char	*slice_block(char *sentence, char start, char end);
char	*trim(char *subj, int off_start, int off_end);
char	*replace(char *h, char *n, char *sum);
int		first_index_of(char *str, char find, int offset);
int		last_index_of(char *str, char find, int offset);
int		block_bounds(char *subj, char *limiters, int *start, int *end);

#endif
