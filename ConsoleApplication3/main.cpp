// ConsoleApplication3.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"
#include "string"

int main()
{
	MySender sen;
	
	//sen.connect("192.168.0.117", 6000);
	sen.connect("127.0.0.1", 6001);

	std::string in;

	while(true){
		std::cin >> in;


		int len = in.length();
		char* cstr = new char[len + 1];
		memcpy(cstr, in.c_str(), len + 1);

		sen.send(cstr);
	}
	sen.disconnect();

	system("pause");
	return 0;
}

