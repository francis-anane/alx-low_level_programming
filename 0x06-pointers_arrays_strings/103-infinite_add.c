/**
 * infinite_add - adds two numbers stored as string
 * @n1: first number.
 * @n2: second number.
 * @r: The buffer that the function will use to store the result.
 * @size_r: size of the buffer to store result
 * Return: pointer to the result, or 0 on fail (buffer too small).
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, num, large, digit1, digit2, sum = 0;

	while (n1[len1] != '\0')
		len1++;
	while (n2[len2] != '\0')
		len2++;
	large = len1 >= len2 ? len1 : len2;

	if (size_r <= large + 1)
		return (0); /*not enough storage buffer*/
	r[large + 1] = '\0'; /*Null terminator*/
	len1--, len2--, size_r--;
	digit1 = n1[len1] - '0', digit2 = n2[len2] - '0';
	while (large >= 0)
	{
		num = digit1 + digit2 + sum;
		if (num >= 10)
			sum = num / 10;
		else
			sum = 0;
		if (num > 0)
			r[large] = (num % 10) + '0';
		else
			r[large] = '0';
		if (len1 > 0)
			len1--, digit1 = n1[len1] - '0';
		else
			digit1 = 0;
		if (len2 > 0)
			len2--, digit2 = n2[len2] - '0';
		else
			digit2 = 0;
		large--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
