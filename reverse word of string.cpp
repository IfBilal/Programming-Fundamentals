//#include<iostream>
//#include<cstring>
//using namespace std;
#include <iostream>
using namespace std;

int main() {
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int (*ptr)[3] = arr;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            ptr[i][j] += 1;
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}


//void reverse(string s)
//{
//	int count=0;
//	int p;
//	int y=strlen(s);
//	for(int i=0;i<s;i++)
//	{
//		count++;
//		if(s[i]==32)
//		{
//			int h=i+1;
//			for(int i=0;i<count;i++)
//			{
//				cout<<s[h];
//				h++;
//				count=0;
//			}
//		}
//	}
//}

