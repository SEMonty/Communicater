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

	//コンソールから入力された文字を送信
	while(true){
		std::cin >> in;

		//stringをchar*に変換
		int len = in.length();
		char* cstr = new char[len + 1];
		memcpy(cstr, in.c_str(), len + 1);

		//送信
		sen.send(cstr);
	}
	sen.disconnect();

	/*受信のサンプル　別プログラムとして実行しないと意味ないので注意。

		mr.connect(6001);

		while (true){
			printf("%s\n", mr.recvwait());
		}

		mr.disconnect();
	*/


	system("pause");
	return 0;
}

