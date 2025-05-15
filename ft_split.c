/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarrues <scarrues@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 17:15:03 by scarrues          #+#    #+#             */
/*   Updated: 2025/05/05 17:15:03 by scarrues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static void	ft_split_free(char **arr, size_t n)
{
	while (n > 0)
	{
		free(arr[n - 1]);
		n--;
	}
	free(arr);
}

static size_t	ft_split_num_c(char const *s, char c)
{
	size_t	num_c;
	size_t	ind;
	size_t	new_word;

	num_c = 0;
	ind = 0;
	new_word = 1;
	while (s[ind])
	{
		if (s[ind] != c && new_word)
		{
			new_word = 0;
			num_c++;
		}
		else if (s[ind] == c)
			new_word = 1;
		ind++;
	}
	return (num_c);
}

static char	**ft_split_aux(char	**arr_ptr, char const *s, char c)
{
	size_t	ind;
	size_t	num_str;
	size_t	start_str;

	ind = 0;
	num_str = 0;
	start_str = 0;
	while (s[ind])
	{
		if (s[ind] != c && ((ind == 0) || (s[ind - 1] == c)))
			start_str = ind;
		if (s[ind] != c && (s[ind + 1] == '\0' || s[ind + 1] == c))
		{
			arr_ptr[num_str] = ft_substr(s, start_str, (ind - start_str + 1));
			if (!arr_ptr[num_str])
			{
				ft_split_free(arr_ptr, num_str);
				return (NULL);
			}
			num_str++;
		}
		ind++;
	}
	arr_ptr[num_str] = NULL;
	return(arr_ptr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr_ptr;

	if (!s)
		return (NULL);
	arr_ptr = (char **) malloc((ft_split_num_c(s, c) + 1) * sizeof(char *));
	if (!arr_ptr)
		return (NULL);
	return (ft_split_aux(arr_ptr, s, c));
}
