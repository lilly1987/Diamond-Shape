#include <iostream> //std
#include <string> //getline

using namespace std;

int main(int argc, char* argv[]) {

	unsigned int v;
	do
	{
		// �ܼ��� ��� ��¿����� cout �ݺ����� ���°� ���ɻ� ���� ����
		// ���������� ������ �ִٸ� �𸦱�
		// ������ �̸� ó���� �ѹ��� ����ϴ°� �� ����
		
		// �Է� �ޱ�
		cout << "���ڸ� �Է�."<<endl;
		cout << "0 �Է½� ����" << endl;
		cout << "���̾� ũ��:";
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
						//cout << "��";
						s+= "��";
					}
					else {
						//cout << "��";
						s+= "��";
					}
				}
				else
				{
					if (j < i-v || v*3-i < j) {
						//cout << "��";
						s+= "��";
					}
					else {
						//cout << "��";
						s+= "��";
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