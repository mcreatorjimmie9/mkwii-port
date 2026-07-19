/* Function at 0x8064A340, size=68 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_8064A340(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* li r4, 1 */ // 0x8064A348
    r3 = r3 + 0x98; // 0x8064A34C
    *(0x14 + r1) = r0; // stw @ 0x8064A350
    FUN_8069F4B0(r4, r3); // bl 0x8069F4B0
    r0 = *(0x38 + r3); // lwz @ 0x8064A358
    /* li r3, 0 */ // 0x8064A35C
    if (==) goto 0x0x8064a370;
    if (!=) goto 0x0x8064a374;
    /* li r3, 1 */ // 0x8064A370
    r0 = *(0x14 + r1); // lwz @ 0x8064A374
    return;
}