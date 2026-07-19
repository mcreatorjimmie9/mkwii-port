/* Function at 0x808D377C, size=88 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_808D377C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x808D3790
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x808D3798
    r29 = r3;
    /* li r3, 0x7b */ // 0x808D37A0
    FUN_808E8D24(r3); // bl 0x808E8D24
    r4 = r29;
    r5 = r30;
    r6 = r31;
    FUN_808E8F10(r3, r4, r5, r6); // bl 0x808E8F10
    r0 = *(0x24 + r1); // lwz @ 0x808D37B8
    r31 = *(0x1c + r1); // lwz @ 0x808D37BC
    r30 = *(0x18 + r1); // lwz @ 0x808D37C0
    r29 = *(0x14 + r1); // lwz @ 0x808D37C4
    return;
}