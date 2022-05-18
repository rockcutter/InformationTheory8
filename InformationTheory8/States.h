#pragma once
#include <memory>
#include <string>

namespace State {
	/// <summary>
	/// 状態を表す基底クラス(抽象クラス)
	/// </summary>
	class StateBase {
	public:
		virtual std::string GetName() = 0;
		virtual std::unique_ptr<StateBase> GetNextState() = 0;
	};

	//エイリアス StateBaseのポインタ
	using StatePtr = std::unique_ptr<StateBase>;

	/// <summary>
	/// ラーメンクラス
	/// </summary>
	class Ramen : public StateBase {
		const std::string name{"1"};
	public:
		std::string GetName() {
			return this->name;
		}

		/// <summary>
		/// 次の状態に遷移する 
		/// </summary>
		/// <returns>
		/// 次の状態を返す
		/// 遷移確率: 
		///		ラーメン: 80%
		///		そば: 10%
		///		うどん: 10%
		/// </returns>
		StatePtr GetNextState() override;
	};

	/// <summary>
	/// そばクラス
	/// </summary>
	class Soba : public StateBase {
		const std::string name{ "2" };
	public:
		std::string GetName() {
			return this->name;
		}

		/// <summary>
		/// 次の状態に遷移する 
		/// </summary>
		/// <returns>
		/// 次の状態を返す
		/// 遷移確率: 
		///		ラーメン: 50%
		///		そば: 40%
		///		うどん: 10%
		/// </returns>
		StatePtr GetNextState() override;
	};

	/// <summary>
	/// うどんクラス
	/// </summary>
	class Udon : public StateBase {
		const std::string name{ "3" };
	public:
		std::string GetName() {
			return this->name;
		}

		/// <summary>
		/// 次の状態に遷移する 
		/// </summary>
		/// <returns>
		/// 次の状態を返す
		/// 遷移確率: 
		///		ラーメン: 50%
		///		そば: 50%
		///		うどん: 0%
		/// </returns>
		StatePtr GetNextState() override;
	};

}
