/* Function at 0x806ADD84, size=168 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_806ADD84(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r3, 0 */ // 0x806ADD8C
    *(0xc + r1) = r31; // stw @ 0x806ADD94
    *(8 + r1) = r30; // stw @ 0x806ADD98
    r3 = *(0 + r3); // lwz @ 0x806ADD9C
    r3 = *(0 + r3); // lwz @ 0x806ADDA0
    r30 = *(0x25c + r3); // lwz @ 0x806ADDA4
    if (!=) goto 0x0x806addb8;
    /* li r30, 0 */ // 0x806ADDB0
    /* b 0x806ade0c */ // 0x806ADDB4
    /* lis r31, 0 */ // 0x806ADDB8
    r31 = r31 + 0; // 0x806ADDBC
    if (==) goto 0x0x806ade08;
    r12 = *(0 + r30); // lwz @ 0x806ADDC4
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806ADDCC
    /* mtctr r12 */ // 0x806ADDD0
    /* bctrl  */ // 0x806ADDD4
    /* b 0x806addf0 */ // 0x806ADDD8
    if (!=) goto 0x0x806addec;
    /* li r0, 1 */ // 0x806ADDE4
    /* b 0x806addfc */ // 0x806ADDE8
    r3 = *(0 + r3); // lwz @ 0x806ADDEC
    if (!=) goto 0x0x806adddc;
    /* li r0, 0 */ // 0x806ADDF8
    if (==) goto 0x0x806ade08;
    /* b 0x806ade0c */ // 0x806ADE04
    /* li r30, 0 */ // 0x806ADE08
    r3 = r30;
    FUN_806642AC(r3); // bl 0x806642AC
    r0 = *(0x14 + r1); // lwz @ 0x806ADE14
    r31 = *(0xc + r1); // lwz @ 0x806ADE18
    r30 = *(8 + r1); // lwz @ 0x806ADE1C
    return;
}