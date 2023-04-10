#pragma once
#include <iostream>
#include <vector>
using namespace std;

const int MAX_DECK_SIZE = 52;
const int NUM_SUITS = 4;
const int NUM_RANKS = 13;

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
    int num_suits = NUM_SUITS;
    int num_ranks = NUM_RANKS;
    Card(Rank rank = ACE, Suit suit = SPADES) : rank(rank), suit(suit) {}
};

struct Deck
{
    vector<Card> cards;
    string card_back;
    int max_deck_size = MAX_DECK_SIZE;
};