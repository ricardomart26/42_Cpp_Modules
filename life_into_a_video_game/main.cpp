#include "categorias.hpp"
#include "main_class.hpp"


typedef enum cat
{
	ERROR,
	BRAIN,
	BODY,
	RELATIONSHIPS,
	HEALTH,
	CARRER_SUCESS,
} t_cat;

int main(void)
{
	master		player;
	categorias	c;
	int			option;
	
	player.credentials();


	option = c.show_available_categories();

	player.level = 0;
	player.totalXP = 0;
	player.levelXP = 100;

}
