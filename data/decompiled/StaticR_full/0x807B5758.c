/* Function at 0x807B5758, size=96 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807B5758(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807B5764
    r31 = r3;
    r0 = *(6 + r3); // lbz @ 0x807B576C
    if (!=) goto 0x0x807b57a4;
    /* lis r3, 0 */ // 0x807B5778
    /* li r4, 0 */ // 0x807B577C
    r3 = *(0 + r3); // lwz @ 0x807B5780
    FUN_805C5788(r3, r4); // bl 0x805C5788
    if (==) goto 0x0x807b579c;
    /* li r0, 1 */ // 0x807B5790
    *(5 + r31) = r0; // stb @ 0x807B5794
    /* b 0x807b57a4 */ // 0x807B5798
    /* li r0, 0 */ // 0x807B579C
    *(5 + r31) = r0; // stb @ 0x807B57A0
    r0 = *(0x14 + r1); // lwz @ 0x807B57A4
    r31 = *(0xc + r1); // lwz @ 0x807B57A8
    return;
}