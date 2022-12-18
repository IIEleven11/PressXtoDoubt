#include <iostream>
#include <string>
using namespace std;



int main()
{
    string ans;
    int y;
	
    cout << "Hi, Press x to doubt" << endl;
	cin >> ans;   
	
	if (ans == "x" || ans == "X")
	{
		for (int ans = 5; ans >= 4; ans++)
			if (ans > 3)
			{
				cout << "X" << endl;
			}
	}
	else
	{

		cout << "Sorry try again. follow instructions, idiot." << endl;
	}
	return main();
	
    return 0;
	
}
