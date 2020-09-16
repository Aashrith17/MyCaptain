#include <iostream>
using namespace std;

int main() {
	int a;
	cout << "May I know your age please?" << endl;
	cin >> a;
	if (a<18)
	{
	    cout << "You are not eligible to vote at this age\nBut you can apply after " << 18-a;
	    if (18-a==1)
	    cout << " year";
	    else
	    cout << " years";
	}   
	else
	cout << "You are eligible to vote! Don't forget to vote because the future of our country is in hands of youth";
    return 0;
}
