#ifndef card_h
#define card_h

#include <string>

static const unsigned int number_of_suits = 4;
static const unsigned int number_of_ranks = 13;
const unsigned int MAX_NUM_CARDS = number_of_suits * number_of_ranks;
static const std::string suit_str[4] = {"spade", "club", "diamond", "heart"};
static const std::string rank_str[13] = {"ace", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "jack", "king", "queen"};

// types of card
typedef enum suit {
    spade = 0,
    club,
    diamond,
    heart
} suit_t;

// value each card holds
typedef enum rank {
    ace = 1,
    two,
    three,
    four,
    five,
    six,
    seven,
    eight,
    nine,
    ten,
    jack,
    king,
    queen
} rank_t;

class card {
  public:
    suit suit_;
    rank rank_;
    card();
    card(suit s, rank r);
    card& operator=(card &other);
    std::string format_card_str();
};

#endif