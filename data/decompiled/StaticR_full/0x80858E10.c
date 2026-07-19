/* Function at 0x80858E10, size=68 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_80858E10(int r3)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x80858E18
    r0 = *(0x147 + r3); // lbz @ 0x80858E1C
    if (==) goto 0x0x80858e48;
    r0 = *(0xd4 + r3); // lbz @ 0x80858E28
    if (==) goto 0x0x80858e48;
    r3 = *(0x2e4 + r3); // lwz @ 0x80858E34
    r3 = r3 + 0x18; // 0x80858E38
    FUN_805E3430(r3); // bl 0x805E3430
    /* li r3, 1 */ // 0x80858E40
    /* b 0x80858e4c */ // 0x80858E44
    /* li r3, 0 */ // 0x80858E48
    r0 = *(0x14 + r1); // lwz @ 0x80858E4C
}