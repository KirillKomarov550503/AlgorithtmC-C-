
char * InputString()
{
	char * string;
	char *temp = (char*)malloc(1 * sizeof(char));
	temp[0] = '\0';
	
	char symbol;
	int j;
	int i = 2;
	do
	{
		string = (char*)malloc(i * sizeof(char));
		string[i - 1] = '\0';
		j = 0;
		while (temp[j] != '\0')
		{
			string[j] = temp[j];
			j++;
		}
		symbol = _getch();
		putchar(symbol);
		string[i - 2] = symbol;
		temp = (char*)malloc(i * sizeof(char));
		temp[i - 1] = '\0';
		j = 0;
		while (string[j] != '\0')
		{
			temp[j] = string[j];
			j++;
		}
		
		i++;
	} while (symbol != 13);
	return string;
}
