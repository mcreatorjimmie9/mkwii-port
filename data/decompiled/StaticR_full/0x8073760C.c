/* Function at 0x8073760C, size=88 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8073760C(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0x18 + r1) = r30; // stw @ 0x8073761C
    r30 = r3;
    /* lfs f2, 0x6d8(r3) */ // 0x80737624
    /* lfs f0, 0x6d0(r3) */ // 0x80737628
    /* stfs f0, 8(r1) */ // 0x8073762C
    /* stfs f1, 0xc(r1) */ // 0x80737630
    /* stfs f2, 0x10(r1) */ // 0x80737634
    r31 = *(0x1f4 + r3); // lwz @ 0x80737638
    if (==) goto 0x0x807376e4;
    r3 = r31 + 0x74; // 0x80737644
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x8073765c;
    /* li r3, 0 */ // 0x80737654
    /* b 0x80737660 */ // 0x80737658
    r3 = *(0xc + r3); // lwz @ 0x8073765C
}