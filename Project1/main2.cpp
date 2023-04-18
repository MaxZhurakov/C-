//ex_1
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name, autor, publister;
    int pages;
    cout << "Enter the name of the book:";
    getline(cin, name);
    cout << "Enter the autor of the book:";
    getline(cin, autor);
    cout << "Enter the publister of the book:";
    getline(cin, publister);
    cout << "Enter the number of pages:";
    cin >> pages;
    cout << endl;
    cout << "Name:" << name << endl;
    cout << "Autor:" << autor << endl;
    cout << "Publister:" << publister << endl;
    cout << "Pages:" << pages << endl;
    return 0;
}
//ex_2
#include <iostream>
#include <windows.h> 
using namespace std;
int main()
{
    cout << "Kraj Lukomor'a dub zelenyj," << endl;
    cout << "I zolotyj Lancyuh na nim: " << endl;
    cout << "Shodnya, shonochi kit uchenyj " << endl;
    cout << "Na Lancyuhu kruzhl'aje tim" << endl;
    return 0;
}
//ex_3
#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout << "______________________________________________________";
    cout << "|                                                     |";
    cout << "|                   Pory Roku                         |";
    cout << "|                                                     |";
    cout << "|_____________________________________________________|";
    cout << "|             |           |              |            |";
    cout << "|     Zyma    |   Vesna   |     Lito     |    Osin    |";
    cout << "|_____________|___________|______________|____________|";
    return 0;
}