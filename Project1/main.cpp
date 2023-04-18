//ex_1
//#include <iostream>
//using namespace std;
//int main()
//{
//	int a;
//	cout << "¬вед≥ть число:" ;
//	cin >> a;
//	for (int i = 0; i <= a; ++i)
//		cout << i << " ";
//	return 0;
//}

//ex_2
#include <stdio.h>
int main()
{
	int sum = 0;
	int input = -1;
	while (input != 0)
	{
		scanf("%d", &input);
		if ((input > 0) && (input % 2 == 0)) sum += input;
	}
	printf("res=%d", sum);
	return 0;
}