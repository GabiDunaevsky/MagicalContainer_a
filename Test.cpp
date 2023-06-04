#include "doctest.h"
#include "sources/MagicalContainer.hpp"
#include <stdexcept>

using namespace ariel;
using namespace std;

TEST_CASE("Adding elements to Container") {
    MagicalContainer container;
    container.addElement(10);
    CHECK(container.size() == 1);
    //Ading several elements
    container.addElement(7);
    container.addElement(12);
    CHECK(container.size() == 3);
    
}


TEST_CASE("Removing elements from MagicalContainer") {
    MagicalContainer container;
    CHECK(container.size() == 0);
    container.addElement(128);
    CHECK(container.size() == 1);
    CHECK_NOTHROW(container.removeElement(10));
    CHECK(container.size() == 0);
    container.addElement(69);
    CHECK(container.size() == 1);
    //Reamoving an element that does not exist.
    CHECK_THROWS_AS(container.removeElement(30), runtime_error);
    CHECK(container.size() == 1);
    
}


TEST_CASE("Checking AscendingIterator") {
    MagicalContainer container;
    MagicalContainer empty;
    container.addElement(2);
    container.addElement(4);
    container.addElement(6);
    container.addElement(8);
    container.addElement(10);
    container.addElement(12);
    container.addElement(14);
    container.addElement(16);
    container.addElement(18);
    CHECK(container.size() == 9);
    CHECK(empty.size() == 0);
    MagicalContainer::AscendingIterator ascIter(container);
    int counter = 2;
    for (auto it = ascIter.begin(); it != ascIter.end(); ++it) {
        CHECK(*it == counter);
        counter += 2;
    }
    MagicalContainer::AscendingIterator it(empty);
    CHECK(it == it.end());
    
}


TEST_CASE("Checking SideCrossIterator") {
    MagicalContainer container;
    MagicalContainer empty;
    container.addElement(1);
    container.addElement(2);
    container.addElement(3);
    CHECK(container.size() == 3);
    CHECK(empty.size() == 0);
    MagicalContainer::SideCrossIterator it(container);
    CHECK(*it == 1);
    ++it;
    CHECK(*it == 3);
    ++it;
    CHECK(*it == 2);
    ++it;
    CHECK(it == it.end());
    MagicalContainer::SideCrossIterator iter(empty);
    CHECK(iter == iter.end());
}


TEST_CASE("Checking PrimeIterator") {
    MagicalContainer container;
    container.addElement(2);
    container.addElement(3);
    container.addElement(4);
    container.addElement(19);
    container.addElement(666);
    MagicalContainer::PrimeIterator it(container);
    MagicalContainer empty;
    CHECK(*it == 2);
    ++it;
    CHECK(*it == 3);
    ++it;
    CHECK(*it == 19);
    ++it;
    CHECK(it == it.end());
    MagicalContainer::PrimeIterator iter(empty);
    CHECK(iter == iter.end());

}

TEST_CASE("Comparing AscendingIterator oparations") {
    MagicalContainer container;
    MagicalContainer container2;
    container.addElement(1);
    container.addElement(2);
    container.addElement(3);
    container.addElement(4);
    container.addElement(5);

    container2.addElement(5);
    container2.addElement(4);
    container2.addElement(3);
    container2.addElement(2);
    container2.addElement(1);
    
    CHECK(container.size() == 5);
    CHECK(container2.size() == 5);
    SUBCASE("Comparing iterators after increments") {
        MagicalContainer::AscendingIterator it1(container);
        MagicalContainer::AscendingIterator it2(container);
        MagicalContainer::AscendingIterator it3(container2);

        CHECK((it1 == it2));
        CHECK((it1 == it3));
        CHECK((it2 == it3));
        CHECK_FALSE((it1 != it3));
        CHECK_FALSE((it2 != it3));
        CHECK_FALSE((it1 != it2));
        CHECK_FALSE((it1 > it2));
        CHECK_FALSE((it1 > it3));
        CHECK_FALSE((it2 > it3));
        CHECK_FALSE((it1 < it2));
        CHECK_FALSE((it1 < it3));
        CHECK_FALSE((it1 < it3));

        ++it1;
        CHECK_FALSE((it1 == it2));
        CHECK_FALSE((it1 == it3));
        CHECK((it2 == it3));
        CHECK((it1 != it2));
        CHECK((it1 != it3));
        CHECK_FALSE((it2 != it3));
        CHECK((it1 > it2));
        CHECK_FALSE((it1 < it2));
    }
}



TEST_CASE("Comparing PrimeIterator oparations") {
    MagicalContainer container;
    MagicalContainer container2;
    container.addElement(3);
    container.addElement(7);

    container2.addElement(5);
    container2.addElement(13);

    CHECK(container.size() == 2);
    CHECK(container2.size() == 2);
    SUBCASE("Comparing iterators after increments") {
        MagicalContainer::PrimeIterator it1(container);
        MagicalContainer::PrimeIterator it2(container);
         MagicalContainer::PrimeIterator it3(container2);

        CHECK((it1 == it2));
        CHECK((it1 == it3));
        CHECK((it2 == it3));
        CHECK_FALSE((it1 != it3));
        CHECK_FALSE((it2 != it3));
        CHECK_FALSE((it1 != it2));
        CHECK_FALSE((it1 > it2));
        CHECK_FALSE((it1 > it3));
        CHECK_FALSE((it2 > it3));
        CHECK_FALSE((it1 < it2));
        CHECK_FALSE((it1 < it3));
        CHECK_FALSE((it1 < it3));


        ++it1;
        CHECK_FALSE((it1 == it2));
        CHECK_FALSE((it1 == it3));
        CHECK((it2 == it3));
        CHECK((it1 != it2));
        CHECK((it1 != it3));
        CHECK_FALSE((it2 != it3));
        CHECK((it1 > it2));
        CHECK_FALSE((it1 < it2));

    }
}


TEST_CASE("Comparing SideCrossIterator oparations") {
    MagicalContainer container;
    MagicalContainer container2;
    container.addElement(90);
    container.addElement(40);
    container.addElement(20);
    container.addElement(5);
    
    

    SUBCASE("Comparing iterators after increments") {
        MagicalContainer::SideCrossIterator it1(container);
        MagicalContainer::SideCrossIterator it2(container);
        MagicalContainer::SideCrossIterator it3(container2);

        CHECK((it1 == it2));
        CHECK((it1 == it3));
        CHECK((it2 == it3));
        CHECK_FALSE((it1 != it3));
        CHECK_FALSE((it2 != it3));
        CHECK_FALSE((it1 != it2));
        CHECK_FALSE((it1 > it2));
        CHECK_FALSE((it1 > it3));
        CHECK_FALSE((it2 > it3));
        CHECK_FALSE((it1 < it2));
        CHECK_FALSE((it1 < it3));
        CHECK_FALSE((it1 < it3));


        ++it1;
        CHECK_FALSE((it1 == it2));
        CHECK_FALSE((it1 == it3));
        CHECK((it2 == it3));
        CHECK((it1 != it2));
        CHECK((it1 != it3));
        CHECK_FALSE((it2 != it3));
        CHECK((it1 > it2));
        CHECK_FALSE((it1 < it2));
    }
}
