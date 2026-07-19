/* Function at 0x807C397C, size=160 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_807C397C(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x807C3990
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x807C3998
    r29 = r3;
    r31 = *(4 + r3); // lwz @ 0x807C39A0
    if (==) goto 0x0x807c39d0;
    /* lis r3, 0 */ // 0x807C39A8
    r4 = r31 + -1; // 0x807C39AC
    r3 = *(0 + r3); // lwz @ 0x807C39B0
    FUN_807C03BC(r3, r4); // bl 0x807C03BC
    r4 = *(0x10 + r30); // lwz @ 0x807C39B8
    r4 = r4 + 1; // 0x807C39BC
    r0 = r4 / r31; // 0x807C39C0
    r0 = r0 * r31; // 0x807C39C4
    /* subf r4, r0, r4 */ // 0x807C39C8
    /* b 0x807c39e4 */ // 0x807C39CC
    /* lis r3, 0 */ // 0x807C39D0
    r4 = r31;
    r3 = *(0 + r3); // lwz @ 0x807C39D8
    FUN_807C03BC(r3, r4); // bl 0x807C03BC
    /* li r4, 0 */ // 0x807C39E0
    r3 = r4 + r3; // 0x807C39E4
    r0 = r3 / r31; // 0x807C39E8
    r0 = r0 * r31; // 0x807C39EC
    r31 = *(0x1c + r1); // lwz @ 0x807C39F0
    r30 = *(0x18 + r1); // lwz @ 0x807C39F4
    /* subf r3, r0, r3 */ // 0x807C39F8
    /* slwi r0, r3, 2 */ // 0x807C39FC
    r3 = r29 + r0; // 0x807C3A00
    r29 = *(0x14 + r1); // lwz @ 0x807C3A04
    r0 = *(0x24 + r1); // lwz @ 0x807C3A08
    r3 = *(0xc + r3); // lwz @ 0x807C3A0C
    return;
}