#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl 
{

	public:
	
		void	complain(const std::string& level);
	
	private:

		int		_option;
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );
		void	notfound( void );

};

#endif
