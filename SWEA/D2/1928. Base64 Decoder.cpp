#include <iostream>
#include <cstring>
using namespace std;

char decoding(char temp)
{
	if (48 <= temp && temp <= 57)	// '0' ~ '9'
	{
		temp = temp - '0' + 52;
	}
	else if (65 <= temp && temp <= 90)	// 'A' ~ 'Z'
	{
		temp = temp - 'A';
	}
	else if (97 <= temp && temp <= 122)	// 'a' ~ 'z'
	{
		temp = temp - 'a' + 26;
	}
	else if (temp == '+')
	{
		temp = 62;
	}
	else
	{	
		temp = 63;
	}
	return temp;
}

void convert(char* encoded, char* decoded)
{
	int dataArray[4]{ 0, };
	for (int i = 0; i < 4; i++)
		dataArray[i] = decoding(encoded[i]);
	decoded[0] = (char)((dataArray[0] << 2) + (dataArray[1] >> 4));
	decoded[1] = (char)((dataArray[1] << 4) + (dataArray[2] >> 2));
	decoded[2] = (char)((dataArray[2] << 6) + (dataArray[3]));
}

int main(void)
{
	int T;
	cin >> T;

	for (int tc = 1; tc <= T; tc++)
	{
		char input[100001];
		cin >> input;

		char* pointer = input;
		int length = strlen(input);

		cout << "#" << tc << " ";
		for (int i = 0; i < length / 4; i++)
		{
			char read[4]{ 0, };
			convert(pointer, read);
			cout << read;
			pointer += 4;
		}
		cout << endl;
	}

	return 0;
}