#include "player.hpp"
#define CARDS_FOR_PLAYER 26

Player ::Player(string name)
{
    this->name = name;
    this->index = 0;
    this->countCardsTaken = 0;
    this->numberOfWins = 0;
    this->isPlaying = false;
}

// Returns the number of cards left in the Player's stack.
int Player ::stacksize()
{
    if(!(this->isPlaying))
    {
        return 0;
    }
    if (this->index < 26 && this->index >= 0)
    {
        return (CARDS_FOR_PLAYER - this->index);
    }
    return 0;
}

bool Player :: getIsPlaying()
{
    return this->isPlaying;
}

void Player :: setIsPlayint(bool flag)
{
    this->isPlaying = flag;
}

// Returns the count of cards taken by the Player.
int Player ::cardesTaken()
{
    return this->countCardsTaken;
}

// Returns true if the given index is within bounds (0-25), false otherwise.
bool Player ::isIndexValid(int index)
{
    if (index >= 0 && index < 26)
    {
        return true;
    }
    return false;
}

// Returns the Player's current index.
int Player ::getIndex()
{
    return this->index;
}

// Returns the rank of the card at the given index, or -1 if the index is out of bounds or the Player has no cards.
int Player::getNumInIndex(int index)
{
    if (isIndexValid(index) && !cards.empty())
    {

        return static_cast<int>(this->cards[static_cast<std::vector<Card>::size_type>(index)].rank);
    }
    return -1;
}

// Sets the Player's index to the given value.
void Player ::setIndex(int newIndex)
{
    this->index = newIndex;
}

// Increases the count of cards taken by the given number.
void Player ::addCardesTaken(int num)
{
    this->countCardsTaken += num;
}

// Returns a reference to the vector of cards in the Player's possession.
vector<Card> &Player ::getCards()
{
    return this->cards;
}

vector<Card> &Player ::getWonCards()
{
    return this->wonCards;
}

Card Player ::getCardAt(int index)
{
    size_t ind = static_cast<size_t>(index);
    return this->cards.at(ind);
}

// Returns the Player's name.
string Player ::getName()
{
    return name;
}

// Prints the card at the given index, including its rank and suit, along with the Player's name.
void Player ::printCardInIndex(int index)
{
    size_t ind = static_cast<size_t>(index);
    Card card = cards.at(ind);
    string rankString;
    switch (card.rank)
    {
    case ACE:
        rankString = "Ace";
        break;
    case TWO:
        rankString = "2";
        break;
    case THREE:
        rankString = "3";
        break;
    case FOUR:
        rankString = "4";
        break;
    case FIVE:
        rankString = "5";
        break;
    case SIX:
        rankString = "6";
        break;
    case SEVEN:
        rankString = "7";
        break;
    case EIGHT:
        rankString = "8";
        break;
    case NINE:
        rankString = "9";
        break;
    case TEN:
        rankString = "10";
        break;
    case JACK:
        rankString = "Jack";
        break;
    case QUEEN:
        rankString = "Queen";
        break;
    case KING:
        rankString = "King";
        break;
    default:
        rankString = "Unknown Rank";
        break;
    }

    string suitString;
    switch (card.suit)
    {
    case SPADES:
        suitString = "Spades";
        break;
    case HEARTS:
        suitString = "Hearts";
        break;
    case DIAMONDS:
        suitString = "Diamonds";
        break;
    case CLUBS:
        suitString = "Clubs";
        break;
    default:
        suitString = "Unknown Suit";
        break;
    }
    cout << name << " played " << rankString << " of " << suitString;
}

void Player ::addWin()
{
    this->numberOfWins++;
}

int Player :: getNumberOfWins()
{
    return this->numberOfWins;
}

void Player ::printWonCards()
{
    size_t ind = 0;
    while (this->wonCards.size() > ind)
    {
        Card card = wonCards.at(ind);
        string rankString;
        switch (card.rank)
        {
        case ACE:
            rankString = "Ace";
            break;
        case TWO:
            rankString = "2";
            break;
        case THREE:
            rankString = "3";
            break;
        case FOUR:
            rankString = "4";
            break;
        case FIVE:
            rankString = "5";
            break;
        case SIX:
            rankString = "6";
            break;
        case SEVEN:
            rankString = "7";
            break;
        case EIGHT:
            rankString = "8";
            break;
        case NINE:
            rankString = "9";
            break;
        case TEN:
            rankString = "10";
            break;
        case JACK:
            rankString = "Jack";
            break;
        case QUEEN:
            rankString = "Queen";
            break;
        case KING:
            rankString = "King";
            break;
        default:
            rankString = "Unknown Rank";
            break;
        }

        string suitString;
        switch (card.suit)
        {
        case SPADES:
            suitString = "Spades";
            break;
        case HEARTS:
            suitString = "Hearts";
            break;
        case DIAMONDS:
            suitString = "Diamonds";
            break;
        case CLUBS:
            suitString = "Clubs";
            break;
        default:
            suitString = "Unknown Suit";
            break;
        }
        cout << rankString << " of " << suitString << endl;
        ind++;
    }
}