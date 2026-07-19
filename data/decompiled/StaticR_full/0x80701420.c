/* Function at 0x80701420, size=120 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80701420(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8070142C
    r31 = r3;
    r0 = *(0x20 + r3); // lbz @ 0x80701434
    if (!=) goto 0x0x80701484;
    /* li r0, 0 */ // 0x80701440
    *(0x1c + r3) = r0; // stw @ 0x80701444
    r3 = *(0x758c + r3); // lwz @ 0x80701448
    r12 = *(0x18 + r3); // lwz @ 0x8070144C
    r12 = *(0xc + r12); // lwz @ 0x80701450
    /* mtctr r12 */ // 0x80701454
    /* bctrl  */ // 0x80701458
    if (!=) goto 0x0x80701470;
    /* li r0, 1 */ // 0x80701464
    *(0x20 + r31) = r0; // stb @ 0x80701468
    /* b 0x80701484 */ // 0x8070146C
    r3 = *(0x758c + r31); // lwz @ 0x80701470
    r0 = *(4 + r3); // lwz @ 0x80701474
    *(0x1c + r31) = r0; // stw @ 0x80701478
    FUN_805E3430(); // bl 0x805E3430
    /* b 0x80701488 */ // 0x80701480
    /* li r3, 0 */ // 0x80701484
    r0 = *(0x14 + r1); // lwz @ 0x80701488
    r31 = *(0xc + r1); // lwz @ 0x8070148C
}