#pragma once
#include "Detal.h"
// ����� ��� ����������� ��������� ������
class TetrisNextDetal :
	public TetrisDetal
{
public:

	TetrisNextDetal();
	~TetrisNextDetal();

	void ToDetal(TetrisDetal* in_Detal);   // ����������� ��������� �������� � �������
	void ToPosition(int in_iX, int in_iY); // ��������� �� ������� �����������
};

