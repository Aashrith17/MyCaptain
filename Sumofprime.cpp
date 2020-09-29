#include <iostream>
using namespace std;
bool checkifprime(int a);

int main() {
	int n,k=0;
	cout << "Enter a number: " << endl;
	cin >> n;
	for(int i=2;i<=n/2;i++)
	{
	    if(checkifprime(i) && checkifprime(n-i))
	    {
	        cout << n << " = " << i << " + " << n-i << endl;
	        k++;
	    }     
	}
	if(k==0)
	cout << "The number cannot be expressed as a sum of prime numbers" << endl;
	return 0;
}

bool checkifprime(int a)
{
    bool temp = true;
    if(a==2 || a==3)
    temp=true;
    for(int i=2;i<=a/2;i++)
    {
        if(a%i==0)
        temp=false;
    }
    return temp;
}
