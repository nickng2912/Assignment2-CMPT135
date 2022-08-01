//#include <iostream>
//using namespace std;
//
//void changeArray(char* str, int begin, int end)
//{
//	if (begin > end)
//		return;
//	else
//	{
//		char temp = str[begin];
//		str[begin] = str[end];
//		str[end] = temp;
//		changeArray(str, begin + 1, end - 1);
//	}
//
//}
//
//void reverse(char* str, int begin, int end)
//{
//	changeArray(str, begin, end);
//}
//
//
//int main()
//{
//	char test[] = "ABCDE";
//	reverse(test, 1, 4);
//	cout << test; 
//	
//	system("pause");
//	return 0; 
//}