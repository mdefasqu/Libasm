/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdezitte <mdezitte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/16 15:43:28 by mdezitte          #+#    #+#             */
/*   Updated: 2015/03/28 20:14:01 by chtison          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfts.h"
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <ctype.h>

void		ft_putchar(char c)
{
	write (1, &c, 1);
}

int main (int argc, char **av)
{

	printf("=============== Main de test by me ===============\n\n");
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

	printf("========= TEST ft_strcat =========\033[36m\n");
	char dst[20] = "coucou ";
	char src2[8] = "ca va ?";
	char dst2[20] = "coucou ";
	char src[8] = "ca va ?";
	char dst3[40] = "Le test le plus dur ";
	char dst4[40] = "Le test le plus dur ";
	char src3[19] = "du monde .. ou pas";
	char src4[19] = "du monde .. ou pas";
	char dst5[] = "Hello";
	char dst6[] = "Hello";
	char *ptr1;
	char *ptr2;
	int	ret;
	strcat(dst2, src2);
	printf("strcat : %s\n", dst2);
	ft_strcat(dst, src);
	printf("ft_strcat : %s\n", dst);
	if (strcmp(dst, dst2) == 0)
		printf("\033[32mOK\033[36m\n");
	else
		printf("\033[33mKO\033[36m\n");
	strcat(dst3, src3);
	printf("strcat : %s\n", dst3);
	ft_strcat(dst4, src4);
	printf("ft_strcat : %s\n", dst4);
	if (strcmp(dst, dst2) == 0)
		printf("\033[32mOK\033[36m\n");
	else
		printf("\033[33mKO\033[36m\n");
	ptr1 = strcat(dst5, "");
	printf("strcat : \"%s\"\n", dst5);
	ptr2 = ft_strcat(dst6, "");
	printf("ft_strcat : \"%s\"\n", dst6);
	if ((ret = strcmp(ptr1, ptr2)) == 0)
		printf("\033[32mOK\033[36m\n");
	else
		printf("\033[33mKO\033[36m\n");
	printf("RET : %d\n", ret);
	printf("\033[33m========= end ft_strcat =========\n\n");
	printf("========= TEST ft_strcmp =========\033[36m\n");
	char	vv[4] = "lol";
	char	ww[4] = "lol";
	printf("s1 = %s\ns2 = %s\ns3 = %s\ns4 = %s\n", src, dst, dst3, src3);
	printf("vv = %s\nww = %s\n", vv, ww);
	printf("resultat de cmp src<->dst = %d\n", strcmp(src, dst));
	printf("resultat de cmp src3<->dst3 = %d\n", strcmp(src3, dst3));
	printf("resultat de cmp vv<->ww = %d\n", strcmp(vv, ww));
	printf("\033[33m========= end ft_strcmp =========\n\n");
	printf("========= TEST ft_putstr =========\033[36m\n");
	char	as[4] = "Lut";
	char	bs[8] = "c'est un";
	char	cs[12] = "bonus vraim";
	char	ds[16] = "ent cool non ???";
	printf("as = %s\nbs = %s\ncs = %s\nds = %s\n", as, bs, cs, ds);
	ft_putstr(as);
	ft_putchar('\n');
	ft_putstr(bs);
	ft_putchar('\n');
	ft_putstr(cs);
	ft_putchar('\n');
	ft_putstr(ds);
	ft_putchar('\n');
	printf("\033[33m========= end ft_putstr =========\n\n");

	printf("========= TEST ft_isalpha =========\033[36m\n\n");
	int		c;
	int		d;
	int		e;
	int		f;
	int		g;

	g = 130;
	c = 50;
	d = 100;
	e = 32;
	f = 68;
	printf("c = 2(50)\nd = d(100)\ne = space(32)\nf = D(68)\ng = 130(130)\n");
	printf("isalpha(c) = %d\n", isalpha(c));	
	printf("ft_isalpha(c) = %d\n", ft_isalpha(c));
	if (isalpha(c) == ft_isalpha(c))
		printf("\033[32mOK\033[36m\n");
	else
		printf("\033[33mKO\033[36m\n");
	printf("isalpha(d) = %d\n", isalpha(d));	
	printf("ft_isalpha(d) = %d\n", ft_isalpha(d));
	if (isalpha(d) == ft_isalpha(d))
		printf("\033[32mOK\033[36m\n");
	else
		printf("\033[33mKO\033[36m\n");
	printf("isalpha(e) = %d\n", isalpha(e));	
	printf("ft_isalpha(e) = %d\n", ft_isalpha(e));
	if (isalpha(e) == ft_isalpha(e))
		printf("\033[32mOK\033[36m\n");
	else
		printf("\033[33mKO\033[36m\n");
	printf("isalpha(f) = %d\n", isalpha(f));	
	printf("ft_isalpha(f) = %d\n", ft_isalpha(f));
	if (isalpha(f) == ft_isalpha(f))
		printf("\033[32mOK\033[36m\n");
	else
		printf("\033[33mKO\033[36m\n");
	printf("isalpha(g) = %d\n", isalpha(g));	
	printf("ft_isalpha(g) = %d\n", ft_isalpha(g));
	if (isalpha(g) == ft_isalpha(g))
		printf("\033[32mOK\033[36m\n");
	else
		printf("\033[33mKO\033[36m\n");
	printf("\033[33m========= end ft_isalpha =========\n\n");
	printf("========= TEST ft_isdigit =========\033[36m\n");
	printf("c = 2(50)\nd = d(100)\ne = space(32)\nf = D(68)\ng = 130(130)\n");
	printf("isdigit(c) = %d\n", isdigit(c));
	printf("ft_isdigit(c) = %d\n", ft_isdigit(c));
	if (isdigit(c) == ft_isdigit(c))
		printf("\033[32mOK\033[36m\n");
	else
		printf("\033[33mKO\033[36m\n");
	printf("isdigit(d) = %d\n", isdigit(d));
	printf("ft_isdigit(d) = %d\n", ft_isdigit(d));
	if (isdigit(d) == ft_isdigit(d))
		printf("\033[32mOK\033[36m\n");
	else
		printf("\033[33mKO\033[36m\n");
	printf("isdigit(e) = %d\n", isdigit(e));
	printf("ft_isdigit(e) = %d\n", ft_isdigit(e));
	if (isdigit(e) == ft_isdigit(e))
		printf("\033[32mOK\033[36m\n");
	else
		printf("\033[33mKO\033[36m\n");
	printf("isdigit(f) = %d\n", isdigit(f));
	printf("ft_isdigit(f) = %d\n", ft_isdigit(f));
	if (isdigit(f) == ft_isdigit(f))
		printf("\033[32mOK\033[36m\n");
	else
		printf("\033[33mKO\033[36m\n");
	printf("isdigit(g) = %d\n", isdigit(g));
	printf("ft_isdigit(g) = %d\n", ft_isdigit(g));
	if (isdigit(g) == ft_isdigit(g))
		printf("\033[32mOK\033[36m\n");
	else
		printf("\033[33mKO\033[36m\n");
	printf("\033[33m========= end ft_isdigit =========\n\n");
	printf("========= TEST ft_isalnum =========\033[36m\n");
	printf("c = 2(50)\nd = d(100)\ne = space(32)\nf = D(68)\ng = 130(130)\n");
	printf("isalnum(c) = %d\n", isalnum(c));
	printf("ft_isalnum(c) = %d\n", ft_isalnum(c));
	if (isalnum(c) == ft_isalnum(c))
		printf("\033[32mOK\033[36m\n");
	else
		printf("\033[33mKO\033[36m\n");
	printf("isalnum(d) = %d\n", isalnum(d));
	printf("ft_isalnum(d) = %d\n", ft_isalnum(d));
	if (isalnum(d) == ft_isalnum(d))
		printf("\033[32mOK\033[36m\n");
	else
		printf("\033[33mKO\033[36m\n");
	printf("isalnum(e) = %d\n", isalnum(e));
	printf("ft_isalnum(e) = %d\n", ft_isalnum(e));
	if (isalnum(e) == ft_isalnum(e))
		printf("\033[32mOK\033[36m\n");
	else
		printf("\033[33mKO\033[36m\n");
	printf("isalnum(f) = %d\n", isalnum(f));
	printf("ft_isalnum(f) = %d\n", ft_isalnum(f));
	if (isalnum(f) == ft_isalnum(f))
		printf("\033[32mOK\033[36m\n");
	else
		printf("\033[33mKO\033[36m\n");
	printf("isalnum(g) = %d\n", isalnum(g));
	printf("ft_isalnum(g) = %d\n", ft_isalnum(g));
	if (isalnum(g) == ft_isalnum(g))
		printf("\033[32mOK\033[36m\n");
	else
		printf("\033[33mKO\033[36m\n");
	printf("\033[33m========= end ft_isalnum =========\n\n");

	printf("========= TEST ft_isascii =========\033[36m\n");
	printf("c = 2(50)\nd = d(100)\ne = space(32)\nf = D(68)\ng = 130(130)\n");
	printf("isascii(c) = %d\n", isascii(c));
	printf("ft_isascii(c) = %d\n", ft_isascii(c));
	if (isascii(c) == ft_isascii(c))
		printf("\033[32mOK\033[36m\n");
	else
		printf("\033[33mKO\033[36m\n");
	printf("isascii(d) = %d\n", isascii(d));
	printf("ft_isascii(d) = %d\n", ft_isascii(d));
	if (isascii(d) == ft_isascii(d))
		printf("\033[32mOK\033[36m\n");
	else
		printf("\033[33mKO\033[36m\n");
	printf("isascii(e) = %d\n", isascii(e));
	printf("ft_isascii(e) = %d\n", ft_isascii(e));
	if (isascii(e) == ft_isascii(e))
		printf("\033[32mOK\033[36m\n");
	else
		printf("\033[33mKO\033[36m\n");
	printf("isascii(f) = %d\n", isascii(f));
	printf("ft_isascii(f) = %d\n", ft_isascii(f));
	if (isascii(f) == ft_isascii(f))
		printf("\033[32mOK\033[36m\n");
	else
		printf("\033[33mKO\033[36m\n");
	printf("isascii(g) = %d\n", isascii(g));
	printf("ft_isascii(g) = %d\n", ft_isascii(g));
	if (isascii(g) == ft_isascii(g))
		printf("\033[32mOK\033[36m\n");
	else
		printf("\033[33mKO\033[36m\n");
	printf("\033[33m========= end ft_isascii =========\n\n");

	printf("========= TEST ft_isprint =========\033[36m\n");
	printf("c = 2(50)\nd = d(100)\ne = space(32)\nf = D(68)\ng = 130(130)\n");
	printf("isprint(c) = %d\n", isprint(c));
	printf("ft_isprint(c) = %d\n", ft_isprint(c));
	if (isprint(c) == ft_isprint(c))
		printf("\033[32mOK\033[36m\n");
	else
		printf("\033[33mKO\033[36m\n");
	printf("isprint(d) = %d\n", isprint(d));
	printf("ft_isprint(d) = %d\n", ft_isprint(d));
	if (isprint(d) == ft_isprint(d))
		printf("\033[32mOK\033[36m\n");
	else
		printf("\033[33mKO\033[36m\n");
	printf("isprint(e) = %d\n", isprint(e));
	printf("ft_isprint(e) = %d\n", ft_isprint(e));
	if (isprint(e) == ft_isprint(e))
		printf("\033[32mOK\033[36m\n");
	else
		printf("\033[33mKO\033[36m\n");
	printf("isprint(f) = %d\n", isprint(f));
	printf("ft_isprint(f) = %d\n", ft_isprint(f));
	if (isprint(f) == ft_isprint(f))
		printf("\033[32mOK\033[36m\n");
	else
		printf("\033[33mKO\033[36m\n");
	printf("isprint(g) = %d\n", isprint(g));
	printf("ft_isprint(g) = %d\n", ft_isprint(g));
	if (isprint(g) == ft_isprint(g))
		printf("\033[32mOK\033[36m\n");
	else
		printf("\033[33mKO\033[36m\n");
	printf("\033[33m========= end ft_isprint =========\n\n");

	printf("========= TEST ft_isblank =========\033[36m\n");
	printf("c = 2(50)\nd = d(100)\ne = space(32)\nf = D(68)\ng = 130(130)\n");
	printf("isblank(c) = %d\n", isblank(c));
	printf("ft_isbank(c) = %d\n", ft_isblank(c));
	if (isspace(c) == ft_isblank(c))
		printf("\033[32mOK\033[36m\n");
	else
		printf("\033[33mKO\033[36m\n");
	printf("isblank(d) = %d\n", isblank(d));
	printf("ft_isblank(d) = %d\n", ft_isblank(d));
	if (isspace(d) == ft_isblank(d))
		printf("\033[32mOK\033[36m\n");
	else
		printf("\033[33mKO\033[36m\n");
	printf("isblank(e) = %d\n", isblank(e));
	printf("ft_isblank(e) = %d\n", ft_isblank(e));
	if (isspace(e) == ft_isblank(e))
		printf("\033[32mOK\033[36m\n");
	else
		printf("\033[33mKO\033[36m\n");
	printf("isblank(f) = %d\n", isblank(f));
	printf("ft_isblank(f) = %d\n", ft_isblank(f));
	if (isblank(f) == ft_isblank(f))
		printf("\033[32mOK\033[36m\n");
	else
		printf("\033[33mKO\033[36m\n");
	printf("isblank(g) = %d\n", isblank(g));
	printf("ft_isblank(g) = %d\n", ft_isblank(g));
	if (isspace(g) == ft_isblank(g))
		printf("\033[32mOK\033[36m\n");
	else
		printf("\033[33mKO\033[36m\n");

	printf("isspace('tab') = %d\n", isspace(9));
	printf("ft_isspace('tab') = %d\n", ft_isspace(9));
	if (isspace(9) == ft_isspace(9))
		printf("\033[32mOK\033[36m\n");
	else
		printf("\033[33mKO\033[36m\n");
	printf("\033[33m========= end ft_isblank =========\n\n");

	printf("========= TEST ft_isspace =========\033[36m\n");
	printf("c = 2(50)\nd = d(100)\ne = space(32)\nf = D(68)\ng = '\\v'\n");
	printf("isspace(c) = %d\n", isspace(c));
	printf("ft_isspace(c) = %d\n", ft_isspace(c));
	if (isspace(c) == ft_isspace(c))
		printf("\033[32mOK\033[36m\n");
	else
		printf("\033[33mKO\033[36m\n");
	printf("isspace(d) = %d\n", isspace(d));
	printf("ft_isspace(d) = %d\n", ft_isspace(d));
	if (isspace(d) == ft_isspace(d))
		printf("\033[32mOK\033[36m\n");
	else
		printf("\033[33mKO\033[36m\n");
	printf("isspace(e) = %d\n", isspace(e));
	printf("ft_isspace(e) = %d\n", ft_isspace(e));
	if (isspace(e) == ft_isspace(e))
		printf("\033[32mOK\033[36m\n");
	else
		printf("\033[33mKO\033[36m\n");
	printf("isspace(f) = %d\n", isspace(f));
	printf("ft_isspace(f) = %d\n", ft_isspace(f));
	if (isspace(f) == ft_isspace(f))
		printf("\033[32mOK\033[36m\n");
	else
		printf("\033[33mKO\033[36m\n");
	printf("isspace('\\v') = %d\n", isspace('\v'));
	printf("ft_isspace('\\v') = %d\n", ft_isspace('\v'));
	if (isspace('\v') == ft_isspace('\v'))
		printf("\033[32mOK\033[36m\n");
	else
		printf("\033[33mKO\033[36m\n");
	printf("isspace('tab') = %d\n", isspace(9));
	printf("ft_isspace('tab') = %d\n", ft_isspace(9));
	if (isspace(9) == ft_isspace(9))
		printf("\033[32mOK\033[36m\n");
	else
		printf("\033[33mKO\033[36m\n");

	printf("isspace('enter') = %d\n", isspace(13));
	printf("ft_isspace('enter') = %d\n", ft_isspace(13));
	if (isspace(13) == ft_isspace(13))
		printf("\033[32mOK\033[36m\n");
	else
		printf("\033[33mKO\033[36m\n");



	printf("\033[33m========= end ft_isspace =========\n\n");

	printf("========= TEST ft_islower =========\033[36m\n");
	printf("c = 2(50)\nd = d(100)\ne = space(32)\nf = D(68)\ng = 130(130)\n");
	printf("islower(c) = %d\n", islower(c));
	printf("ft_islower(c) = %d\n", ft_islower(c));
	if (islower(c) == ft_islower(c))
		printf("\033[32mOK\033[36m\n");
	else
		printf("\033[33mKO\033[36m\n");
	printf("islower(d) = %d\n", islower(d));
	printf("ft_islower(d) = %d\n", ft_islower(d));
	if (islower(d) == ft_islower(d))
		printf("\033[32mOK\033[36m\n");
	else
		printf("\033[33mKO\033[36m\n");
	printf("islower(e) = %d\n", islower(e));
	printf("ft_islower(e) = %d\n", ft_islower(e));
	if (islower(e) == ft_islower(e))
		printf("\033[32mOK\033[36m\n");
	else
		printf("\033[33mKO\033[36m\n");
	printf("islower(f) = %d\n", islower(f));
	printf("ft_islower(f) = %d\n", ft_islower(f));
	if (islower(f) == ft_islower(f))
		printf("\033[32mOK\033[36m\n");
	else
		printf("\033[33mKO\033[36m\n");
	printf("islower(g) = %d\n", islower(g));
	printf("ft_islower(g) = %d\n", ft_islower(g));
	if (islower(g) == ft_islower(g))
		printf("\033[32mOK\033[36m\n");
	else
		printf("\033[33mKO\033[36m\n");
	printf("\033[33m========= end ft_islower =========\n\n");
	printf("========= TEST ft_isupper =========\033[36m\n");
	printf("c = 2(50)\nd = d(100)\ne = space(32)\nf = D(68)\ng = 130(130)\n");
	printf("isupper(c) = %d\n", isupper(c));
	printf("ft_isupper(c) = %d\n", ft_isupper(c));
	if (isupper(c) == ft_isupper(c))
		printf("\033[32mOK\033[36m\n");
	else
		printf("\033[33mKO\033[36m\n");
	printf("isupper(d) = %d\n", isupper(d));
	printf("ft_isupper(d) = %d\n", ft_isupper(d));
	if (isupper(d) == ft_isupper(d))
		printf("\033[32mOK\033[36m\n");
	else
		printf("\033[33mKO\033[36m\n");
	printf("isupper(e) = %d\n", isupper(e));
	printf("ft_isupper(e) = %d\n", ft_isupper(e));
	if (isupper(e) == ft_isupper(e))
		printf("\033[32mOK\033[36m\n");
	else
		printf("\033[33mKO\033[36m\n");
	printf("isupper(f) = %d\n", isupper(f));
	printf("ft_isupper(f) = %d\n", ft_isupper(f));
	if (isupper(f) == ft_isupper(f))
		printf("\033[32mOK\033[36m\n");
	else
		printf("\033[33mKO\033[36m\n");
	printf("isupper(g) = %d\n", isupper(g));
	printf("ft_isupper(g) = %d\n", ft_isupper(g));
	if (isupper(g) == ft_isupper(g))
		printf("\033[32mOK\033[36m\n");
	else
		printf("\033[33mKO\033[36m\n");
	printf("\033[33m========= end ft_isupper =========\n\n");

	printf("========= TEST ft_tolower =========\033[36m\n");
	printf("c = 2(50)\nd = d(100)\ne = space(32)\nf = D(68)\ng = 130(130)\n");
	printf("tolower(c) = %d\n", tolower(c));
	printf("ft_tolower(c) = %d\n", ft_tolower(c));
	if (tolower(c) == ft_tolower(c))
		printf("\033[32mOK\033[36m\n");
	else
		printf("\033[33mKO\033[36m\n");
	printf("tolower(d) = %d\n", tolower(d));
	printf("ft_tolower(d) = %d\n", ft_tolower(d));
	if (tolower(d) == ft_tolower(d))
		printf("\033[32mOK\033[36m\n");
	else
		printf("\033[33mKO\033[36m\n");
	printf("tolower(e) = %d\n", tolower(e));
	printf("ft_tolower(e) = %d\n", ft_tolower(e));
	if (tolower(e) == ft_tolower(e))
		printf("\033[32mOK\033[36m\n");
	else
		printf("\033[33mKO\033[36m\n");
	printf("tolower(f) = %d\n", tolower(f));
	printf("ft_tolower(f) = %d\n", ft_tolower(f));
	if (tolower(f) == ft_tolower(f))
		printf("\033[32mOK\033[36m\n");
	else
		printf("\033[33mKO\033[36m\n");
	printf("tolower(g) = %d\n", tolower(g));
	printf("ft_tolower(g) = %d\n", ft_tolower(g));
	if (tolower(g) == ft_tolower(g))
		printf("\033[32mOK\033[36m\n");
	else
		printf("\033[33mKO\033[36m\n");
	printf("\033[33m========= end ft_tolower =========\n\n");

	printf("========= TEST ft_toupper =========\033[36m\n");
	printf("c = 2(50)\nd = d(100)\ne = space(32)\nf = D(68)\ng = 130(130)\n");
	g = 130;
	c = 50;
	d = 100;
	e = 32;
	f = 68;
	printf("toupper(c) = %d\n", toupper(c));
	printf("ft_toupper(c) = %d\n", ft_toupper(c));
	if (toupper(c) == ft_toupper(c))
		printf("\033[32mOK\033[36m\n");
	else
		printf("\033[33mKO\033[36m\n");
	printf("toupper(d) = %d\n", toupper(d));
	printf("ft_toupper(d) = %d\n", ft_toupper(d));
	if (toupper(d) == ft_toupper(d))
		printf("\033[32mOK\033[36m\n");
	else
		printf("\033[33mKO\033[36m\n");
	printf("toupper(e) = %d\n", toupper(e));
	printf("ft_toupper(e) = %d\n", ft_toupper(e));
	if (toupper(e) == ft_toupper(e))
		printf("\033[32mOK\033[36m\n");
	else
		printf("\033[33mKO\033[36m\n");
	printf("toupper(f) = %d\n", toupper(f));
	printf("ft_toupper(f) = %d\n", ft_toupper(f));
	if (toupper(f) == ft_toupper(f))
		printf("\033[32mOK\033[36m\n");
	else
		printf("\033[33mKO\033[36m\n");
	printf("toupper(g) = %d\n", toupper(g));
	printf("ft_toupper(g) = %d\n", ft_toupper(g));
	if (toupper(g) == ft_toupper(g))
		printf("\033[32mOK\033[36m\n");
	else
		printf("\033[33mKO\033[36m\n");
	printf("\033[33m========= end ft_toupper =========\n");

	printf("========= TEST ft_puts =========\033[36m\n");
	char	*aa;
	char	*bb;
	char	*cc;
	char	*dd;

	aa = "Coucou";
	bb = "Ce test est un peu plus long";
	cc = "";
	dd = NULL;
	printf("puts(aa) = %d\n", puts(aa));
	printf("ft_puts(aa) = %d\n",ft_puts(aa));

	printf("puts(bb) = %d\n", puts(bb));
	printf("ft_puts(bb) = %d\n", ft_puts(bb));

	printf("puts(cc) = %d\n", puts(cc));
	printf("ft_puts(cc) = %d\n", ft_puts(cc));

	printf("puts(dd) = %d\n", puts(dd));
	printf("ft_puts(dd) = %d\n", ft_puts(dd));

	printf("\033[33m========= end ft_puts =========\n\n");

	printf("========= TEST ft_strlen =========\033[36m\n");
	char	*a;
	char	*b;
	char	*z;
	char	*y;

	a = "Coucou";
	b = "Ce test est un peu plus long";
	z = "";
	y = "ur iwergberigu berifwebgero hgberwof iuburweoeqwi berwoui gbwe";
	printf("strlen(a) = %lu\n", strlen(a));
	printf("ft_strlen(a) = %zu\n", ft_strlen(a));
	if (strlen(a) == ft_strlen(a))
		printf("\033[32mOK\033[36m\n");
	else
		printf("\033[33mKO\033[36m\n");
	printf("strlen(b) = %lu\n", strlen(b));
	printf("ft_strlen(b) = %zu\n", ft_strlen(b));
	if (strlen(b) == ft_strlen(b))
		printf("\033[32mOK\033[36m\n");
	else
		printf("\033[33mKO\033[36m\n");
	printf("strlen(z) = %lu\n", strlen(z));
	printf("ft_strlen(z) = %zu\n", ft_strlen(z));
	if (strlen(z) == ft_strlen(z))
		printf("\033[32mOK\033[36m\n");
	else
		printf("\033[33mKO\033[36m\n");
	printf("strlen(y) = %lu\n", strlen(y));
	printf("ft_strlen(y) = %zu\n", ft_strlen(y));
	if (strlen(y) == ft_strlen(y))
		printf("\033[32mOK\033[36m\n");
	else
		printf("\033[33mKO\033[36m\n");
	printf("\033[33m========= end ft_strlen =========\n\n");
	printf("========= TEST ft_memset =========\033[36m\n");
	char eee[19] = "je mange des chips";
	char ee[19] = "je mange des chips";
	char fff[7] = "coucou";
	char ff[7] = "coucou";
	char ggg[46] = "je dois ecrire une longue chaine de caractere";
	char gg[46] = "je dois ecrire une longue chaine de caractere";
	char hhh[17] = "je suis trop cool";
	char hh[17] = "je suis trop cool";
	
	printf("eee = %s\nee = %s\nchar = *(int 42) && int = 5\n", eee, ee);
	memset(eee, 42, 5);
	printf("memset(eee) = %s\n", eee);
	ft_memset(ee, 42, 5);
	printf("ft_memset(ee) = %s\n", ee);
	printf("fff = %s\nff = %s\nchar = *(int 42) && int = 3\n", fff, ff);
	memset(fff, 42, 3);
	printf("memset(fff) = %s\n", fff);
	ft_memset(ff, 42, 3);
	printf("ft_memset(ff) = %s\n", ff);
	printf("ggg = %s\ngg = %s\nchar = *(int 42) && int = 26\n", ggg, gg);
	memset(ggg, 42, 26);
	printf("memset(ggg) = %s\n", ggg);
	ft_memset(gg, 42, 26);
	printf("ft_memset(gg) = %s\n", gg);
	printf("hhh = %s\nhh = %s\nchar = *(int 42) && int = 8\n", hhh, hh);
	memset(hhh, 42, 8);
	printf("memset(hhh) = %s\n", hhh);
	ft_memset(hh, 42, 8);
	printf("ft_memset(hh) = %s\n", hh);
	printf("\033[33m========= end ft_memset =========\n\n");
	printf("========= TEST ft_memcpy =========\033[36m\n");
	char	o[14] = "Salut je vais"; 
	char	i2[15] = "partir bientot";
	char	p[34] = "en Avion au USA pendant 1 semaine";
	char	oo[23]  = "Je vais partir bientot";
	char	ooo[23] = "Je vais partir bientot";
	char	ii[24] = "bientot partir en avion";	
	char	iii[24] = "bientot partir en avion";	
	char	pp[47] = "Pendant toute la semaine je vais loupper 1 exam";
	char	ppp[47] = "Pendant toute la semaine je vais loupper 1 exam";
	int		size;

	size = 8;
	printf("o = %s\noo = %s\n", o, oo);
	memcpy(oo, o, size);
	printf("memcpy(oo, o) = %s\n", oo);
	ft_memcpy(ooo, o, size);
	printf("ft_memcpy(ooo, o) = %s\n", ooo);
	printf("i2 = %s\nii = %s\n", i2, ii);
	memcpy(ii, i2, size);
	printf("memcpy(ii, i2) = %s\n", ii);
	ft_memcpy(iii, i2, size);
	printf("ft_memcpy(iii, i2) = %s\n", iii);
	printf("p = %s\npp = %s\n", p, pp);
	memcpy(pp, p, size);
	printf("memcpy(pp, p) = %s\n", pp);
	ft_memcpy(ppp, p, size);
	printf("ft_memcpy(ppp, p) = %s\n", ppp);
	printf("\033[33m========= end ft_memcpy =========\n\n");
	printf("========= TEST ft_strdup =========\033[36m\n");
	char str1[19] = "je mange des chips";
	char str2[28] = "mais j'aime bien les crepes";
	char str3[40] = "mais bon... les pizzas c'est bon aussi";

	printf("str1 = %s\n", str1);
	printf("strdup(str1) = %s\n", strdup(str1));
	printf("ft_strdup(str1) = %s\n", ft_strdup(str1));
	printf("str2 = %s\n", str2);
	printf("strdup(str2) = %s\n", strdup(str2));
	printf("ft_strdup(str2) = %s\n", ft_strdup(str2));
	printf("str3 = %s\n", str3);
	printf("strdup(str3) = %s\n", strdup(str3));
	printf("ft_strdup(str3) = %s\n", ft_strdup(str3));
	printf("\033[33m========= end ft_strdup =========\n\n");
	printf("========= TEST ft_cat =========\033[36m\n");

	int		fd;
	printf("\nTest 1 Affichage du fichier ft_isalnum.s\n\n");
	fd = open("ft_isalnum.s", O_RDONLY);
	ft_cat(fd);
	close(fd);
	printf("\n\033[32mTest 2 fd = 0 write plz\n\n");
	ft_cat(0);
	printf("=== end ft_cat ===\n");

	return (0);
}
