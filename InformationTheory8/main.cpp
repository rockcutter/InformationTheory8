#include <iostream>
#include <memory>
#include "States.h"

int main() {
	//‰Šúó‘Ô
	State::StatePtr currentState = std::make_unique<State::Ramen>();
	//‰Šúó‘Ô‚ğo—Í
	std::cout << currentState->GetName() << " ";
	
	//‘JˆÚ&ó‘Ô–¼o—Í‚ğ19‰ñ
	for (int i = 0; i < 19; ++i) {
		currentState = currentState->GetNextState();
		std::cout << currentState->GetName() << " ";
	}
}
