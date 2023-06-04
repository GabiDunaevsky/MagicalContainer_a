#include "MagicalContainer.hpp"
namespace ariel{
    MagicalContainer::MagicalContainer(){
        this->last = true;
    }

    void MagicalContainer::addElement(int element){
       
    }

    void MagicalContainer::removeElement(int element){
    }

    int MagicalContainer::size() const{
        return this->elements.size();
    }
     MagicalContainer::AscendingIterator::AscendingIterator(MagicalContainer &container){
    }

    MagicalContainer::AscendingIterator& MagicalContainer::AscendingIterator::operator++(){
        return *this;
    }

    bool MagicalContainer::AscendingIterator::operator==(const AscendingIterator& other) const{
        return false;
    }

    bool MagicalContainer::AscendingIterator::operator>(const AscendingIterator& other) const{
        return false;
    }

    bool MagicalContainer::AscendingIterator::operator<(const AscendingIterator& other) const{
        return false;
    }

    bool MagicalContainer::AscendingIterator::operator!=(const AscendingIterator& other) const{
        return false;
    }

    int MagicalContainer::AscendingIterator::operator*() const{
        return 0;
    }

    MagicalContainer::AscendingIterator MagicalContainer::AscendingIterator::begin() const{
        return *this;
    }

    MagicalContainer::AscendingIterator MagicalContainer::AscendingIterator::end() const{
        return AscendingIterator(*this);
    }

    // MagicalContainer::AscendingIterator& MagicalContainer::AscendingIterator::operator=(const AscendingIterator& other){
    //     return *this;
    // }

    MagicalContainer::SideCrossIterator::SideCrossIterator(MagicalContainer &container){
    }

    MagicalContainer::SideCrossIterator& MagicalContainer::SideCrossIterator::operator++(){
        return *this;
    }

    bool MagicalContainer::SideCrossIterator::operator==(const SideCrossIterator& other) const{
        return false;
    }

    bool MagicalContainer::SideCrossIterator::operator>(const SideCrossIterator& other) const{
        return false;
    }

    bool MagicalContainer::SideCrossIterator::operator<(const SideCrossIterator& other) const{
        return false;
    }

    bool MagicalContainer::SideCrossIterator::operator!=(const SideCrossIterator& other) const{
        return false;
    }

    int MagicalContainer::SideCrossIterator::operator*() const{
        return 0;
    }

    MagicalContainer::SideCrossIterator MagicalContainer::SideCrossIterator::begin() const{
        return *this;
    }

    MagicalContainer::SideCrossIterator MagicalContainer::SideCrossIterator::end() const{
        return SideCrossIterator(*this);
    }

    // MagicalContainer::SideCrossIterator& MagicalContainer::SideCrossIterator::operator=(const SideCrossIterator& other){
    //     return *this;
    // }

    MagicalContainer::PrimeIterator::PrimeIterator(MagicalContainer &container){
        this->itPrime = container.primeElements.begin();
    }

    MagicalContainer::PrimeIterator& MagicalContainer::PrimeIterator::operator++(){
        this->itPrime++;
        return *this;
    }

    bool MagicalContainer::PrimeIterator::operator==(const PrimeIterator& other) const{
        return false;
    }

    bool MagicalContainer::PrimeIterator::operator>(const PrimeIterator& other) const{
        return false;
    }

    bool MagicalContainer::PrimeIterator::operator<(const PrimeIterator& other) const{
        return false;
    }

    bool MagicalContainer::PrimeIterator::operator!=(const PrimeIterator& other) const{
        return false;
    }

    int MagicalContainer::PrimeIterator::operator*() const{
        return 0;
    }

    MagicalContainer::PrimeIterator MagicalContainer::PrimeIterator::begin() const{
        return *this;
    }

    MagicalContainer::PrimeIterator MagicalContainer::PrimeIterator::end() const{
        return PrimeIterator(*this);
    }

    // MagicalContainer::PrimeIterator& MagicalContainer::PrimeIterator::operator=(const PrimeIterator& other){
    //     return *this;
    // } 
}
