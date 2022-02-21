#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>

typedef enum logLevel 
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
	
		void		complain(const std::string& level);
		void		setLogLevel(const std::string& level);
		log_level	getLogLevel( void );

	private:
	
		logLevel		_logLevel;
		void			debug( void );
		void			info( void );
		void			warning( void );
		void			error( void );
};

#endif
