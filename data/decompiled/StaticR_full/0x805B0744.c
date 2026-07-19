/* Function at 0x805B0744, size=132 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */

int FUN_805B0744(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* stmw r27, 0xc(r1) */ // 0x805B0750
    r27 = r4;
    r31 = r3;
    /* li r29, 8 */ // 0x805B075C
    r30 = r27;
    /* li r28, 0 */ // 0x805B0764
    *(0x51 + r3) = r5; // stb @ 0x805B0768
    *(0x90 + r3) = r4; // stw @ 0x805B076C
    r3 = *(0x94 + r31); // lwz @ 0x805B0770
    r12 = *(0 + r3); // lwz @ 0x805B0774
    r12 = *(0x10 + r12); // lwz @ 0x805B0778
    /* mtctr r12 */ // 0x805B077C
    /* bctrl  */ // 0x805B0780
    r4 = *(0 + r30); // lhz @ 0x805B0784
    r28 = r28 + 1; // 0x805B0788
    r5 = *(0x94 + r31); // lwz @ 0x805B078C
    r0 = r27 + r29; // 0x805B0790
    r3 = r4 * r3; // 0x805B0794
    *(4 + r5) = r0; // stw @ 0x805B079C
    r31 = r31 + 4; // 0x805B07A0
    r30 = r30 + 2; // 0x805B07A4
    *(0xc + r5) = r3; // stw @ 0x805B07A8
    r29 = r29 + r3; // 0x805B07AC
    if (<) goto 0x0x805b0770;
    r0 = *(0x24 + r1); // lwz @ 0x805B07B8
    return;
}