/* Function at 0x808021E0, size=216 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_808021E0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r31, 0 */ // 0x808021F0
    *(8 + r1) = r30; // stw @ 0x808021F4
    r30 = r3;
    r12 = *(0 + r3); // lwz @ 0x808021FC
    r12 = *(0x30 + r12); // lwz @ 0x80802200
    /* mtctr r12 */ // 0x80802204
    /* bctrl  */ // 0x80802208
    /* lis r4, 0x101 */ // 0x8080220C
    r0 = *(0x20 + r3); // lwz @ 0x80802210
    r3 = r4 + 0x101; // 0x80802214
    /* andc. r0, r3, r0 */ // 0x80802218
    if (!=) goto 0x0x80802238;
    /* lis r3, 0 */ // 0x80802220
    r3 = *(0 + r3); // lwz @ 0x80802224
    FUN_8070D8D8(r3, r3); // bl 0x8070D8D8
    if (==) goto 0x0x80802238;
    /* li r31, 1 */ // 0x80802234
    if (!=) goto 0x0x8080228c;
    r3 = *(0xb4 + r30); // lwz @ 0x80802240
    r12 = *(0 + r3); // lwz @ 0x80802244
    r12 = *(0xc + r12); // lwz @ 0x80802248
    /* mtctr r12 */ // 0x8080224C
    /* bctrl  */ // 0x80802250
    r3 = r30;
    FUN_808A1BCC(r3); // bl 0x808A1BCC
    r3 = *(0xb4 + r30); // lwz @ 0x8080225C
    r4 = r30 + 0x58; // 0x80802260
    r12 = *(0 + r3); // lwz @ 0x80802264
    r12 = *(0x78 + r12); // lwz @ 0x80802268
    /* mtctr r12 */ // 0x8080226C
    /* bctrl  */ // 0x80802270
    r3 = *(0xb4 + r30); // lwz @ 0x80802274
    r12 = *(0 + r3); // lwz @ 0x80802278
    r12 = *(0x80 + r12); // lwz @ 0x8080227C
    /* mtctr r12 */ // 0x80802280
    /* bctrl  */ // 0x80802284
    /* b 0x808022a0 */ // 0x80802288
    r3 = *(0xb4 + r30); // lwz @ 0x8080228C
    r12 = *(0 + r3); // lwz @ 0x80802290
    r12 = *(0x10 + r12); // lwz @ 0x80802294
    /* mtctr r12 */ // 0x80802298
    /* bctrl  */ // 0x8080229C
    r0 = *(0x14 + r1); // lwz @ 0x808022A0
    r31 = *(0xc + r1); // lwz @ 0x808022A4
    r30 = *(8 + r1); // lwz @ 0x808022A8
    return;
}