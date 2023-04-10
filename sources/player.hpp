#pragma once
namespace ariel
{
}
using namespace ariel;
#include <iostream>
using namespace std;
#include "card.hpp"
#include <vector>

class Player
{
private:
    string name;
    vector<Card> cards;
    vector<Card> wonCards;
    int index;
    bool isPlaying;
    int countCardsTaken;
    int numberOfWins;

public:
    Player(string name);
    int stacksize();
    int cardesTaken();

    bool isIndexValid(int index);
    int getIndex();
    int getNumInIndex(int index);
    void setIndex(int newIndex);
    void addCardesTaken(int num);

    vector<Card> &getCards();
    string getName();
    void printCardInIndex(int);
    void addWin();
    vector<Card>& getWonCards();
    Card getCardAt(int index);
    void printWonCards();
    int getNumberOfWins();
    void setIsPlayint(bool);
    bool getIsPlaying();
};
