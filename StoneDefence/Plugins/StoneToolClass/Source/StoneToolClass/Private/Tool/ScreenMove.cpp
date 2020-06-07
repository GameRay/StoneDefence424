#include "Tool/ScreenMove.h"
#include"GameFramework/PlayerController.h"
#include"GameFramework/Pawn.h"

bool FScreenMoveUnits::ListenScreenMove(APlayerController * PlayerController, const float & ScreenMoveSpeed)
{
	return MoveDirection(PlayerController,CursorMove(PlayerController),ScreenMoveSpeed);
}

EScreenMoveState FScreenMoveUnits::CursorMove(const APlayerController * PlayerController)
{
	if (PlayerController)
	{
		//屏幕尺寸
		int32 SizeX = INDEX_NONE;
		int32 SizeY = INDEX_NONE;

		//鼠标位置
		float MousePositionX = -107374176.f;
		float MousePositionY = -107374176.f;
		//获取屏幕尺寸
		PlayerController->GetViewportSize(SizeX, SizeY);
		//获取鼠标位置
		PlayerController->GetMousePosition(MousePositionX,MousePositionY);
		
		
		if (MousePositionX>=0&&MousePositionX<=SizeX&& MousePositionY >= 0 && MousePositionY <= SizeX)
		{

			if (FMath::IsNearlyEqual(MousePositionX,0.f,5.f)&& FMath::IsNearlyEqual(MousePositionY, 0.f, 5.f))
			{
				return EScreenMoveState::Screen_LeftAndUp;
			}
			else if (FMath::IsNearlyEqual(MousePositionX,SizeX, 5.f) && FMath::IsNearlyEqual(MousePositionY, SizeY, 5.f))
			{
				return EScreenMoveState::Screen_RightAndDown;
			}
			else if (FMath::IsNearlyEqual(MousePositionX, SizeX, 5.f) && FMath::IsNearlyEqual(MousePositionY, 0.f, 5.f))
			{
				return EScreenMoveState::Screen_RightAndUp;
			}
			else if (FMath::IsNearlyEqual(MousePositionX, 0.f, 5.f) && FMath::IsNearlyEqual(MousePositionY, SizeY, 5.f))
			{
				return EScreenMoveState::Screen_LeftAndDown;
			}
			else if (FMath::IsNearlyEqual(MousePositionX, 0.f, 5.f))
			{
				return EScreenMoveState::Screen_Left;
			}
			else if (FMath::IsNearlyEqual(MousePositionY, 0.f, 5.f))
			{
				return EScreenMoveState::Screen_Up;
			}
			else if (FMath::IsNearlyEqual(MousePositionX, SizeX, 5.f))
			{
				return EScreenMoveState::Screen_Right;
			}
			else if (FMath::IsNearlyEqual(MousePositionY, SizeY, 5.f))
			{
				return EScreenMoveState::Screen_Down;
			}

		}
	}
	return EScreenMoveState::Screen_None;
}

bool FScreenMoveUnits::MoveDirection(APlayerController * PlayerController, EScreenMoveState ScreenMoveState, const float& ScreenMoveSpeed)
{
	FVector OffsetValue = FVector::ZeroVector;

	if (PlayerController&&PlayerController->GetPawn())
	{
		switch (ScreenMoveState)
		{
		case Screen_Up:
			OffsetValue = FVector(-ScreenMoveSpeed,0.f,0.f);
			break;
		case Screen_Down:
			OffsetValue = FVector(ScreenMoveSpeed, 0.f, 0.f);
			break;
		case Screen_Right:
			OffsetValue = FVector(0.f,-ScreenMoveSpeed, 0.f);
			break;
		case Screen_Left:
			OffsetValue = FVector(0.f, ScreenMoveSpeed, 0.f);
			break;
		case Screen_RightAndUp:
			OffsetValue = FVector(-ScreenMoveSpeed,-ScreenMoveSpeed, 0.f);
			break;
		case Screen_RightAndDown:
			OffsetValue = FVector(ScreenMoveSpeed, -ScreenMoveSpeed, 0.f);
			break;
		case Screen_LeftAndUp:
			OffsetValue = FVector(-ScreenMoveSpeed,ScreenMoveSpeed, 0.f);
			break;
		case Screen_LeftAndDown:
			OffsetValue = FVector(ScreenMoveSpeed,ScreenMoveSpeed, 0.f);
			break;
		}
		PlayerController->GetPawn()->AddActorWorldOffset(OffsetValue);
	}
	return OffsetValue != FVector::ZeroVector;
}
