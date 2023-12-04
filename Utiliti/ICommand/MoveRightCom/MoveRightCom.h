#pragma once

#include "Utiliti/ICommand/ICommand.h"



class MoveRightCom : public ICommand {

public:

	void Exec(const Player& player) override;

};

