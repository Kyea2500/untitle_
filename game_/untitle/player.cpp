#include "player.h"
#include "DxLib.h"
#include "Pad.h"

player::player()
{
}

player::~player()
{
}

void player::Init()
{
	// 初期化処理
	// プレイヤーの初期座標の設定

}

void player::Update()
{
	// 入力状態の更新
	Pad::Update();
	// 更新処理
	// プレイヤーの移動処理
	if (Pad::IsPress(PAD_INPUT_UP))
	{
		// 上に移動
	}
	if (Pad::IsPress(PAD_INPUT_DOWN))
	{
		// 下に移動
	}
	if (Pad::IsPress(PAD_INPUT_LEFT))
	{
		// 左に移動
	}
	if (Pad::IsPress(PAD_INPUT_RIGHT))
	{
		// 右に移動
	}
}

void player::Draw()
{
	// 描画処理
	// プレイヤーの描画処理
	DrawCircle(320, 240, 20, GetColor(255, 25, 25), TRUE); // 赤い円を描画
}