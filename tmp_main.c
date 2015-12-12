/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdefasqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/26 12:10:53 by mdefasqu          #+#    #+#             */
/*   Updated: 2015/03/26 16:10:55 by mdefasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfts.h"
#include <stdio.h>
#include <string.h>

int		main(void)
{
	if (ft_isdigit('1') == 1)
		printf("is digit : ok\n");
	else
		printf("is digit : ko\n");
	if (ft_isalpha('1') == 1)
		printf("is alpha : ok\n");
	else
		printf("is alpha : ko\n");
	if (ft_isalnum('\\') == 1)
		printf("is alnum : ok\n");
	else
		printf("is alnum : ko\n");

    printf("========= TEST ft_bzero =========\n");
    char test[] = "salut";
    int i;
    printf("\033[36mString test = salut\n");
    for (i = 0; i < 5; i++){
        printf("%d-", test[i]);
    }
    printf("\ncalling ft_bzero(void *, size_t)\n");
    ft_bzero(test, 5);
    for (i = 0; i < 5; i++)
        printf("%d-", test[i]);
    printf("\ncalling bzero(void *, size_t)\n");
    bzero(test, 5);
    for (i = 0; i < 5; i++){
        printf("%d-", test[i]);
        if (test[i] == 0)
            printf("\033[32mOK-\033[36m");
        else
            printf("\033[32mKO-\033[36m");
    }
    printf("\n\033[33m========= end ft_bzero =========\n\n");
	return (0);
}
