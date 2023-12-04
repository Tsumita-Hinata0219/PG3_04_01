#pragma once

#include "Utiliti/ICommand/ICommand.h"



class MoveLeftCom : public ICommand {

public:

	void Exec(const Player& player) override;

};
