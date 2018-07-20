# ラジコン制御 CPPクライアント windows用
クラスはstdafx.hに記述。(めんどうなのでヘッダファイルに直書き)

中身はwinsock2を簡略化しただけのラッパー
サンプルはmain.cppにあります。

```
MySender sen;
const char* char_ptr = "a0.12";

sen.connect("127.0.0.1", 6001);
sen.send(char_ptr);
```
	



