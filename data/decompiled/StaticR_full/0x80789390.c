/* Function at 0x80789390, size=84 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_80789390(int r3, int r4, int r5, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r7, 0 */ // 0x80789398
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x807893A8
    r30 = r3;
    *(0x14 + r1) = r29; // stw @ 0x807893B0
    *(0x10 + r1) = r28; // stw @ 0x807893B4
    *(0x1d0 + r3) = r4; // stw @ 0x807893B8
    *(0x1d4 + r3) = r6; // stb @ 0x807893BC
    r4 = *(0 + r4); // lwz @ 0x807893C0
    r3 = *(0 + r7); // lwz @ 0x807893C4
    r3 = *(0x100 + r3); // lwz @ 0x807893CC
    if (==) goto 0x0x807893dc;
    r4 = *(0x90 + r4); // lwz @ 0x807893D4
    /* b 0x807893e0 */ // 0x807893D8
    /* li r4, -1 */ // 0x807893DC
    FUN_805E3430(r4); // bl 0x805E3430
}