/* Function at 0x80765794, size=232 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_80765794(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x807657A8
    r4 = *(0xc4 + r3); // lwz @ 0x807657AC
    r0 = *(0xb4 + r3); // lwz @ 0x807657B0
    if (!=) goto 0x0x807657fc;
    r0 = *(0xc8 + r3); // lwz @ 0x807657BC
    r3 = *(0xb0 + r3); // lwz @ 0x807657C0
    /* slwi r0, r0, 2 */ // 0x807657C4
    /* lwzx r3, r3, r0 */ // 0x807657C8
    r12 = *(0 + r3); // lwz @ 0x807657CC
    r12 = *(0xf0 + r12); // lwz @ 0x807657D0
    /* mtctr r12 */ // 0x807657D4
    /* bctrl  */ // 0x807657D8
    r3 = *(0xc8 + r31); // lwz @ 0x807657DC
    r0 = *(0xc0 + r31); // lwz @ 0x807657E0
    r3 = r3 + 1; // 0x807657E4
    *(0xc8 + r31) = r3; // stw @ 0x807657E8
    if (!=) goto 0x0x807657fc;
    /* li r0, 0 */ // 0x807657F4
    *(0xc8 + r31) = r0; // stw @ 0x807657F8
    r3 = *(0xb4 + r31); // lwz @ 0x807657FC
    r0 = *(0xb8 + r31); // lwz @ 0x80765800
    r4 = *(0xc4 + r31); // lwz @ 0x80765804
    r0 = r3 + r0; // 0x80765808
    if (!=) goto 0x0x80765858;
    r0 = *(0xc8 + r31); // lwz @ 0x80765814
    /* li r30, 0 */ // 0x80765818
    *(0xc4 + r31) = r30; // stw @ 0x8076581C
    r3 = *(0xb0 + r31); // lwz @ 0x80765820
    /* slwi r0, r0, 2 */ // 0x80765824
    /* lwzx r3, r3, r0 */ // 0x80765828
    r12 = *(0 + r3); // lwz @ 0x8076582C
    r12 = *(0xf0 + r12); // lwz @ 0x80765830
    /* mtctr r12 */ // 0x80765834
    /* bctrl  */ // 0x80765838
    r3 = *(0xc8 + r31); // lwz @ 0x8076583C
    r0 = *(0xc0 + r31); // lwz @ 0x80765840
    r3 = r3 + 1; // 0x80765844
    *(0xc8 + r31) = r3; // stw @ 0x80765848
    if (!=) goto 0x0x80765858;
    *(0xc8 + r31) = r30; // stw @ 0x80765854
    r3 = *(0xc4 + r31); // lwz @ 0x80765858
    r0 = r3 + 1; // 0x8076585C
    *(0xc4 + r31) = r0; // stw @ 0x80765860
    r31 = *(0xc + r1); // lwz @ 0x80765864
    r30 = *(8 + r1); // lwz @ 0x80765868
    r0 = *(0x14 + r1); // lwz @ 0x8076586C
    return;
}