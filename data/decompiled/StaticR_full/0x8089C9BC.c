/* Function at 0x8089C9BC, size=260 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_8089C9BC(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r7, 0 */ // 0x8089C9C4
    *(0xc + r1) = r31; // stw @ 0x8089C9CC
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8089C9D4
    r30 = r3;
    r6 = *(4 + r3); // lhz @ 0x8089C9DC
    /* b 0x8089ca04 */ // 0x8089C9E0
    r5 = *(8 + r3); // lwz @ 0x8089C9E4
    r0 = r7 rlwinm 2; // rlwinm
    /* lwzx r0, r5, r0 */ // 0x8089C9EC
    if (!=) goto 0x0x8089ca00;
    /* li r3, -1 */ // 0x8089C9F8
    /* b 0x8089caa8 */ // 0x8089C9FC
    r7 = r7 + 1; // 0x8089CA00
    /* clrlwi r0, r7, 0x10 */ // 0x8089CA04
    if (<) goto 0x0x8089c9e4;
    r12 = *(0 + r31); // lwz @ 0x8089CA10
    r3 = r31;
    r12 = *(0x2c + r12); // lwz @ 0x8089CA18
    /* mtctr r12 */ // 0x8089CA1C
    /* bctrl  */ // 0x8089CA20
    /* clrlwi. r0, r3, 0x1f */ // 0x8089CA24
    if (==) goto 0x0x8089ca44;
    r3 = *(0xc + r30); // lhz @ 0x8089CA2C
    r4 = *(0x10 + r30); // lwz @ 0x8089CA30
    /* slwi r0, r3, 2 */ // 0x8089CA34
    r3 = r3 + 1; // 0x8089CA38
    /* stwx r31, r4, r0 */ // 0x8089CA3C
    *(0xc + r30) = r3; // sth @ 0x8089CA40
    r12 = *(0 + r31); // lwz @ 0x8089CA44
    r3 = r31;
    r12 = *(0x2c + r12); // lwz @ 0x8089CA4C
    /* mtctr r12 */ // 0x8089CA50
    /* bctrl  */ // 0x8089CA54
    /* rlwinm. r0, r3, 0, 0x1e, 0x1e */ // 0x8089CA58
    if (==) goto 0x0x8089ca78;
    r3 = *(0x14 + r30); // lhz @ 0x8089CA60
    r4 = *(0x18 + r30); // lwz @ 0x8089CA64
    /* slwi r0, r3, 2 */ // 0x8089CA68
    r3 = r3 + 1; // 0x8089CA6C
    /* stwx r31, r4, r0 */ // 0x8089CA70
    *(0x14 + r30) = r3; // sth @ 0x8089CA74
    r0 = *(4 + r30); // lhz @ 0x8089CA78
    r3 = *(8 + r30); // lwz @ 0x8089CA7C
    /* slwi r0, r0, 2 */ // 0x8089CA80
    /* stwx r31, r3, r0 */ // 0x8089CA84
    r3 = *(4 + r30); // lhz @ 0x8089CA88
    r0 = r3 + 0x3e8; // 0x8089CA8C
    *(0xa4 + r31) = r0; // stw @ 0x8089CA90
    r3 = *(4 + r30); // lhz @ 0x8089CA94
    r0 = r3 + 1; // 0x8089CA98
    *(4 + r30) = r0; // sth @ 0x8089CA9C
    /* clrlwi r3, r0, 0x10 */ // 0x8089CAA0
    r3 = r3 + -1; // 0x8089CAA4
    r0 = *(0x14 + r1); // lwz @ 0x8089CAA8
    r31 = *(0xc + r1); // lwz @ 0x8089CAAC
    r30 = *(8 + r1); // lwz @ 0x8089CAB0
    return;
}