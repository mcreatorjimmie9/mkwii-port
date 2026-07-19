/* Function at 0x805F2CA0, size=232 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r25 */

int FUN_805F2CA0(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r25 */
    /* stmw r25, 0x14(r1) */ // 0x805F2CAC
    r26 = r3;
    r27 = r4;
    /* li r28, 0 */ // 0x805F2CB8
    r31 = r26;
    /* li r29, 0 */ // 0x805F2CC0
    r30 = r27;
    r0 = *(0x54 + r26); // lwz @ 0x805F2CC8
    r3 = *(0x14 + r30); // lwz @ 0x805F2CCC
    r0 = *(0x24 + r27); // lwz @ 0x805F2CD4
    r25 = *(0x28 + r31); // lwz @ 0x805F2CD8
    r5 = *(0 + r3); // lwz @ 0x805F2CDC
    if (==) goto 0x0x805f2d40;
    if (<) goto 0x0x805f2d40;
    /* clrlwi r0, r0, 0x18 */ // 0x805F2CEC
    r3 = *(0x3c + r26); // lwz @ 0x805F2CF0
    /* mulli r0, r0, 0xc */ // 0x805F2CF4
    r3 = *(0 + r3); // lwz @ 0x805F2CF8
    r3 = r3 + r0; // 0x805F2CFC
    r0 = *(4 + r3); // lbz @ 0x805F2D00
    if (==) goto 0x0x805f2d40;
    r0 = *(8 + r3); // lwz @ 0x805F2D0C
    r3 = *(0x80 + r26); // lwz @ 0x805F2D10
    /* slwi r0, r0, 2 */ // 0x805F2D14
    /* lwzx r0, r3, r0 */ // 0x805F2D18
    r3 = r0 + r29; // 0x805F2D1C
    r25 = *(4 + r3); // lwz @ 0x805F2D20
    r12 = *(0 + r25); // lwz @ 0x805F2D24
    r3 = r25;
    r4 = *(0xe4 + r25); // lwz @ 0x805F2D2C
    r12 = *(0x34 + r12); // lwz @ 0x805F2D30
    /* mtctr r12 */ // 0x805F2D34
    /* bctrl  */ // 0x805F2D38
    /* b 0x805f2d58 */ // 0x805F2D3C
    r12 = *(0 + r25); // lwz @ 0x805F2D40
    r3 = r25;
    r4 = *(0xe4 + r25); // lwz @ 0x805F2D48
    r12 = *(0x34 + r12); // lwz @ 0x805F2D4C
    /* mtctr r12 */ // 0x805F2D50
    /* bctrl  */ // 0x805F2D54
    r28 = r28 + 1; // 0x805F2D58
    *(0x1c + r30) = r25; // stw @ 0x805F2D5C
    r31 = r31 + 4; // 0x805F2D64
    r30 = r30 + 4; // 0x805F2D68
    r29 = r29 + 4; // 0x805F2D6C
    if (<) goto 0x0x805f2cc8;
    r0 = *(0x34 + r1); // lwz @ 0x805F2D78
    return;
}