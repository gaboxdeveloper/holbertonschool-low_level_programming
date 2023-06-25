/**
 * _strcat - concatenates two strings/appends src string to dest string
 * @src: input source string to append to dest
 *
 * @dest: input destination string to append to
 *
 * Return: pointer to resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
