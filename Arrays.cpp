#include <iostream>
using namespace std;

int main() {
    int *p;
    int a[10];
    p=a;
    cout << "Enter elements: " << endl;
    for (int i=0;i<5;i++)
    {
        cin >> a[i];
    } 
    cout << "You entered: ";
    for (int i=0;i<5;i++)
    {
        cout << *p << endl;
        p++;
    }
	
	return 0;
}
