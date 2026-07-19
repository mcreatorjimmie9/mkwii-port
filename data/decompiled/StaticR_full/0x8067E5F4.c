/* Function at 0x8067E5F4, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8067E5F4(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8067E600
    r31 = r3;
    /* li r3, 0x6e */ // 0x8067E608
    FUN_808BA42C(r3); // bl 0x808BA42C
    r12 = *(0 + r31); // lwz @ 0x8067E610
    r3 = r31;
    /* li r4, 0x6e */ // 0x8067E618
    /* li r5, 0 */ // 0x8067E61C
    r12 = *(0x24 + r12); // lwz @ 0x8067E620
    /* mtctr r12 */ // 0x8067E624
    /* bctrl  */ // 0x8067E628
    r0 = *(0x14 + r1); // lwz @ 0x8067E62C
    r31 = *(0xc + r1); // lwz @ 0x8067E630
    return;
}