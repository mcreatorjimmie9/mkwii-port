/* Function at 0x807FD6DC, size=120 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_807FD6DC(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x807FD6F0
    r31 = r31 + 0; // 0x807FD6F4
    *(0x18 + r1) = r30; // stw @ 0x807FD6F8
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x807FD700
    r29 = r3;
    if (==) goto 0x0x807fd780;
    /* lis r4, 0 */ // 0x807FD70C
    r4 = *(0 + r4); // lwz @ 0x807FD710
    r0 = *(0xb74 + r4); // lwz @ 0x807FD714
    if (!=) goto 0x0x807fd728;
    r0 = *(0xf1 + r31); // lbz @ 0x807FD720
    *(0xf0 + r31) = r0; // stb @ 0x807FD724
    /* li r4, -1 */ // 0x807FD728
    r3 = r3 + 0x164; // 0x807FD72C
    FUN_805E3430(r4, r3); // bl 0x805E3430
    if (==) goto 0x0x807fd770;
    /* lis r3, 0 */ // 0x807FD73C
    r3 = r3 + 0; // 0x807FD740
    *(0 + r29) = r3; // stw @ 0x807FD744
    r3 = *(0 + r31); // lwz @ 0x807FD748
    if (==) goto 0x0x807fd764;
}