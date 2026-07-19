/* Function at 0x807EFF90, size=196 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_807EFF90(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x807EFFA0
    r31 = r5;
    *(8 + r1) = r30; // stw @ 0x807EFFA8
    r30 = r3;
    if (==) goto 0x0x807effbc;
    if (!=) goto 0x0x807f0038;
    r3 = *(0xb8 + r3); // lwz @ 0x807EFFBC
    r12 = *(0 + r3); // lwz @ 0x807EFFC0
    r12 = *(0xc + r12); // lwz @ 0x807EFFC4
    /* mtctr r12 */ // 0x807EFFC8
    /* bctrl  */ // 0x807EFFCC
    r3 = *(0xb8 + r30); // lwz @ 0x807EFFD0
    r4 = r30 + 0x30; // 0x807EFFD4
    r12 = *(0 + r3); // lwz @ 0x807EFFD8
    r12 = *(0x74 + r12); // lwz @ 0x807EFFDC
    /* mtctr r12 */ // 0x807EFFE0
    /* bctrl  */ // 0x807EFFE4
    r3 = *(0xb8 + r30); // lwz @ 0x807EFFE8
    r12 = *(0 + r3); // lwz @ 0x807EFFEC
    r12 = *(0x80 + r12); // lwz @ 0x807EFFF0
    /* mtctr r12 */ // 0x807EFFF4
    /* bctrl  */ // 0x807EFFF8
    /* li r0, 2 */ // 0x807EFFFC
    *(0xb0 + r30) = r0; // stw @ 0x807F0000
    r3 = r30;
    /* li r4, 0 */ // 0x807F0008
    r12 = *(0 + r30); // lwz @ 0x807F000C
    r12 = *(0x68 + r12); // lwz @ 0x807F0010
    /* mtctr r12 */ // 0x807F0014
    /* bctrl  */ // 0x807F0018
    r12 = *(0 + r30); // lwz @ 0x807F001C
    r3 = r30;
    r12 = *(0x90 + r12); // lwz @ 0x807F0024
    /* mtctr r12 */ // 0x807F0028
    /* bctrl  */ // 0x807F002C
    /* li r0, 1 */ // 0x807F0030
    *(0xb5 + r30) = r0; // stb @ 0x807F0034
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x807F003C
    r30 = *(8 + r1); // lwz @ 0x807F0040
    r0 = *(0x14 + r1); // lwz @ 0x807F0044
    return;
}