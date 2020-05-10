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
	//封装为监听鼠标函数
	bool ListenScreenMove(APlayerController*PlayerController, const float &ScreenMoveSpeed);
	//获取当前鼠标移动状态
	EScreenMoveState CursorMove(const APlayerController*PlayerController);

	//移动pawn
	bool MoveDirection(APlayerController*PlayerController, EScreenMoveState ScreenMoveState,const float &ScreenMoveSpeed);
};