/* Function at 0x807FD584, size=112 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807FD584(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r3, 0 */ // 0x807FD58C
    *(0x14 + r1) = r0; // stw @ 0x807FD590
    *(0xc + r1) = r31; // stw @ 0x807FD594
    r31 = *(0 + r3); // lwz @ 0x807FD598
    if (==) goto 0x0x807fd628;
    /* li r0, 0 */ // 0x807FD5A4
    *(0 + r3) = r0; // stw @ 0x807FD5A8
    if (==) goto 0x0x807fd628;
    /* lis r3, 0 */ // 0x807FD5B0
    r3 = *(0 + r3); // lwz @ 0x807FD5B4
    r0 = *(0xb74 + r3); // lwz @ 0x807FD5B8
    if (!=) goto 0x0x807fd5d4;
    /* lis r4, 0 */ // 0x807FD5C4
    /* lis r3, 0 */ // 0x807FD5C8
    r0 = *(0 + r4); // lbz @ 0x807FD5CC
    *(0 + r3) = r0; // stb @ 0x807FD5D0
    r3 = r31 + 0x164; // 0x807FD5D4
    /* li r4, -1 */ // 0x807FD5D8
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    if (==) goto 0x0x807fd620;
    /* lis r3, 0 */ // 0x807FD5E8
    /* lis r4, 0 */ // 0x807FD5EC
    r3 = r3 + 0; // 0x807FD5F0
}