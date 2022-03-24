#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>

int main(void)
{
	int dateMass[8];
	char ConsoleString[26] = { '0' };
	
	for (int thirdNumber = 0; thirdNumber < 2; thirdNumber++)
	{
		dateMass[2] = thirdNumber;
		for (int fourthNumber = 1; fourthNumber <= 9; fourthNumber++)
		{
			if (thirdNumber == 1 && fourthNumber > 2)
				break;
			dateMass[3] = fourthNumber;
			for (int firstNumber = 0; firstNumber <= 3; firstNumber++)
			{
				dateMass[0] = firstNumber;
				for (int secondNumber = 1; secondNumber <= 9; secondNumber++)
				{
					if (firstNumber == 3 && secondNumber > 1)
						break;
				    dateMass[1] = secondNumber;

					dateMass[4] = 1; dateMass[5] = 9; dateMass[6] = 9; dateMass[7] = 1; //const

					
					ConsoleString[0] = '7'; ConsoleString[1] = 'z'; ConsoleString[2] = ' '; ConsoleString[3] = 'e'; ConsoleString[4] = ' '; ConsoleString[5] = '-'; ConsoleString[6] = 'p'; //const

					for (int i = 0; i <= 7; i++)
						ConsoleString[i + 7] = dateMass[i] + '0';

					ConsoleString[15] = ' '; ConsoleString[16] = 's'; ConsoleString[17] = 'e'; ConsoleString[18] = 'c'; ConsoleString[19] = 'r'; ConsoleString[20] = 'e'; ConsoleString[21] = 't'; ConsoleString[22] = '.'; ConsoleString[23] = '7'; ConsoleString[24] = 'z'; ConsoleString[25] = '\0'; //const
					for (int i = 0; i < 26; i++)
					{
						printf_s("%c", ConsoleString[i]);
					}
					printf_s("\n");
					/*if (!system(ConsoleString))
					{
						printf_s("Your password: ");
						for (int i = 0; i < 8; i++)
							printf_s("%d", dateMass[i]);
						exit(11);
					}*/
						
				}
			}
		}
	}
}