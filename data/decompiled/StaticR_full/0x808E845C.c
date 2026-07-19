/* Function at 0x808E845C, size=92 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_808E845C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r5;
    *(0x14 + r1) = r29; // stw @ 0x808E8474
    r29 = r3;
    /* li r3, 0x7c */ // 0x808E847C
    r31 = *(0x143c + r4); // lwz @ 0x808E8480
    FUN_808E74E4(r3); // bl 0x808E74E4
    *(0x840 + r3) = r31; // stw @ 0x808E8488
    r3 = r29;
    r5 = r30;
    /* li r4, 0x7b */ // 0x808E8494
    FUN_808B38C8(r3, r5, r4); // bl 0x808B38C8
    r0 = *(0x24 + r1); // lwz @ 0x808E849C
    r31 = *(0x1c + r1); // lwz @ 0x808E84A0
    r30 = *(0x18 + r1); // lwz @ 0x808E84A4
    r29 = *(0x14 + r1); // lwz @ 0x808E84A8
    return;
}