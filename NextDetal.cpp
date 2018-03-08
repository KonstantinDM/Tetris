#include "NextDetal.h"


TetrisNextDetal::TetrisNextDetal()
{
}


TetrisNextDetal::~TetrisNextDetal()
{
}

/**
 ������� ����������� ������������� ������
    �� �����: in_Detal ��������� �� ����������� ������
   �� ������: *
*/
void TetrisNextDetal::ToDetal(TetrisDetal* in_Detal)
{
	// ��������� ��� � �������
	in_Detal->m_nNowDetal = m_nNowDetal;
	in_Detal->m_nNowPos = m_nNowPos;

	// ��������� ���� ������ ������ ������
	in_Detal->m_sDetal[0].color[0] = m_sDetal[0].color[0];
	in_Detal->m_sDetal[0].color[1] = m_sDetal[1].color[1];
	in_Detal->m_sDetal[0].color[2] = m_sDetal[2].color[2];

	in_Detal->m_sDetal[1].color[0] = m_sDetal[0].color[0];
	in_Detal->m_sDetal[1].color[1] = m_sDetal[1].color[1];
	in_Detal->m_sDetal[1].color[2] = m_sDetal[2].color[2];

	in_Detal->m_sDetal[2].color[0] = m_sDetal[0].color[0];
	in_Detal->m_sDetal[2].color[1] = m_sDetal[1].color[1];
	in_Detal->m_sDetal[2].color[2] = m_sDetal[2].color[2];

	in_Detal->m_sDetal[3].color[0] = m_sDetal[0].color[0];
	in_Detal->m_sDetal[3].color[1] = m_sDetal[1].color[1];
	in_Detal->m_sDetal[3].color[2] = m_sDetal[2].color[2];
}

/**
 ������� ����������� ������ �� ������� ��� �����������
    �� �����: ��� �� ���� �������� ���� ���������
   �� ������: *
*/
void TetrisNextDetal::ToPosition(int in_iX, int in_iY)
{
	// �������������� ��� �� ���������
	int x, y;

	// ��������� ��������� ������� 
	x = m_sDetal[0].x;
	y = m_sDetal[0].y;

	// �������� ����� ��������� � ������ ��������� � ������� ������
	for (int i = 0; i < DS; i++)
	{
		m_sDetal[i].x = in_iX + (x - m_sDetal[i].x);
		m_sDetal[i].y = in_iY + (y - m_sDetal[i].y);
	}
}
