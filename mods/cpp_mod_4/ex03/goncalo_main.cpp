
#include "AMateria.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);

    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);

    // deletes from pdf
    delete bob;
    delete me;
    delete src;

    // Extra tests

    std::cout << std::endl;
    std::cout << "Testing the 4 MateriaSource Materia spots" << std::endl;

    IMateriaSource* src_test = new MateriaSource();
    src_test->learnMateria(new Ice());
    src_test->learnMateria(new Cure());
    src_test->learnMateria(new Ice());
    src_test->learnMateria(new Cure());
    src_test->learnMateria(new Cure());

    std::cout << std::endl;
    std::cout << "Testing the 4 Character Materia spots" << std::endl;
    ICharacter* geeloyal = new Character("geeloyal");
    AMateria* tmp_test;
    tmp_test = src_test->createMateria("ice");
    geeloyal->equip(tmp_test);
    tmp_test = src_test->createMateria("cure");
    geeloyal->equip(tmp_test);
    tmp_test = src_test->createMateria("yoo yoo");
    geeloyal->equip(tmp_test);
    tmp_test = src_test->createMateria("cure");
    geeloyal->equip(tmp_test);
    tmp_test = src_test->createMateria("ice");
    geeloyal->equip(tmp_test);
    tmp_test = src_test->createMateria("cure");
    geeloyal->equip(tmp_test);
    AMateria *save = dynamic_cast<Character *>(geeloyal)->getMateriaAddress(1);
    geeloyal->unequip(1);
    delete tmp_test;
    delete save;

    std::cout << std::endl;
    std::cout << "Testing the use function" << std::endl;
    geeloyal->use(-1, *geeloyal);
    geeloyal->use(0, *geeloyal);
    geeloyal->use(1, *geeloyal);
    geeloyal->use(2, *geeloyal);
    geeloyal->use(3, *geeloyal);
    geeloyal->use(4, *geeloyal);

    // Testing assignment of Character
    std::cout << std::endl;
    std::cout << "Testing assignment of Character" << std::endl;
    Character goncaloleal("goncaloleal");
    goncaloleal = *dynamic_cast<Character *>(geeloyal);
    std::cout << "goncaloleal is now a hard copy" << std::endl;
    geeloyal->use(0, *geeloyal);
    geeloyal->use(1, *geeloyal);
    geeloyal->use(2, *geeloyal);
    geeloyal->use(3, *geeloyal);
    std::cout << "geeloyal remains the same" << std::endl;
    goncaloleal.use(0, goncaloleal);
    goncaloleal.use(1, goncaloleal);
    goncaloleal.use(2, goncaloleal);
    goncaloleal.use(3, goncaloleal);
    delete geeloyal;

    // Testing assignment of Materias
    std::cout << "Testing assignment overload of AMateria" << std::endl;
    AMateria* test_a = 0;
    AMateria* test_b = 0;
    test_a = src_test->createMateria("cure");
    test_b = src_test->createMateria("ice");
    *test_a = *test_b;
    delete src_test;
    delete test_a;
    delete test_b;

    return 0;
}