#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

/**
 * ANCHOR Documentacao da inheritance de classes.
 *  
 * @keywords: 
 * * Base Class: Classe Pai
 * * Derived/Sub Class: Classe que vai herdar os atributos da Base Class
 * * Coupling: 
 * 
 * @inheritance: 
 * * Inheritance permite a uma classe, aceder aos conteudos/atributos/proriedades 
 * * de outra classe dependente do access mode especificado.
 * 
 * @acess_mode_types:
 * * Public mode: Se derivarmos uma sub class com o modo de acesso public,
 * * os membros publicos da base class vão ficar publicos para a classe derivada
 * * e os membros protected da base class vão ficar protected na classe derivada!
 *
 * * Private mode: Se derivarmos uma sub classe de uma de uma base class protected.
 * * Entao ambos os membros publicos e membros protected de base class vão ser 
 * * protected na classe derivada.
 * 
 * * Protected mode: Se derivarmos uma sub classe de uma base class privada. 
 * * Entao ambos os membros publicos e protected da base class vão ser 
 * * privados na classe derivada. 
 * 
 * @advantages:
 * * 1. Inherance promove reusabilidade, quando uma classe herda ou deriva de outra classe 
 * * pode aceder a todas as funcionalidades da base class.
 * * 2. Reabilidade, se a outra base class ja tiver sido devidamente testada, podemos confiar
 * * que os atributos (Funcoes ou variaveis) herdados ja são de "confianca".
 * * 3. Inheritance faz com que as sub class sigam um padrão.
 * 
 * @disavantages:
 * * 1. Funçōes herdadas é mais lento que funçōes normais.
 * * 2. Varias vezes, membros da base classe não são utilizados, e memoria é desperdiçada.
 * * 3. Aumenta o acoplamento entre a base class e a classe derivada. 
 * * Uma mudança na base class vai afetar todas as classes derivadas.
 * 
*/

/**
 * 
 * @constructor: 
 * * O Contructor de uma classe que herda os atributos de outra classe,
 * *tem que se chamar o contrutor da classe "pai".
 * 
 * @syntax: 
 * * Classe filho(args...) : Classe pai(args...) 
 * * os args tem de corresponder ao contructor do pai
 * 
*/

class ScavTrap: public ClapTrap
{
    public:

        ScavTrap(std::string name); 
        ~ScavTrap();
        void guardGate();

};

#endif
