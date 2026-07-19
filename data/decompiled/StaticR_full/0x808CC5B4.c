/* Function at 0x808CC5B4, size=152 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_808CC5B4(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r3, 0 */ // 0x808CC5BC
    *(0x18 + r1) = r30; // stw @ 0x808CC5C8
    *(0x14 + r1) = r29; // stw @ 0x808CC5CC
    r3 = *(0 + r3); // lwz @ 0x808CC5D0
    r4 = *(0x26 + r3); // lbz @ 0x808CC5D4
    if (!=) goto 0x0x808cc5e4;
    /* li r4, 1 */ // 0x808CC5E0
    r0 = *(0x1764 + r3); // lwz @ 0x808CC5E4
    if (==) goto 0x0x808cc630;
    /* clrlwi r31, r4, 0x18 */ // 0x808CC5F0
    /* li r29, 0 */ // 0x808CC5F4
    /* lis r30, 0 */ // 0x808CC5F8
    /* b 0x808cc614 */ // 0x808CC5FC
    r3 = *(0 + r30); // lwz @ 0x808CC600
    r4 = r29;
    r3 = r3 + 0x34; // 0x808CC608
    FUN_8067F4D4(r4, r3); // bl 0x8067F4D4
    r29 = r29 + 1; // 0x808CC610
    if (<) goto 0x0x808cc600;
    /* lis r3, 0 */ // 0x808CC61C
    /* li r0, 0 */ // 0x808CC620
    r3 = *(0 + r3); // lwz @ 0x808CC624
    r3 = *(0x98 + r3); // lwz @ 0x808CC628
    *(0x3d0 + r3) = r0; // stb @ 0x808CC62C
    r0 = *(0x24 + r1); // lwz @ 0x808CC630
    r31 = *(0x1c + r1); // lwz @ 0x808CC634
    r30 = *(0x18 + r1); // lwz @ 0x808CC638
    r29 = *(0x14 + r1); // lwz @ 0x808CC63C
    return;
}