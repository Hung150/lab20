#include <iostream>
#include <cstring>
using namespace std;
main(){
	char s[90];
	char ch;
	cout << "Enter string: "<<endl;
	cin >> s;
	cout << endl << "Enter the character: "<<endl;
	cin >> ch;
	for (int i=0;i<s.length();i++){
		cout << s[i];
		if (s[i]==ch) cout << s[i];
	}
}
