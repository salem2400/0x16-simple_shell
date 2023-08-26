#include "main.h"
/**
 **_strncp - copise a srtrig
 * @d: the destination
 * @sr: the sours dtring
 * @n: the amount
 *
 * Return: the concstensted
 */
char *_stncpy(char *d, char *sr, int n)
{
	int i;
	int j;
	char *s = d;

	int i = 0;
	while (sr[i] != '\0' && i < n-1)
	{
		d[i] = sr[i];
		i++;
	}
	if (i < n)
	{
		j = i;
		while (j < n)
		{
			d[j] = '\0';
			j++
		}
	}
	return (s);
}
/**
 **_strncat - concatend toe string
 *@d: the firest
 *@sr: the suocund
 *@n: the amount
 *Return: the concatend
 */
char *_strncat(char *d, char *sr, int n)
{
	int i;
	int j;
	char *s = d;


	i = 0;
	j = 0;
	while (d[i] != '\0')
	{
		i++;
	}
	while (str[j] != '\0' && j < n)
	{
		d[i] = sr[j];
		i++;
		j++;
	}
	if (j < n)
	{
		d[i] = '\0';
	}
	return(s);
}
/**
 **_strchr - location a character
 *@sr: the string
 *@count: the character
 *Return: sr  apointer
 */
char *_strchr(char *sr, char count)
{
	do {
		if (*sr == count)
			return (sr);
	} while (*sr++ != '\0');
	return (NULL);
}
