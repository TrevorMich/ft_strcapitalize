
#include <unistd.h>
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		j;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;

	j = 0;
	i = 1;

	while (str[i] != '\0')
	{
		if (!((str[j] >= 'a' && str[j] <= 'z')
				|| (str[j] >= 'A' && str[j] <= 'Z')
				|| (str[j] >= '0' && str[j] <= '9')))
		{
			if ((str[i] >= 'a') && (str[i] <= 'z'))
				str[i] -= 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
		j++;
	}
	return (str);
}
	

int		main()
{
	char	str[] = "mY nAmE iS isRaEl 42wolfsburg";
	ft_strcapitalize(str);
	printf("%s\n", str);
	return (0);
}