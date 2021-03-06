#include <iostream>
#include <memory>
#include "States.h"

int main() {
	//初期状態
	State::StatePtr currentState = std::make_unique<State::Ramen>();
	//初期状態を出力
	std::cout << currentState->GetName() << " ";
	
	//遷移&状態名出力を19回
	for (int i = 0; i < 19; ++i) {
		currentState = currentState->GetNextState();
		std::cout << currentState->GetName() << " ";
	}
}
