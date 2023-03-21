#include"main.h"

int _islower(int c)
{
	int i = 97;

	while (i <= 122 && i >= 97)
	{
		if (c == i)
			return (1);
	}
	return (0);
}
