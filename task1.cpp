#include <iostream>
using namespace std;
main() {
	char symbol = 'C';
    cout << "precedes the character C in the code table: " << static_cast<char>(symbol - 1) <<" | the follows the chracter C: " << static_cast<char>(symbol + 1) << endl;
}
