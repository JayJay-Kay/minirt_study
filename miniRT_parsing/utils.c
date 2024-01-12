#include "minirt.h"

double	ft_atod(const char *str)
{
	int		i;
	int		sign;
	double	ans;
	int		idx_decimal;

	i = 0;
	sign = 1;
	ans = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
		sign = 1 - 2 * (str[i++] == '-');
	while (str[i] >= '0' && str[i] <= '9')
		ans = ans * 10 + str[i++] - '0';
	if (str[i] != '.')
		return (ans * sign);
	idx_decimal = 10;
	while (str[++i] >= '0' && str[i] <= '9')
	{
		ans = ans + (double)(str[i] - '0') / idx_decimal; //to change int calculation to double calculation
		idx_decimal = idx_decimal * 10;
	}
	return (ans * sign);
}