#include "DxLib.h"
#include "Input.h"

static int key[256];	//キーの入力状態を格納する

						//キーの入力状態の更新
void Updata_Key()
{
	char tmpKey[256];
	GetHitKeyStateAll(tmpKey);	//現在のキーの状態を格納
	for (int i = 0; i < 256; ++i)
	{
		if (tmpKey[i] != 0)
		{
			++key[i];
		}
		else  //押されていなければ
		{
			key[i] = 0;
		}
	}
}
//keycodeのキーの入力状態を取得する
int Key(int keycode)
{
	return key[keycode];	//keycodeの入力状態を返す
}