/* Function at 0x8090403C, size=20 bytes */
/* Stack frame: 528 bytes */
/* Calls: 1 function(s) */

void FUN_8090403C(void)
{
    /* Stack frame: -528(r1) */
    *(0x214 + r1) = r0; // stw @ 0x80904044
    FUN_805E3430(); // bl 0x805E3430
}