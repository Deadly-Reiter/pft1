/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonny <jonny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 19:04:03 by jonny             #+#    #+#             */
/*   Updated: 2022/11/18 08:00:57 by jonny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

char    *ft_strjoin(int size, char **strs, char *sep)
{
    int i;
    int j;
    int k;
    int len;
    char *str;

    i = 0;
    j = 0;
    k = 0;
    len = 0;
    while (i < size)
    {
        while (strs[i][j] != '\0')
        {
            j++;
            len++;
        }
        i++;
    }
    i = 0;
    while (sep[i] != '\0')
    {
        i++;
        len++;
    }
    str = (char *)malloc(sizeof(char) * (len + 1));
    i = 0;
    while (i < size)
    {
        j = 0;
        while (strs[i][j] != '\0')
        {
            str[k] = strs[i][j];
            j++;
            k++;
        }
        j = 0;
        while (sep[j] != '\0')
        {
            str[k] = sep[j];
            j++;
            k++;
        }
        i++;
    }
    str[k] = '\0';
    return (str);
}
 int main()
 {
     char *strs[] = {"hello", "world"};
     char *sep = " ,";
     printf("%s", ft_strjoin(2, strs, sep));
     ft_strjoin(2, strs, sep);
     return (0);
 }