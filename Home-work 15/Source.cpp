#include <iostream>
#include <clocale>
#include <fstream>
#include <cstdlib>
#include <cctype>
#include <iomanip>
#include <Windows.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//2
	/*
	Дан текстовый файл. 
	Зашифровать его, используя шифр Цезаря. Результат записать в другой файл.
	*/
	/*char buff[50] = { 0 };

	cout << "Введите сообщение,которое будет закодированно" << endl;
	cin.getline(buff, 50);

	for (int i = 0; i < strlen(buff); i++)
		buff[i] += 3;
	cout << buff << endl;

	cout << "Decode: " << endl;
	for (int i = 0; i < strlen(buff); i++)
		buff[i] -= 3;
	cout << buff << endl;*/
	//1
	/*char buf[300];
	char letters[62]={'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'w', 'v', 'x', 'y', 'z',
	  'B', 'C', 'D', 'F', 'G', 'H', 'J', 'K', 'L', 'M', 'N', 'P', 'Q', 'R', 'S', 'T', 'V', 'W', 'X', 'Y', 'Z', 
	  'a','o','e','u','i','A','O','E','U','I',
	  '1','2','3','4','5','6','7','8','9','0'};
	int line=0;
	int symbol=0;
	int glas=0;
	int sogl=0;
	int digit=0;
	bool chek=false;
	FILE* file;

	file=fopen("read.txt", "r");

	if (file)
	{
	  while (!feof (file))
	  {
	      fgets (buf, 300, file); 
	      line++; 

	      for (int i=0; i<strlen (buf); i++)
	      {
	          chek=false;

	          for (int j=0; j<62; j++)
	          {
	              if (buf[i]==letters[j])
	              {
	                  if (j<42)
	                      sogl++;
	                  if (j>41 && j<52)
	                      glas++;
	                  if (j>51)
	                      digit++;
	                  chek=true;
	              }
	          }
	          if (chek==false)
	              symbol++;
	      }
	  }
	}
	fclose (file);*/

	system("pause");
	return 0;
}