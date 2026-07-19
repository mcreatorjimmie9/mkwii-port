/* Function at 0x8080EA50, size=160 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8080EA50(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 0 */ // 0x8080EA58
    *(0xc + r1) = r31; // stw @ 0x8080EA60
    *(8 + r1) = r30; // stw @ 0x8080EA64
    r30 = r3;
    r31 = *(0xc0 + r3); // lwz @ 0x8080EA6C
    if (<) goto 0x0x8080ea88;
    r0 = *(0xb8 + r3); // lwz @ 0x8080EA78
    if (>=) goto 0x0x8080ea88;
    /* li r4, 1 */ // 0x8080EA84
    if (!=) goto 0x0x8080eaa0;
    r12 = *(0xb4 + r3); // lwzu @ 0x8080EA90
    r12 = *(0x18 + r12); // lwz @ 0x8080EA94
    /* mtctr r12 */ // 0x8080EA98
    /* bctrl  */ // 0x8080EA9C
    r3 = *(0xbc + r30); // lwz @ 0x8080EAA0
    /* slwi r0, r31, 2 */ // 0x8080EAA4
    /* lwzx r3, r3, r0 */ // 0x8080EAA8
    FUN_8080D97C(); // bl 0x8080D97C
    r4 = *(0xc0 + r30); // lwz @ 0x8080EAB0
    /* lis r3, 0 */ // 0x8080EAB4
    *(0xc4 + r30) = r4; // stw @ 0x8080EAB8
    r4 = r4 + 1; // 0x8080EABC
    *(0xc0 + r30) = r4; // stw @ 0x8080EAC0
    r0 = *(0 + r3); // lwz @ 0x8080EAC4
    if (!=) goto 0x0x8080ead8;
    /* li r0, 0 */ // 0x8080EAD0
    *(0xc0 + r30) = r0; // stw @ 0x8080EAD4
    r0 = *(0x14 + r1); // lwz @ 0x8080EAD8
    r31 = *(0xc + r1); // lwz @ 0x8080EADC
    r30 = *(8 + r1); // lwz @ 0x8080EAE0
    return;
}