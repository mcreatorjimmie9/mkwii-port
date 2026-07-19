/* Function at 0x805EA868, size=132 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805EA868(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    r3 = *(0x1c + r3); // lwz @ 0x805EA870
    *(0x24 + r1) = r0; // stw @ 0x805EA874
    *(0x1c + r1) = r31; // stw @ 0x805EA878
    r31 = *(0x2c + r3); // lwz @ 0x805EA87C
    if (!=) goto 0x0x805ea8b4;
    /* lis r3, 0 */ // 0x805EA888
    /* lis r5, 0 */ // 0x805EA88C
    /* lis r6, 0 */ // 0x805EA890
    /* lis r7, 0 */ // 0x805EA894
    r3 = r3 + 0; // 0x805EA898
    r5 = r5 + 0; // 0x805EA89C
    r6 = r6 + 0; // 0x805EA8A0
    r7 = r7 + 0; // 0x805EA8A4
    /* li r4, 0x26 */ // 0x805EA8A8
    /* crclr cr1eq */ // 0x805EA8AC
    FUN_805E3430(r5, r6, r7, r4); // bl 0x805E3430
    r4 = *(0x20 + r31); // lhz @ 0x805EA8B4
    /* lis r0, 0x4330 */ // 0x805EA8B8
    *(8 + r1) = r0; // stw @ 0x805EA8BC
    /* lis r3, 0 */ // 0x805EA8C0
    /* xoris r0, r4, 0x8000 */ // 0x805EA8C4
    /* lfd f1, 0(r3) */ // 0x805EA8C8
    *(0xc + r1) = r0; // stw @ 0x805EA8CC
    r31 = *(0x1c + r1); // lwz @ 0x805EA8D0
    /* lfd f0, 8(r1) */ // 0x805EA8D4
    r0 = *(0x24 + r1); // lwz @ 0x805EA8D8
    /* fsubs f1, f0, f1 */ // 0x805EA8DC
    return;
}