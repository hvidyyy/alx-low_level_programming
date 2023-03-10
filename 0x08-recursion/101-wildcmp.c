/**
 * wildcmp - compares two strings and returns 1 if they can be considered
 * identical, otherwise returns 0.
 *
 * @s1: the first string to compare
 * @s2: the second string to compare, can contain the special character '*'
 *      which can replace any string (including an empty string)
 *
 * Return: 1 if the strings can be considered identical, otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '\0')
			return (1);
		else if (*s1 == '\0')
			return (0);
		else
			return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	}
	else if (*s1 == '\0')
	{
		if (*s2 == '\0')
			return (1);
		else
			return (0);
	}
	else if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	else
		return (0);
}

