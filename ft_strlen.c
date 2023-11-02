
int	main()
{
	char*	str;
	str = "josip";
	int i = 0;

	while (str[i] != 0)
	{
		i++;
	}
	
	write (1, &i, 5);
	return (0);
}