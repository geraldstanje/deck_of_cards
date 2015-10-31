#include "card.h"
#include <algorithm>

card::card() {}

card::card(suit s, rank r): suit_(s), rank_(r) {}

card& card::operator=(card &other) {
    std::swap(rank_, other.rank_);
    std::swap(suit_, other.suit_);
    return *this;
}

std::string card::format_card_str() {
    return suit_str[suit_] + " " + rank_str[rank_];
};