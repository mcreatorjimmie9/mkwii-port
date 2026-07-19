/* Function at 0x805DF090, size=76 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_805DF090(int r3)
{
    /* Stack frame: -16(r1) */
    /* lis r3, 0 */ // 0x805DF098
    *(0x14 + r1) = r0; // stw @ 0x805DF09C
    r3 = r3 + 0; // 0x805DF0A0
    r0 = *(0xa0 + r3); // lwz @ 0x805DF0A4
    if (==) goto 0x0x805df0d0;
    r0 = *(0xa4 + r3); // lbz @ 0x805DF0B0
    if (!=) goto 0x0x805df0d0;
    /* li r0, 0 */ // 0x805DF0BC
    *(0xa0 + r3) = r0; // stw @ 0x805DF0C0
    FUN_805E3430(); // bl 0x805E3430
    /* li r3, 1 */ // 0x805DF0C8
    /* b 0x805df0d4 */ // 0x805DF0CC
    /* li r3, 0 */ // 0x805DF0D0
    r0 = *(0x14 + r1); // lwz @ 0x805DF0D4
}