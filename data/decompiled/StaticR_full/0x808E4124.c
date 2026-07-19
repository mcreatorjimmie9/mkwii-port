/* Function at 0x808E4124, size=152 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_808E4124(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r0 = r4 rlwinm 4; // rlwinm
    r31 = r3 + r0; // 0x808E4138
    *(0x18 + r1) = r30; // stw @ 0x808E413C
    /* li r30, 0 */ // 0x808E4140
    *(0x14 + r1) = r29; // stw @ 0x808E4144
    r29 = r5;
    *(0x10 + r1) = r28; // stw @ 0x808E414C
    r28 = r3;
    *(0x12 + r31) = r5; // stb @ 0x808E4154
    /* b 0x808e4180 */ // 0x808E4158
    /* clrlwi r0, r30, 0x18 */ // 0x808E415C
    r3 = *(8 + r31); // lwz @ 0x808E4160
    /* mulli r0, r0, 0x2c */ // 0x808E4164
    r4 = r29;
    /* lwzux r12, r3, r0 */ // 0x808E416C
    r12 = *(0x14 + r12); // lwz @ 0x808E4170
    /* mtctr r12 */ // 0x808E4174
    /* bctrl  */ // 0x808E4178
    r30 = r30 + 1; // 0x808E417C
    r0 = *(0x11 + r31); // lbz @ 0x808E4180
    if (==) goto 0x0x808e419c;
    r0 = *(4 + r28); // lbz @ 0x808E418C
    /* clrlwi r3, r30, 0x18 */ // 0x808E4190
    if (<) goto 0x0x808e415c;
    r0 = *(0x24 + r1); // lwz @ 0x808E419C
    r31 = *(0x1c + r1); // lwz @ 0x808E41A0
    r30 = *(0x18 + r1); // lwz @ 0x808E41A4
    r29 = *(0x14 + r1); // lwz @ 0x808E41A8
    r28 = *(0x10 + r1); // lwz @ 0x808E41AC
    return;
}