#include "libft.h"

int main()
{
	int i = 0;
	char const	s[]	= "   HolaMundo en Ca";
	char	c = ' ';
	char	**result;

	result = ft_split(s, c);
	while (result[i])
	{
		printf("%s\n", result[i]);
		i++;
	}
	free (result);
	return (0);
}


/* int main(void)
{
	char s1[] = ",i ,i , i, ii, a,, b, c, d, e,f ,";
	char set[] = ",i";


	printf("%s\n", ft_strtrim(s1,set));
	return (0);
}
 */