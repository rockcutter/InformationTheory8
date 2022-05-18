#pragma once
#include <memory>
#include <string>

namespace State {
	/// <summary>
	/// ��Ԃ�\�����N���X(���ۃN���X)
	/// </summary>
	class StateBase {
	public:
		virtual std::string GetName() = 0;
		virtual std::unique_ptr<StateBase> GetNextState() = 0;
	};

	//�G�C���A�X StateBase�̃|�C���^
	using StatePtr = std::unique_ptr<StateBase>;

	/// <summary>
	/// ���[�����N���X
	/// </summary>
	class Ramen : public StateBase {
		const std::string name{"1"};
	public:
		std::string GetName() {
			return this->name;
		}

		/// <summary>
		/// ���̏�ԂɑJ�ڂ��� 
		/// </summary>
		/// <returns>
		/// ���̏�Ԃ�Ԃ�
		/// �J�ڊm��: 
		///		���[����: 80%
		///		����: 10%
		///		���ǂ�: 10%
		/// </returns>
		StatePtr GetNextState() override;
	};

	/// <summary>
	/// ���΃N���X
	/// </summary>
	class Soba : public StateBase {
		const std::string name{ "2" };
	public:
		std::string GetName() {
			return this->name;
		}

		/// <summary>
		/// ���̏�ԂɑJ�ڂ��� 
		/// </summary>
		/// <returns>
		/// ���̏�Ԃ�Ԃ�
		/// �J�ڊm��: 
		///		���[����: 50%
		///		����: 40%
		///		���ǂ�: 10%
		/// </returns>
		StatePtr GetNextState() override;
	};

	/// <summary>
	/// ���ǂ�N���X
	/// </summary>
	class Udon : public StateBase {
		const std::string name{ "3" };
	public:
		std::string GetName() {
			return this->name;
		}

		/// <summary>
		/// ���̏�ԂɑJ�ڂ��� 
		/// </summary>
		/// <returns>
		/// ���̏�Ԃ�Ԃ�
		/// �J�ڊm��: 
		///		���[����: 50%
		///		����: 50%
		///		���ǂ�: 0%
		/// </returns>
		StatePtr GetNextState() override;
	};

}
