/* Function at 0x808AB820, size=268 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r27 */

int FUN_808AB820(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -48(r1) */
    /* saved r27 */
    /* extsh r0, r4 */ // 0x808AB82C
    /* stmw r27, 0x1c(r1) */ // 0x808AB830
    r27 = r3;
    /* slwi r30, r0, 1 */ // 0x808AB838
    /* li r29, 0 */ // 0x808AB83C
    /* li r31, 0 */ // 0x808AB840
    /* b 0x808ab90c */ // 0x808AB844
    r3 = *(0x1c + r27); // lwz @ 0x808AB848
    /* lwzx r28, r3, r31 */ // 0x808AB84C
    r12 = *(0 + r28); // lwz @ 0x808AB850
    r3 = r28;
    r12 = *(0x24 + r12); // lwz @ 0x808AB858
    /* mtctr r12 */ // 0x808AB85C
    /* bctrl  */ // 0x808AB860
    r5 = *(8 + r27); // lwz @ 0x808AB864
    r0 = r3 rlwinm 1; // rlwinm
    r3 = r28;
    r4 = *(0x10 + r5); // lwz @ 0x808AB870
    r5 = *(0xc + r5); // lwz @ 0x808AB874
    /* lhax r0, r4, r0 */ // 0x808AB878
    /* slwi r0, r0, 2 */ // 0x808AB87C
    /* lwzx r0, r5, r0 */ // 0x808AB880
    /* lhax r0, r30, r0 */ // 0x808AB884
    *(0xc + r1) = r0; // stw @ 0x808AB888
    r12 = *(0 + r28); // lwz @ 0x808AB88C
    r12 = *(0x24 + r12); // lwz @ 0x808AB890
    /* mtctr r12 */ // 0x808AB894
    /* bctrl  */ // 0x808AB898
    r4 = *(0xc + r27); // lwz @ 0x808AB89C
    r0 = r3 rlwinm 1; // rlwinm
    r3 = r28;
    r7 = *(0x10 + r4); // lwz @ 0x808AB8AC
    r8 = *(0xc + r4); // lwz @ 0x808AB8B4
    /* li r4, 0 */ // 0x808AB8B8
    /* lhax r0, r7, r0 */ // 0x808AB8BC
    /* slwi r0, r0, 2 */ // 0x808AB8C0
    /* lwzx r0, r8, r0 */ // 0x808AB8C4
    /* lhax r0, r30, r0 */ // 0x808AB8C8
    *(8 + r1) = r0; // stw @ 0x808AB8CC
    r12 = *(0 + r28); // lwz @ 0x808AB8D0
    r12 = *(0xbc + r12); // lwz @ 0x808AB8D4
    /* mtctr r12 */ // 0x808AB8D8
    /* bctrl  */ // 0x808AB8DC
    r12 = *(0 + r28); // lwz @ 0x808AB8E0
    r3 = r28;
    r5 = *(0xc + r1); // lwz @ 0x808AB8E8
    /* li r4, 0 */ // 0x808AB8EC
    r12 = *(0xc4 + r12); // lwz @ 0x808AB8F0
    /* li r7, 0 */ // 0x808AB8F4
    r6 = *(8 + r1); // lwz @ 0x808AB8F8
    /* mtctr r12 */ // 0x808AB8FC
    /* bctrl  */ // 0x808AB900
    r31 = r31 + 4; // 0x808AB904
    r29 = r29 + 1; // 0x808AB908
    r0 = *(0x18 + r27); // lhz @ 0x808AB90C
    if (<) goto 0x0x808ab848;
    r0 = *(0x34 + r1); // lwz @ 0x808AB91C
    return;
}