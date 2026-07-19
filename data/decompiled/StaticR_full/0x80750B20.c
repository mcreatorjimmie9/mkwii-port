/* Function at 0x80750B20, size=104 bytes */
/* Stack frame: 208 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80750B20(int r3, int r4, int r5)
{
    /* Stack frame: -208(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc8 + r1) = r30; // stw @ 0x80750B30
    r30 = r3;
    r12 = *(0 + r3); // lwz @ 0x80750B38
    r12 = *(0xf8 + r12); // lwz @ 0x80750B3C
    /* mtctr r12 */ // 0x80750B40
    /* bctrl  */ // 0x80750B44
    if (!=) goto 0x0x80750c2c;
    r4 = *(8 + r30); // lwz @ 0x80750B50
    /* lis r5, 0 */ // 0x80750B54
    r5 = r5 + 0; // 0x80750B58
    r0 = *(0xc + r4); // lwz @ 0x80750B60
    r4 = r5 + 0x14; // 0x80750B64
    *(8 + r1) = r0; // stw @ 0x80750B68
    FUN_805E3430(r5, r3, r4); // bl 0x805E3430
    r31 = r3;
    if (!=) goto 0x0x80750b98;
    /* lis r3, 0 */ // 0x80750B7C
    /* lis r5, 0 */ // 0x80750B80
    r3 = r3 + 0; // 0x80750B84
}