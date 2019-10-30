#include<fstream>
#include<string>
#include<iostream>

using namespace std;

int main()
{
	int count = 0;
	string line;

	ifstream reader("story.txt");

	if (!reader)
	{
		cout << "Error opening input file";
		return -1;
	}

	while (1)
	{
		getline(reader, line);
		if (reader.eof())
		{
			break;
		}
		else
		{
			if (line[0] == 'a' || line[0] == 'A')
				count++;
		}
	}

	cout << "\n Count of A = " << count;
	reader.close();
	return 0;
}