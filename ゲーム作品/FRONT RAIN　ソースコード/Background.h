#pragma once
class Background
{
public:
	Background();
	~Background();

	void Finalize();
	void Init();
	void Draw();

	//背景の画像を入れる変数
	int BackGroundGraph;
	int RedTitle;
	
	//画面を揺らす変数
	int BackX,BackY;
	//画面を赤くする
	int Red;

	//画面を暗くする
	int Darken;
};

