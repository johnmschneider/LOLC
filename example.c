#include "LOLCODE.h"

HAI
    VISIBLE HAZ "hello world" YES

    NUMBR one ITZ 1 NYA

    PLZ HAZ one SAEM_AZ 1 MKAY
        VISIBLE HAZ "the world makes sense" YES
        INVISIBLE HAZ "but i still have to test stderr\n" YES
    KTHXBYE
    O_NOES PLZ HAZ one DIFFRINT_THAN 1 MKAY
        INVISIBLE HAZ "how did this happen? probably macro expansion" YES
        FOUND_YR 1 NYA
    KTHXBYE

    BOOP
    VISIBLE HAZ "entering test loop (q + enter to exit)" YES

    STRING firstChar NYA
    TROOF doLoop ITZ WIN NYA

    WIL HAZ doLoop MKAY
        VISIBLE HAZ "say something to repeat\n" YES
        VISBL HAZ "> " YES
        GIMMEH(thingToRepeat)
        firstChar ITZ thingToRepeat NUMBER 0 WEL NYA

        PLZ HAZ firstChar SAEM_AZ 'Q' OR firstChar SAEM_AZ 'q' BTW
            doLoop ITZ FAIL NYA
        O_NOES OK
            VISIBLE HAZ "you said \"%s\"" WITH thingToRepeat YES
            VISIBLE HAZ "counting to 5" YES

            IN_YR_LOOP HAZ NUMBR i ITZ 0 NYA i SMALLR_THAN 5 NYA i UP MKAY
                PLZ HAZ i SAEM_AZ 4 MKAY
                    VISIBLE HAZ "I lied it's 4\n" YES
                    GO_AWAY
                KTHXBYE
            KTHXBYE
        KTHXBYE
    KTHXBYE

    FOUND_YR 0 NYA
KTHXBYE
