#pragma once
class player
{
public:
	// �R���X�g���N�^
	player();
	// �f�X�g���N�^
	~player();
	// ����������
	void Init();
	// �X�V����
	void Update();
	// �`�揈��
	void Draw();

private:
	// �v���C���[�̍��W
	int x;
	int y;
	// �v���C���[�̈ړ����x
	int speed;
};