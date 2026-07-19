/* Function at 0x806ADE2C, size=328 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 4 function(s) */

int FUN_806ADE2C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r31, 0 */ // 0x806ADE3C
    *(0x14 + r1) = r29; // stw @ 0x806ADE44
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x806ADE4C
    r28 = r3;
    r3 = *(0 + r31); // lwz @ 0x806ADE54
    r3 = *(0 + r3); // lwz @ 0x806ADE58
    r3 = *(0x404 + r3); // lwz @ 0x806ADE5C
    FUN_80659444(); // bl 0x80659444
    if (<=) goto 0x0x806ade8c;
    /* li r0, 0x96 */ // 0x806ADE6C
    *(0xf30 + r28) = r0; // stw @ 0x806ADE70
    r3 = r29;
    FUN_8064A384(r3); // bl 0x8064A384
    r3 = r28;
    /* li r4, 0 */ // 0x806ADE80
    FUN_80671C48(r3, r3, r4); // bl 0x80671C48
    /* b 0x806adf54 */ // 0x806ADE88
    r3 = *(0 + r31); // lwz @ 0x806ADE8C
    r3 = *(0 + r3); // lwz @ 0x806ADE90
    r30 = *(0x13c + r3); // lwz @ 0x806ADE94
    if (!=) goto 0x0x806adea8;
    /* li r30, 0 */ // 0x806ADEA0
    /* b 0x806adefc */ // 0x806ADEA4
    /* lis r31, 0 */ // 0x806ADEA8
    r31 = r31 + 0; // 0x806ADEAC
    if (==) goto 0x0x806adef8;
    r12 = *(0 + r30); // lwz @ 0x806ADEB4
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806ADEBC
    /* mtctr r12 */ // 0x806ADEC0
    /* bctrl  */ // 0x806ADEC4
    /* b 0x806adee0 */ // 0x806ADEC8
    if (!=) goto 0x0x806adedc;
    /* li r0, 1 */ // 0x806ADED4
    /* b 0x806adeec */ // 0x806ADED8
    r3 = *(0 + r3); // lwz @ 0x806ADEDC
    if (!=) goto 0x0x806adecc;
    /* li r0, 0 */ // 0x806ADEE8
    if (==) goto 0x0x806adef8;
    /* b 0x806adefc */ // 0x806ADEF4
    /* li r30, 0 */ // 0x806ADEF8
    r12 = *(0 + r30); // lwz @ 0x806ADEFC
    r3 = r30;
    r12 = *(0x64 + r12); // lwz @ 0x806ADF04
    /* mtctr r12 */ // 0x806ADF08
    /* bctrl  */ // 0x806ADF0C
    r12 = *(0 + r30); // lwz @ 0x806ADF10
    r3 = r30;
    /* li r4, 0xfa8 */ // 0x806ADF18
    /* li r5, 0 */ // 0x806ADF1C
    r12 = *(0x68 + r12); // lwz @ 0x806ADF20
    /* mtctr r12 */ // 0x806ADF24
    /* bctrl  */ // 0x806ADF28
    r12 = *(0 + r28); // lwz @ 0x806ADF2C
    r3 = r28;
    /* li r4, 0x4d */ // 0x806ADF34
    /* li r5, 0 */ // 0x806ADF38
    r12 = *(0x24 + r12); // lwz @ 0x806ADF3C
    /* mtctr r12 */ // 0x806ADF40
    /* bctrl  */ // 0x806ADF44
    r3 = r29;
    /* li r4, 0 */ // 0x806ADF4C
    FUN_8064A82C(r3, r4); // bl 0x8064A82C
    r0 = *(0x24 + r1); // lwz @ 0x806ADF54
    r31 = *(0x1c + r1); // lwz @ 0x806ADF58
    r30 = *(0x18 + r1); // lwz @ 0x806ADF5C
    r29 = *(0x14 + r1); // lwz @ 0x806ADF60
    r28 = *(0x10 + r1); // lwz @ 0x806ADF64
    return;
}