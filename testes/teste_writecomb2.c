#include <unistd.h>

int main(void)
{
	int	a = 0;
	int	b = a + 1;
	char	c;

	while(a <= 98)
	{
		while(b <= 99)
		{
			c = '0' + a / 10;
			write(1, &c, 1);
			c = '0' + a % 10;
			write(1, &c, 1);
			c = ' ';
			write(1, &c, 1);
			c = '0' + b / 10;
			write(1, &c, 1);
			c = '0' + b % 10;
			write(1, &c, 1);
			if(!(a == 98 && b == 99))
			{
				c = ',';
				write(1, &c, 1);
				c = ' ';
				write(1, &c, 1);
			}
			b++;
		}
	a++;
	b = a + 1;
	}
}
