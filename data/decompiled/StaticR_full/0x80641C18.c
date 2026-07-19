/* Function at 0x80641C18, size=260 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_80641C18(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* cntlzw r0, r5 */ // 0x80641C28
    *(0xc + r1) = r31; // stw @ 0x80641C2C
    /* srwi r31, r0, 5 */ // 0x80641C30
    *(8 + r1) = r30; // stw @ 0x80641C34
    r30 = r4;
    if (!=) goto 0x0x80641cb0;
    r12 = *(0 + r30); // lwz @ 0x80641C40
    r3 = r30;
    r5 = r31;
    /* li r4, 2 */ // 0x80641C4C
    r12 = *(0x20 + r12); // lwz @ 0x80641C50
    /* mtctr r12 */ // 0x80641C54
    /* bctrl  */ // 0x80641C58
    r12 = *(0 + r30); // lwz @ 0x80641C5C
    r3 = r30;
    r5 = r31;
    /* li r4, 3 */ // 0x80641C68
    r12 = *(0x20 + r12); // lwz @ 0x80641C6C
    /* mtctr r12 */ // 0x80641C70
    /* bctrl  */ // 0x80641C74
    r12 = *(0 + r30); // lwz @ 0x80641C78
    r3 = r30;
    r5 = r31;
    /* li r4, 4 */ // 0x80641C84
    r12 = *(0x20 + r12); // lwz @ 0x80641C88
    /* mtctr r12 */ // 0x80641C8C
    /* bctrl  */ // 0x80641C90
    r12 = *(0 + r30); // lwz @ 0x80641C94
    r3 = r30;
    r5 = r31;
    /* li r4, 8 */ // 0x80641CA0
    r12 = *(0x20 + r12); // lwz @ 0x80641CA4
    /* mtctr r12 */ // 0x80641CA8
    /* bctrl  */ // 0x80641CAC
    r12 = *(0 + r30); // lwz @ 0x80641CB0
    r3 = r30;
    r5 = r31;
    /* li r4, 5 */ // 0x80641CBC
    r12 = *(0x20 + r12); // lwz @ 0x80641CC0
    /* mtctr r12 */ // 0x80641CC4
    /* bctrl  */ // 0x80641CC8
    r12 = *(0 + r30); // lwz @ 0x80641CCC
    r3 = r30;
    r5 = r31;
    /* li r4, 6 */ // 0x80641CD8
    r12 = *(0x20 + r12); // lwz @ 0x80641CDC
    /* mtctr r12 */ // 0x80641CE0
    /* bctrl  */ // 0x80641CE4
    r12 = *(0 + r30); // lwz @ 0x80641CE8
    r3 = r30;
    r5 = r31;
    /* li r4, 7 */ // 0x80641CF4
    r12 = *(0x20 + r12); // lwz @ 0x80641CF8
    /* mtctr r12 */ // 0x80641CFC
    /* bctrl  */ // 0x80641D00
    r0 = *(0x14 + r1); // lwz @ 0x80641D04
    r31 = *(0xc + r1); // lwz @ 0x80641D08
    r30 = *(8 + r1); // lwz @ 0x80641D0C
    return;
}