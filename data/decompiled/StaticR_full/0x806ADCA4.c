/* Function at 0x806ADCA4, size=224 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_806ADCA4(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x806ADCB4
    r30 = r3;
    r0 = *(0x10 + r3); // lwz @ 0x806ADCBC
    if (!=) goto 0x0x806adce4;
    /* li r4, 0 */ // 0x806ADCC8
    r3 = r3 + 0x230; // 0x806ADCCC
    FUN_80649EEC(r4, r3); // bl 0x80649EEC
    r3 = r30 + 0xb98; // 0x806ADCD4
    /* li r4, 0x10dd */ // 0x806ADCD8
    /* li r5, 0 */ // 0x806ADCDC
    FUN_808D5A00(r3, r3, r4, r5); // bl 0x808D5A00
    /* li r0, -1 */ // 0x806ADCE4
    *(0xf30 + r30) = r0; // stw @ 0x806ADCE8
    /* lis r3, 0 */ // 0x806ADCEC
    r3 = *(0 + r3); // lwz @ 0x806ADCF0
    r3 = *(0 + r3); // lwz @ 0x806ADCF4
    r30 = *(0x25c + r3); // lwz @ 0x806ADCF8
    if (!=) goto 0x0x806add0c;
    /* li r30, 0 */ // 0x806ADD04
    /* b 0x806add60 */ // 0x806ADD08
    /* lis r31, 0 */ // 0x806ADD0C
    r31 = r31 + 0; // 0x806ADD10
    if (==) goto 0x0x806add5c;
    r12 = *(0 + r30); // lwz @ 0x806ADD18
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806ADD20
    /* mtctr r12 */ // 0x806ADD24
    /* bctrl  */ // 0x806ADD28
    /* b 0x806add44 */ // 0x806ADD2C
    if (!=) goto 0x0x806add40;
    /* li r0, 1 */ // 0x806ADD38
    /* b 0x806add50 */ // 0x806ADD3C
    r3 = *(0 + r3); // lwz @ 0x806ADD40
    if (!=) goto 0x0x806add30;
    /* li r0, 0 */ // 0x806ADD4C
    if (==) goto 0x0x806add5c;
    /* b 0x806add60 */ // 0x806ADD58
    /* li r30, 0 */ // 0x806ADD5C
    r3 = r30;
    /* li r4, 0 */ // 0x806ADD64
    FUN_80663378(r3, r4); // bl 0x80663378
    r0 = *(0x14 + r1); // lwz @ 0x806ADD6C
    r31 = *(0xc + r1); // lwz @ 0x806ADD70
    r30 = *(8 + r1); // lwz @ 0x806ADD74
    return;
}