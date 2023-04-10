#pragma once
namespace ariel
{
}
using namespace ariel;
#include "player.hpp"
#include "iostream"
#include "stdio.h"
#include <vector>
#include <time.h>
#include <random>
#include <algorithm>
using namespace std;

class Game
{
private:
    Deck deck;
    Player& p1;
    Player& p2;
    int lastIndex;
    bool isOver;
    int amountOfDraw;
    int amountOfTrun;
    vector<Card> p1DrawCard;
    vector<Card> p2DrawCard;

public:
    Game(Player& p1, Player& p2);
    int playTurn();  
    void printLastTurn();
    void playAll();
    void printWiner();
    void printLog();
    void printStats();

    void tempPlayTurn(int, int);
    void initialize(Deck &deck);
    void shuffle(Deck& deck);
    bool deal_cards(Deck& deck, vector<Card>& p1_cards, vector<Card>& p2_cards, int num_cards);
    void print_deck(const Deck& deck);
    void print_card(const Card& card);
    // bool isIndexValid(int);
    void addDraw();
};