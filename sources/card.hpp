#pragma once
#include <iostream>
#include <vector>
using namespace std;

enum Rank
{
    ACE = 1,
    TWO,
    THREE,
    FOUR,
    FIVE,
    SIX,
    SEVEN,
    EIGHT,
    NINE,
    TEN,
    JACK,
    QUEEN,
    KING
};
enum Suit
{
    SPADES,
    HEARTS,
    DIAMONDS,
    CLUBS
};

struct Card
{
    Rank rank;
    Suit suit;
    int num_suits = 4;
    int num_ranks = 13;
};

struct Deck
{
    vector<Card> cards;
    string card_back;
    int max_deck_size = 52;
};