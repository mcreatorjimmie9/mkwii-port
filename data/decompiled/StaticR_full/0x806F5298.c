/* Function at 0x806F5298, size=64 bytes */
/* Stack frame: 16 bytes */
/* Calls: 2 function(s) */

int FUN_806F5298(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* lis r3, 0 */ // 0x806F52A0
    *(0x14 + r1) = r0; // stw @ 0x806F52A4
    r0 = *(0 + r3); // lwz @ 0x806F52A8
    if (!=) goto 0x0x806f52dc;
    /* lis r3, 1 */ // 0x806F52B4
    r3 = r3 + -0x5ff8; // 0x806F52B8
    FUN_805E3430(r3, r3); // bl 0x805E3430
    if (==) goto 0x0x806f52d4;
    /* lis r4, 0 */ // 0x806F52C8
    r4 = *(0 + r4); // lwz @ 0x806F52CC
    FUN_806F5454(r4); // bl 0x806F5454
    /* lis r4, 0 */ // 0x806F52D4
}