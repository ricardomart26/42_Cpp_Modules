#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>

typedef enum log_level 
{
	DEBUG,
	INFO,
	WARNING,
	ERROR,
	NOT_FOUND
} log_level;

class Karen 
{
	public:
	
		void		complain(std::string level);
		void		set_log_level(std::string level);
		log_level	get_log_level();

	private:
	
		log_level		_log_level;
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
};

#endif
