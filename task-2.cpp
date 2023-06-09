
#include <iostream>
using namespace std;

// Returns true if s is a number else false
bool isNumber(string s)
{
	for (int i = 0; i < s.length(); i++)
    {
        if (isdigit(s[i]) == false)
        {
            return false;
        }
        return true;
    }

}

// Driver code
int main()
{
	// Saving the input in a string
	string str;

	cout<<"ENTER KEYWORD: ";
	cin>>str;

	if (isNumber(str))
		cout << "Integer";
	else
		cout << "String";
}
