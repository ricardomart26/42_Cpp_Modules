
#include <iostream>

class categorias {
private:
	/* data */
public:
	categorias(/* args */);
	~categorias();


	int show_available_categories(void)
	{
		std::cout << "All Of The Available Categories: " << std::endl;

		std::cout << "==============================" << std::endl;
		std::cout << "|\t 1. Brain:          |" << std::endl;
		std::cout << "|\t 2. Body:           |" << std::endl;
		std::cout << "|\t 3. Relationships:   |" << std::endl;
		std::cout << "|\t 4. Health:         |" << std::endl;
		std::cout << "|\t 5. Carrer Sucess:  |" << std::endl;
		std::cout << "==============================" << std::endl;

		int option = 0;
		std::cin >> option;
		if (option < 0 && option > 7)
		{
			std::cout << "You chosse a bad option" << std::endl;
			show_available_categories();
		}
		return (option);
	}
};

categorias::categorias(/* args */)
{
}

categorias::~categorias()
{
}

