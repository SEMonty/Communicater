// ConsoleApplication3.cpp : �R���\�[�� �A�v���P�[�V�����̃G���g�� �|�C���g���`���܂��B
//

#include "stdafx.h"
#include "string"

int main()
{
	MySender sen;
	
	//sen.connect("192.168.0.117", 6000);
	sen.connect("127.0.0.1", 6001);

	std::string in;

	//�R���\�[��������͂��ꂽ�����𑗐M
	while(true){
		std::cin >> in;

		//string��char*�ɕϊ�
		int len = in.length();
		char* cstr = new char[len + 1];
		memcpy(cstr, in.c_str(), len + 1);

		//���M
		sen.send(cstr);
	}
	sen.disconnect();

	/*��M�̃T���v���@�ʃv���O�����Ƃ��Ď��s���Ȃ��ƈӖ��Ȃ��̂Œ��ӁB

		mr.connect(6001);

		while (true){
			printf("%s\n", mr.recvwait());
		}

		mr.disconnect();
	*/


	system("pause");
	return 0;
}

