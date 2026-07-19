/* Function at 0x807E8624, size=148 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r21 */
/* Calls: 2 function(s) */

int FUN_807E8624(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -64(r1) */
    /* saved r21 */
    /* lis r5, 0 */ // 0x807E862C
    *(0x44 + r1) = r0; // stw @ 0x807E8630
    /* stmw r21, 0x14(r1) */ // 0x807E8634
    r29 = r5 + 0; // 0x807E8638
    r24 = r3;
    r25 = r4;
    r5 = r29 + 0xb6; // 0x807E8644
    FUN_8089F578(r5); // bl 0x8089F578
    /* lis r3, 0 */ // 0x807E864C
    /* lis r6, 0 */ // 0x807E8650
    /* li r0, 0 */ // 0x807E8654
    *(0xb4 + r24) = r0; // stw @ 0x807E8658
    r3 = r3 + 0; // 0x807E865C
    r6 = r6 + 0; // 0x807E8660
    *(0 + r24) = r3; // stw @ 0x807E8664
    r3 = r24 + 0xb0; // 0x807E8668
    /* li r4, 2 */ // 0x807E866C
    /* li r5, 0 */ // 0x807E8670
    *(0xb0 + r24) = r6; // stw @ 0x807E8674
    *(0xb8 + r24) = r0; // stw @ 0x807E8678
    r12 = *(0xb0 + r24); // lwz @ 0x807E867C
    r12 = *(0xc + r12); // lwz @ 0x807E8680
    /* mtctr r12 */ // 0x807E8684
    /* bctrl  */ // 0x807E8688
    /* lis r30, 0 */ // 0x807E868C
    /* lis r23, 0 */ // 0x807E8690
    r30 = r30 + 0; // 0x807E8694
    /* li r26, 0 */ // 0x807E8698
    r23 = r23 + 0; // 0x807E869C
    /* li r27, 0 */ // 0x807E86A0
    /* lis r31, 0 */ // 0x807E86A4
    /* li r21, 0x3c */ // 0x807E86A8
    /* li r22, 0x1e */ // 0x807E86AC
    /* li r3, 0x128 */ // 0x807E86B0
    FUN_805E3430(r3); // bl 0x805E3430
}