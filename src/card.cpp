#include "card.h"

card::card() {}

card::card(suit s, rank r): suit_(s), rank_(r) {}

std::string card::format_card_str() {
    return suit_str[suit_] + " " + rank_str[rank_];
};