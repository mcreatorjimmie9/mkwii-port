/* Function at 0x807C568C, size=176 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_807C568C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807C56A0
    r30 = r3;
    r3 = r31;
    FUN_807B5EBC(r3); // bl 0x807B5EBC
    if (==) goto 0x0x807c56f0;
    r3 = *(0x10 + r31); // lwz @ 0x807C56B8
    r0 = *(0x178 + r30); // lwz @ 0x807C56BC
    r3 = *(0x144 + r3); // lwz @ 0x807C56C0
    /* slwi r0, r0, 3 */ // 0x807C56C4
    r12 = *(0x34 + r3); // lwz @ 0x807C56C8
    r31 = r30 + r0; // 0x807C56CC
    r12 = *(0x3c + r12); // lwz @ 0x807C56D0
    /* mtctr r12 */ // 0x807C56D4
    /* bctrl  */ // 0x807C56D8
    *(0xe8 + r31) = r3; // stw @ 0x807C56DC
    r3 = *(0x178 + r30); // lwz @ 0x807C56E0
    r0 = r3 + 1; // 0x807C56E4
    *(0x178 + r30) = r0; // stw @ 0x807C56E8
    /* b 0x807c5724 */ // 0x807C56EC
    r3 = *(0x10 + r31); // lwz @ 0x807C56F0
    r0 = *(0x17c + r30); // lwz @ 0x807C56F4
    r3 = *(0x144 + r3); // lwz @ 0x807C56F8
    /* slwi r0, r0, 3 */ // 0x807C56FC
    r12 = *(0x34 + r3); // lwz @ 0x807C5700
    r31 = r30 + r0; // 0x807C5704
    r12 = *(0x3c + r12); // lwz @ 0x807C5708
    /* mtctr r12 */ // 0x807C570C
    /* bctrl  */ // 0x807C5710
    *(0x148 + r31) = r3; // stw @ 0x807C5714
    r3 = *(0x17c + r30); // lwz @ 0x807C5718
    r0 = r3 + 1; // 0x807C571C
    *(0x17c + r30) = r0; // stw @ 0x807C5720
    r0 = *(0x14 + r1); // lwz @ 0x807C5724
    r31 = *(0xc + r1); // lwz @ 0x807C5728
    r30 = *(8 + r1); // lwz @ 0x807C572C
    return;
}