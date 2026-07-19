/* Function at 0x8078877C, size=140 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8078877C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r5, 0 */ // 0x80788784
    /* li r6, 0 */ // 0x80788788
    *(0x14 + r1) = r0; // stw @ 0x8078878C
    /* li r0, 2 */ // 0x80788790
    *(0xc + r1) = r31; // stw @ 0x80788794
    r31 = r3;
    r4 = r31;
    /* mtctr r0 */ // 0x807887A0
    r0 = *(0x14 + r4); // lwz @ 0x807887A4
    if (!=) goto 0x0x807887c0;
    /* slwi r0, r6, 2 */ // 0x807887B0
    r4 = r3 + r0; // 0x807887B4
    r5 = r4 + 0x14; // 0x807887B8
    /* b 0x807887cc */ // 0x807887BC
    r4 = r4 + 4; // 0x807887C0
    r6 = r6 + 1; // 0x807887C4
    if (counter-- != 0) goto 0x0x807887a4;
    if (!=) goto 0x0x807887f0;
    r3 = *(0x20 + r3); // lwz @ 0x807887D4
    r3 = *(0 + r3); // lwz @ 0x807887D8
    if (==) goto 0x0x807887ec;
    /* li r4, 0 */ // 0x807887E4
    FUN_805E3430(r4); // bl 0x805E3430
    r5 = *(0x20 + r31); // lwz @ 0x807887EC
    r31 = *(0xc + r1); // lwz @ 0x807887F0
    r3 = r5;
    r0 = *(0x14 + r1); // lwz @ 0x807887F8
    return;
}