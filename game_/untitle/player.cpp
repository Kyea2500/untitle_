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
	// ����������
	// �v���C���[�̏������W�̐ݒ�

}

void player::Update()
{
	// ���͏�Ԃ̍X�V
	Pad::Update();
	// �X�V����
	// �v���C���[�̈ړ�����
	if (Pad::IsPress(PAD_INPUT_UP))
	{
		// ��Ɉړ�
	}
	if (Pad::IsPress(PAD_INPUT_DOWN))
	{
		// ���Ɉړ�
	}
	if (Pad::IsPress(PAD_INPUT_LEFT))
	{
		// ���Ɉړ�
	}
	if (Pad::IsPress(PAD_INPUT_RIGHT))
	{
		// �E�Ɉړ�
	}
}

void player::Draw()
{
	// �`�揈��
	// �v���C���[�̕`�揈��
	DrawCircle(320, 240, 20, GetColor(255, 25, 25), TRUE); // �Ԃ��~��`��
}