#include <iostream>
#include <memory>
#include "States.h"

int main() {
	//�������
	State::StatePtr currentState = std::make_unique<State::Ramen>();
	//������Ԃ��o��
	std::cout << currentState->GetName() << " ";
	
	//�J��&��Ԗ��o�͂�19��
	for (int i = 0; i < 19; ++i) {
		currentState = currentState->GetNextState();
		std::cout << currentState->GetName() << " ";
	}
}
