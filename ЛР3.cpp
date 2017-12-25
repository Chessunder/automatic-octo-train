#define _CRT_SECURE_NO_WARNINGS

#include <string>
#include <fstream>
#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	
	cout << "hiiii";

	int i, k=0, n, j=0;
	FILE *F1, *F2;
	char line[256];
	char newline[] = "\n";
	char symbol[] = "A";

	F1 = fopen("F1.txt", "w");
	F2 = fopen("F2.txt", "w");

	
	for (i = 0; i < 10; i++)
	{
		gets_s(line);
		fputs(line, F1);
		fputs(newline, F1);

		for (int i = 0; i < strlen(line); i++)
		{
			if (isdigit(line[i]))
			{
				k++;
			}
		}

		if (k == 0)
		{
			fputs(line, F2);
			fputs(newline, F2);

			if (strncmp(line,symbol,1)==0)
			{
				j++;
			}
		}

		k = 0;
		
	}	

	fclose(F1);
	fputs(newline, F2);
	fprintf(F2, "Êîë-âî ñòðîê íà÷èíàþùèõñÿ íà áóêâó À: %d", j);
	fclose(F2);

}




