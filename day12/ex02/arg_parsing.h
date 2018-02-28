#ifndef ARG_PARSING_H
# define ARG_PARSING_H

typedef	struct	s_arg_flag
{
	int		expected_params;
	char	**param_data;
	char	*flag;
}				t_arg_flag;


t_arg_flag	create_flag(int expected_params, char *flag);
char		**sanitize_args(int argc, char **args, t_arg_flag e);

#endif