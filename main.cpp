#include "deck.h"
#include <iostream>

int main() {
    deck_of_cards deck;
    deck.init_cards();
    deck.shuffle_cards();
    deck.show();

    return 0;
}