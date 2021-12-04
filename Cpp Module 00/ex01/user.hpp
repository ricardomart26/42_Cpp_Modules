#ifndef USER_H
# define USER_H

# include <iostream>
# include <iomanip>

# define FOUND 0

class Contact {
public:
	Contact() {
		firstName;
		lastName;
		nickname;
		index = 0;
		phoneNumber = 0;
		secret;
	}

	~Contact() {
		std::cout << "Destroyed object Contact" << std::endl;
	}

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

	void printIndex() {
		std::cout << "| " << std::right << std::setw(10) << index << " |";
	}

private:
	std::string firstName;
	std::string lastName;
	std::string nickname;
	int			phoneNumber;
	std::string	secret;
	int			index;
};

class Phonebook {
	public:
		Contact users[8];
};

#endif
