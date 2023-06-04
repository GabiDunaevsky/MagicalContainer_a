#pragma once
#include <iostream>
#include <stdexcept>
#include <list>
#include <iterator>
#include <set>
//I was using chat gpt in the task
// I was consoulting with a friend on the task.

namespace ariel{

class MagicalContainer{
        private:
            std::list<int> elements;
            std::set<int> ascendinElements;
            std::list<int> crossElements;
            std::list<int> primeElements;
            bool last;
            

        public:
            MagicalContainer();
            // ~MagicalContainer();
            void addElement(int element);
            void removeElement(int element);
            int size() const;
            
    
class AscendingIterator{
        private:
            std::set<int>::iterator itAscending;
     
        public:
            AscendingIterator(MagicalContainer &container);
            AscendingIterator& operator++();
            bool operator>(const AscendingIterator& other) const;
            bool operator<(const AscendingIterator& other) const;
            bool operator==(const AscendingIterator& other) const;
            bool operator!=(const AscendingIterator& other) const;
            int operator*() const;
            AscendingIterator begin() const;
            AscendingIterator end() const;
            // AscendingIterator& operator=(const AscendingIterator& other);
    };

    class SideCrossIterator{
        private:
            std::list<int>::iterator itCross;
            
        public:
            SideCrossIterator(MagicalContainer &container);
            SideCrossIterator& operator++();
            bool operator>(const SideCrossIterator& other) const;
            bool operator<(const SideCrossIterator& other) const;
            bool operator==(const SideCrossIterator& other) const;
            bool operator!=(const SideCrossIterator& other) const;
            int operator*() const;
            SideCrossIterator begin() const;
            SideCrossIterator end() const;
            // SideCrossIterator& operator=(const SideCrossIterator& other);
    };

    class PrimeIterator{
    private:
        std::list<int>::iterator itPrime;
       
    public:
        PrimeIterator(MagicalContainer &container);
        PrimeIterator& operator++();
        bool operator>(const PrimeIterator& other) const;
        bool operator<(const PrimeIterator& other) const;
        bool operator==(const PrimeIterator& other) const;
        bool operator!=(const PrimeIterator& other) const;
        int operator*() const;
        PrimeIterator begin() const;
        PrimeIterator end() const;
        // PrimeIterator& operator=(const PrimeIterator& other);
    };

    };
}