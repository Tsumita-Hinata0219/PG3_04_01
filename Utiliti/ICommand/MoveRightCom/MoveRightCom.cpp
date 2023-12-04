#include "MoveRightCom.h"
#include "GameObject/Player/Player.h"


// Playerの移動処理
void MoveRightCom::Exec(const Player& player) {

	player.MoveRight();

}
