/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeannin <mjeannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:30:09 by mjeannin          #+#    #+#             */
/*   Updated: 2024/05/15 14:22:12 by mjeannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	char	*str3;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	str3 = (char *)malloc((len_s1 + len_s2 + 1) * sizeof(char));
	if (s1 == NULL || s2 == NULL || str3 == NULL)
		return (NULL);
	ft_memcpy(str3, s1, len_s1);
	ft_memcpy(str3 + len_s1, s2, len_s2 + 1);
	return (str3);
}
/*
int main()
{
	const char	*str1 = "salut les potos";
	const char 	*str2 = "wassup";
	char *dest;

	dest = ft_strjoin(str1, str2);

	printf("%s", dest);
	return (0);
}*/