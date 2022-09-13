/**
 * print_alphabet_x10 - Entry point
 *
 * Description: This program prints the alphabet x10
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char alphabet;
	int count;

	count = 0;
	while (count != 10)
	{
		for (alphabet = 'a'; alphabet = 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
		count++;
	}
}
