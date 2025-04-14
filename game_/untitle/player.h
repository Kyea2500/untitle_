#pragma once
class player
{
public:
	// コンストラクタ
	player();
	// デストラクタ
	~player();
	// 初期化処理
	void Init();
	// 更新処理
	void Update();
	// 描画処理
	void Draw();

private:
	// プレイヤーの座標
	int x;
	int y;
	// プレイヤーの移動速度
	int speed;
};