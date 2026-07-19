/* Function at 0x806BD680, size=232 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_806BD680(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x806BD688
    *(0x18 + r1) = r30; // stw @ 0x806BD694
    *(0x14 + r1) = r29; // stw @ 0x806BD698
    r29 = r3;
    r3 = *(0 + r4); // lwz @ 0x806BD6A0
    r3 = *(0 + r3); // lwz @ 0x806BD6A4
    r30 = *(0x280 + r3); // lwz @ 0x806BD6A8
    if (!=) goto 0x0x806bd6bc;
    /* li r30, 0 */ // 0x806BD6B4
    /* b 0x806bd710 */ // 0x806BD6B8
    /* lis r31, 0 */ // 0x806BD6BC
    r31 = r31 + 0; // 0x806BD6C0
    if (==) goto 0x0x806bd70c;
    r12 = *(0 + r30); // lwz @ 0x806BD6C8
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806BD6D0
    /* mtctr r12 */ // 0x806BD6D4
    /* bctrl  */ // 0x806BD6D8
    /* b 0x806bd6f4 */ // 0x806BD6DC
    if (!=) goto 0x0x806bd6f0;
    /* li r0, 1 */ // 0x806BD6E8
    /* b 0x806bd700 */ // 0x806BD6EC
    r3 = *(0 + r3); // lwz @ 0x806BD6F0
    if (!=) goto 0x0x806bd6e0;
    /* li r0, 0 */ // 0x806BD6FC
    if (==) goto 0x0x806bd70c;
    /* b 0x806bd710 */ // 0x806BD708
    /* li r30, 0 */ // 0x806BD70C
    /* li r0, 1 */ // 0x806BD710
    *(0x247c + r30) = r0; // stw @ 0x806BD714
    r3 = r29;
    /* li r4, 0x9e */ // 0x806BD71C
    r12 = *(0 + r29); // lwz @ 0x806BD720
    /* li r5, 0 */ // 0x806BD724
    r12 = *(0x24 + r12); // lwz @ 0x806BD728
    /* mtctr r12 */ // 0x806BD72C
    /* bctrl  */ // 0x806BD730
    r3 = r29 + 0xc40; // 0x806BD734
    /* li r4, 0x1115 */ // 0x806BD738
    /* li r5, 0 */ // 0x806BD73C
    FUN_808D5A00(r3, r4, r5); // bl 0x808D5A00
    /* li r0, 3 */ // 0x806BD744
    *(0xdb8 + r29) = r0; // stw @ 0x806BD748
    r31 = *(0x1c + r1); // lwz @ 0x806BD74C
    r30 = *(0x18 + r1); // lwz @ 0x806BD750
    r29 = *(0x14 + r1); // lwz @ 0x806BD754
    r0 = *(0x24 + r1); // lwz @ 0x806BD758
    return;
}