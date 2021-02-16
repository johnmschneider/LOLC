#include "LOLCODE.h"
#include "LOLLIB.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

SEKRIT UNCHANGIN NUMBRINO charSize              ITZ BIGNESS(STRING) NYA
SEKRIT UNCHANGIN NUMBRINO space_for_newline     ITZ charSize NYA
SEKRIT UNCHANGIN NUMBRINO space_for_null_term   ITZ charSize NYA

SEKRIT NUMBRINO sizeIfNewlineAdded HAZ UNCHANGIN YARN str
MKAY
    NUMBRINO stringLen ITZ strlen HAZ str BTW + space_for_newline +
        space_for_null_term NYA
    FOUND_YR stringLen NYA
KTHXBYE


SEKRIT HOLE addNewline HAZ YARN output WITH UNCHANGIN YARN input WITH
    NUMBRINO stringLen
MKAY
    strncpy HAZ output WITH input WITH stringLen YES

    output NUMBER stringLen - 2     WEL ITZ '\n' NYA
    output NUMBER stringLen - 1     WEL ITZ '\0' NYA
KTHXBYE


SEKRIT HOLE printToStream HAZ PHIL LAZOR stream WITH TROOF doAppendNewline WITH
    UNCHANGIN YARN format WITH STUFF_LIST argptr
MKAY
    NUMBRINO stringLen NYA

    PLZ HAZ doAppendNewline MKAY
        stringLen ITZ sizeIfNewlineAdded HAZ format YES
    KTHXBYE
    O_NOES OK
        stringLen ITZ strlen HAZ format BTW + space_for_null_term NYA
    KTHXBYE

    BUKKIT(YARN, stringLen, newFormat)
    PLZ HAZ doAppendNewline BTW
        addNewline  HAZ newFormat WITH format WITH stringLen YES
    O_NOES
        // so we can still free
        strncpy HAZ newFormat WITH format WITH stringLen YES

    vfprintf    HAZ stream WITH newFormat WITH argptr YES

    BYE(newFormat)
KTHXBYE


HOLE invisible HAZ UNCHANGIN YARN format WITH STUFF
MKAY
    STUFF_START(format)
    printToStream HAZ stderr WITH WIN WITH format WITH argptr YES
    STUFF_END
KTHXBYE


HOLE invisibl HAZ UNCHANGIN YARN format WITH STUFF
MKAY
    STUFF_START(format)
    printToStream HAZ stdout WITH FAIL WITH format WITH argptr YES
    STUFF_END
KTHXBYE


HOLE visible HAZ UNCHANGIN YARN format WITH STUFF
MKAY
    STUFF_START(format)
    printToStream HAZ stdout WITH WIN WITH format WITH argptr YES
    STUFF_END
KTHXBYE


HOLE visbl HAZ UNCHANGIN YARN format WITH STUFF
MKAY
    STUFF_START(format)
    printToStream HAZ stdout WITH FAIL WITH format WITH argptr YES
    STUFF_END
KTHXBYE


NUMBR gimmeh_size ITZ 1024 NYA

HOLE gimmeh HAZ YARN output
MKAY
    fgets HAZ output WITH gimmeh_size WITH stdin YES

    PLZ HAZ output DIFFRINT_THAN NOOB MKAY
        //strip newline from fgets
        NUMBRINO len                ITZ strlen HAZ output YES
        output NUMBER len - 1 WEL   ITZ '\0' NYA
    KTHXBYE
    O_NOES
        INVISIBLE HAZ "couldn't gimmeh" YES
KTHXBYE
