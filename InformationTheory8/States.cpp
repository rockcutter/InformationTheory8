#include "States.h"
#include <random>
#include <memory>

namespace State {

	StatePtr Ramen::GetNextState() {
		std::random_device rnd;
		std::mt19937_64 mt(rnd());
		std::uniform_int_distribution<> dist(0, 99);

		int choice = dist(mt);

		if (choice < 80) {
			return std::make_unique<Ramen>();
		}
		if (choice < 90) {
			return std::make_unique<Soba>();
		}
		if (choice < 100) {
			return std::make_unique<Udon>();
		}
		throw std::logic_error("ë∂ç›ÇµÇ»Ç¢èÛë‘Ç≈Ç∑");
		return nullptr;
	}


	StatePtr Soba::GetNextState() {
		std::random_device rnd;
		std::mt19937_64 mt(rnd());
		std::uniform_int_distribution<> dist(0, 99);
		
		int choice = dist(mt);

		if (choice < 50) {
			return std::make_unique<Ramen>();
		}
		if (choice < 90) {
			return std::make_unique<Soba>();
		}
		if (choice < 100) {
			return std::make_unique<Udon>();
		}
		throw std::logic_error("ë∂ç›ÇµÇ»Ç¢èÛë‘Ç≈Ç∑");
		return nullptr;
	}


	StatePtr Udon::GetNextState() {
		std::random_device rnd;
		std::mt19937_64 mt(rnd());
		std::uniform_int_distribution<> dist(0, 99);

		int choice = dist(mt);

		if (choice < 50) {
			return std::make_unique<Ramen>();
		}
		if (choice < 100) {
			return std::make_unique<Soba>();
		}
		throw std::logic_error("ë∂ç›ÇµÇ»Ç¢èÛë‘Ç≈Ç∑");
		return nullptr;
	}
}
