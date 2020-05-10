#pragma once
#include"CoreMinimal.h"
enum EScreenMoveState
{
	Screen_None,
	Screen_Up,
	Screen_Down,
	Screen_Right,
	Screen_Left,
	Screen_RightAndUp,
	Screen_RightAndDown,
	Screen_LeftAndUp,
	Screen_LeftAndDown,
	Screen_Max
};
class APlayerController;
struct STONETOOLCLASS_API FScreenMoveUnits
{
	//��װΪ������꺯��
	bool ListenScreenMove(APlayerController*PlayerController, const float &ScreenMoveSpeed);
	//��ȡ��ǰ����ƶ�״̬
	EScreenMoveState CursorMove(const APlayerController*PlayerController);

	//�ƶ�pawn
	bool MoveDirection(APlayerController*PlayerController, EScreenMoveState ScreenMoveState,const float &ScreenMoveSpeed);
};