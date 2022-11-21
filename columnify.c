/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   columnify.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <znichola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 13:29:17 by znichola          #+#    #+#             */
/*   Updated: 2022/08/22 13:29:17 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// #define SPACES_IN_TAB 4

int	max_word_len(char **list, int len)
{
	int	n = 0;
	for (int i = 0; i < len; i++)
	{
		int	l = strlen(list[i]);
		if (l > n)
			n = l;
	}
	return (n);
}

int	main(int ac, char **av)
{
	int	total_width = atoi(av[1]);
	int	word_width = max_word_len(av + 2, ac - 2);
	int	words_to_line = (total_width+1) / (word_width+1);
	printf("total width:		%d\nlongest word:		%d\n", total_width, word_width);
	printf("words to a line:	%d\n", (total_width+1) / (word_width+1));
	for (int i = 2; i < ac; i++)
	{
		int filler_spaces = word_width - strlen(av[i]);
		printf("%s", av[i]);
		// if (filler_spaces == 0)
		// 	printf(" ");
		if ((i - 1) % words_to_line == 0)
		{
			for (int j = 0; j < filler_spaces + 1; j++)
				printf(" ");
			printf("\\\n");
		}
		else
		{
			for (int j = 0; j < filler_spaces + 1; j++)
				printf(" ");
			// printf("\t");
			// for (int j = 0; j < filler_spaces - 1; j+=SPACES_IN_TAB)
			// 	printf("\t");
		}
	}
	printf("\n");
	return (0);
}