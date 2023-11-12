/**
 * hash_djb2- implemantation of the djb2 algorithm
 *
 * @str: the string passed
 *
 * Return: djb2 value of the string
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int value = 5381;

	while (*str)
	{
		value = (value * 33) + *str;
		str++;
	}

	return (value);
}
