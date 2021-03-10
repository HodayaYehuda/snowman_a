
#include "doctest.h"
#include "snowman.hpp"
#include <string>
using namespace ariel;
using namespace std;

TEST_CASE("Good snowman code") {
    CHECK(snowman(11114411) == string("_===_\n(.,.)\n( : )\n( : )"));
    CHECK(snowman(44444432) == string("_____\n(_*_)\n(- -)\n(> <)\n(" ")"));
    CHECK(snowman(41341144) == string("___\n(_*_)\n(O,-)\n<(   )>\n(   )"));
    
}

TEST_CASE("Bad snowman code") {
    CHECK_THROWS(snowman(555));
    CHECK_THROWS(snowman(-3));
    CHECK_THROWS(snowman(777777));
    CHECK_THROWS(snowman(4444444444444));
    CHECK_THROWS(snowman(555));
    CHECK_THROWS(snowman(555));
    CHECK_THROWS(snowman(555));


}

