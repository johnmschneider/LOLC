#ifndef LOLCODE_H_INCLUDED
    #define LOLCODE_H_INCLUDED
    #define OK {
    #define KTHXBYE }
    #define WITH ,      // for use with function list
    #define YA ;
    #define HAZ (
    #define BTW )
    #define K HAZ HOLE BTW
    #define MKAY BTW OK
    #define UP ++
    #define DOWN --
    #define ITZ =
    #define YES BTW YA
    #define NOT_HERE extern
    #define NUMBER [
    #define WEL ]       // lolcats for well

    //  control structurs
    #define PLZ if
    #define O_NOES else
    #define IN_YR_LOOP for
    #define WIL while
    #define DID do
    #define GO_AWAY break YA
    #define SAME_THING continue YA

    #include <stdarg.h>
    #define STUFF ...
    #define STUFF_LIST va_list
    #define STUFF_START(nameOfLastParam) va_list argptr YA \
        va_start(argptr, nameOfLastParam) YA
    #define STUFF_END va_end(argptr) YA

    #define BIG long
    #define TINY short
    #define UNCHANGIN const
    #define BIGNESS sizeof

    #include <stdlib.h>
    #define LAZOR *
    #define NUMBR int
    #define NUMBRINO size_t
    #define NUMBAR float
    #define BIG_NUMBAR double;
    #define HOLE void
    #define OTHER_THING void
    #define BOX OTHER_THING LAZOR
    #define FOUND_YR return
    #define THING struct
    #define STRING char
    #define YARN STRING LAZOR
    #define NOOB NULL

    #include <stdbool.h>
    #define TROOF bool
    #define WIN true
    #define FAIL false

    //boolean logic
    #define AN &&
    #define OR ||
    #define NOT !
    #define BIGGR_THAN >
    #define KINDA_BIGGR_THAN >=
    #define SMALLR_THAN <
    #define KINDA_SMALLR_THAN <=
    #define SAEM_AZ ==
    #define DIFFRINT_THAN !=

    #define SEKRIT static   // for use with global func/var
    #define SAFED static    // for use in function, "saved"

    #define HAI NUMBR main HAZ NUMBR argc WITH STRING LAZOR LAZOR argv MKAY

    #define BOOP VISBL HAZ "%c" WITH 0x7 YES // bell character

    #define MAEK(var, type) ((type) var)
    #define KOOL_VAR(type, var) type var ITZ ((type) malloc(sizeof(type)));
    #define BUKKIT(type, elementLength, var) type var ITZ \
        ((type) malloc(sizeof(type) * elementLength));
    #define PHIL FILE
    #define BYE(var) free(var) YA

    #include "LOLLIB.h"
#endif // LOLCODE_H_INCLUDED
