#pragma once
class Explanation
{
public:
	Explanation();
	~Explanation();

	void FinalizeExplanation();
	void ExplanationInit();
	void ExplanationUpdate();
	void ExplanationDraw();

	//説明用の画像を読み込む変数
	int UnderKey = 0;
	int LeftKey = 0;
	int RightKey = 0;
	int LeftClick = 0;
	int RightClick = 0;
	int Mouse = 0;
	int Graph = 0;

	//画像の透過具合を決める変数
	int UK = 0;
	int LK = 0;
	int RK = 0;

	//白色を描画する
	int WhiteColor;
};

