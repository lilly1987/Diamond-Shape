#include <iostream> //std
#include <string> //getline

using namespace std;

int main(int argc, char* argv[]) {

	unsigned int v;
	do
	{
		// 단순히 모양 출력용으로 cout 반복으로 쓰는건 성능상 좋지 않음
		// 수학적으로 쓸일이 있다면 모를까
		// 변수에 미리 처리후 한번만 출력하는게 젤 좋음
		
		// 입력 받기
		cout << "숫자만 입력."<<endl;
		cout << "0 입력시 종료" << endl;
		cout << "다이아 크기:";
		//getline(cin, v);
		cin >> v;
		//cin.clear();
		fflush(stdin);

		string s="";

		for (unsigned int i = 0; i < v*2+1; i++)
		{
			for (unsigned int j = 0; j < v*2+1; j++)
			{
				if (i < v) {
					if ( j < v-i || v+i < j) {
						//cout << "◇";
						s+= "◇";
					}
					else {
						//cout << "◆";
						s+= "◆";
					}
				}
				else
				{
					if (j < i-v || v*3-i < j) {
						//cout << "◇";
						s+= "◇";
					}
					else {
						//cout << "◆";
						s+= "◆";
					}
				}
			}	
			//cout << endl;
			s += '\n';
		}
		cout << s;
	} while (0 < v);

	return 0;
}