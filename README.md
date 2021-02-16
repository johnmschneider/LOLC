# LOLC
 A sort of "port" of the LOLCODE language to C using macros. Don't do this in production code.

 This also by no means represents code that I consider production quality. It's just for fun!

## Using LOLC
### Installation 
 Since the entire project is only 3 files long I figured it would be more hastle to compile it to a DLL and try to link it. It's all valid standards-compliant C as far as I know, but there's a *lot* of macros.

 To use the library simply copy the 3 files in this repository's "src" folder to your project and then `#include "LOLCODE.h"`

 *Example program*
 ```c
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
 ```