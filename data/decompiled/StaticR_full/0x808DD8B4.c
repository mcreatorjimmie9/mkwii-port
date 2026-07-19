/* Function at 0x808DD8B4, size=248 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r25 */

int FUN_808DD8B4(int r3, int r4)
{
    /* Stack frame: -48(r1) */
    /* saved r25 */
    /* li r0, 0 */ // 0x808DD8C0
    /* stmw r25, 0x14(r1) */ // 0x808DD8C4
    r27 = r3;
    /* li r29, 1 */ // 0x808DD8CC
    /* li r28, 0 */ // 0x808DD8D0
    /* li r31, 0 */ // 0x808DD8D4
    /* lis r26, 0 */ // 0x808DD8D8
    *(0x14c + r3) = r0; // stw @ 0x808DD8DC
    r4 = *(0xa0 + r3); // lwz @ 0x808DD8E0
    r3 = *(0 + r4); // lwz @ 0x808DD8E4
    r30 = *(0x2a + r3); // lha @ 0x808DD8E8
    /* b 0x808dd978 */ // 0x808DD8EC
    r3 = *(8 + r3); // lwz @ 0x808DD8F0
    /* lwzx r25, r3, r31 */ // 0x808DD8F4
    r12 = *(0 + r25); // lwz @ 0x808DD8F8
    r3 = r25;
    r12 = *(0x24 + r12); // lwz @ 0x808DD900
    /* mtctr r12 */ // 0x808DD904
    /* bctrl  */ // 0x808DD908
    /* clrlwi r0, r3, 0x10 */ // 0x808DD90C
    if (!=) goto 0x0x808dd934;
    r3 = *(0xa0 + r25); // lwz @ 0x808DD918
    r4 = r30 + 1; // 0x808DD91C
    r3 = *(0 + r3); // lwz @ 0x808DD920
    r0 = *(0x2a + r3); // lha @ 0x808DD924
    if (!=) goto 0x0x808dd934;
    *(0x14c + r27) = r25; // stw @ 0x808DD930
    r12 = *(0 + r25); // lwz @ 0x808DD934
    r3 = r25;
    r12 = *(0x24 + r12); // lwz @ 0x808DD93C
    /* mtctr r12 */ // 0x808DD940
    /* bctrl  */ // 0x808DD944
    /* clrlwi r0, r3, 0x10 */ // 0x808DD948
    if (!=) goto 0x0x808dd970;
    r3 = *(0xa0 + r25); // lwz @ 0x808DD954
    r4 = r30 + -1; // 0x808DD958
    r3 = *(0 + r3); // lwz @ 0x808DD95C
    r0 = *(0x2a + r3); // lha @ 0x808DD960
    if (!=) goto 0x0x808dd970;
    /* li r29, 0 */ // 0x808DD96C
    r31 = r31 + 4; // 0x808DD970
    r28 = r28 + 1; // 0x808DD974
    r3 = *(0 + r26); // lwz @ 0x808DD978
    r0 = *(4 + r3); // lhz @ 0x808DD97C
    if (<) goto 0x0x808dd8f0;
    if (==) goto 0x0x808dd998;
    /* li r0, 1 */ // 0x808DD990
    *(0x104 + r27) = r0; // stw @ 0x808DD994
    r0 = *(0x34 + r1); // lwz @ 0x808DD99C
    return;
}