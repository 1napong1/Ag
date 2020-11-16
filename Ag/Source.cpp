#include <stdio.h>
#include <iostream>
#include <string>

struct a
{
	std::string name[5];
	int point[5];
};

void aaa()
{
	struct a p1;
	int min=9999, max=-9999;
	int nummin = 0,nummax=0;
	for (int i = 0;i < 5;i++)
	{
		std::cin >> p1.name[i] >> p1.point[i];
		if (i < 5)
		{
			if (p1.point[i]>max)
			{
				max = p1.point[i];
				nummax = i;
			}
			else 
			{
				min = p1.point[i];
				nummin = i;
			}
		}
		
	}
	std::cout << "The highest score is "<< p1.name[nummax] << " " << p1.point[nummax] << " points"<< std::endl;
	std::cout << "The lowest score is "<< p1.name[nummin] << " " << p1.point[nummin] << " points";
}


int main()
{
	aaa();
	return 0;
}
