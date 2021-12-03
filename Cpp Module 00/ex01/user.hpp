#ifndef USER_H
#define USER_H

#include <iostream>
#include <iomanip>

class Contact {
	private:
		std::string firstName;
		std::string lastName;
		std::string nickname;
		int			phoneNumber;
		std::string	secret;
		int			index;
	public:


		void setFirstName(std::string name) {
			firstName = name;
		}
		void setLastName(std::string name) {
			lastName = name;
		}
		void setNickname(std::string name) {
			nickname = name;
		}
		void setPhone(int number) {
			phoneNumber = number;
		}
		void setSecret(std::string sec) {
			secret = sec;
		}
		void setIndex(int i) {
			index = i;
		}
		void printFirstName() {
			if (firstName.length() >= 10)
				std::cout << std::right << std::setw(10) << firstName.substr(0, 9) << ". |";
			else
				std::cout << std::right << std::setw(10) << firstName << "  |";
		}
		void printLastName() {
			if (lastName.length() >= 10)
				std::cout << std::right << std::setw(10) << lastName.substr(0, 9) << ". |";
			else
				std::cout << std::right << std::setw(10) << lastName << "  |";
		}
		void printNickname() {
			if (nickname.length() >= 10)
				std::cout << std::right << std::setw(10) << nickname.substr(0, 9) << ". |";
			else
				std::cout << std::right << std::setw(10) << nickname << "  |";
		}
		// void printPhone() {
		// 	std::cout << std::right << std::setw(10) << phoneNumber;
		// }
		// void printSecret() {
		// 	std::cout << std::right << std::setw(10) << secret;
		// }
		void printIndex() {
			std::cout << "| " << std::right << std::setw(10) << index << " |";
		}
};

class Phonebook {
	public:
		Contact users[8];
		int		amount_of_users;
};

#endif
