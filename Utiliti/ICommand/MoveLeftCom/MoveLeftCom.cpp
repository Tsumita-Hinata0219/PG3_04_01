#include "MoveLeftCom.h"
#include "GameObject/Player/Player.h"


// Playerの移動処理
void MoveLeftCom::Exec(const Player& player) {

	player.MoveLeft();

}