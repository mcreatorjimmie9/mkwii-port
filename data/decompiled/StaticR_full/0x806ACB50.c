/* Function at 0x806ACB50, size=220 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 2 function(s) */

int FUN_806ACB50(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r5, 0 */ // 0x806ACB58
    *(0x14 + r1) = r29; // stw @ 0x806ACB68
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x806ACB70
    r28 = r3;
    r3 = *(0 + r5); // lwz @ 0x806ACB78
    r3 = *(0 + r3); // lwz @ 0x806ACB7C
    r30 = *(0x244 + r3); // lwz @ 0x806ACB80
    if (!=) goto 0x0x806acb94;
    /* li r30, 0 */ // 0x806ACB8C
    /* b 0x806acbe8 */ // 0x806ACB90
    /* lis r31, 0 */ // 0x806ACB94
    r31 = r31 + 0; // 0x806ACB98
    if (==) goto 0x0x806acbe4;
    r12 = *(0 + r30); // lwz @ 0x806ACBA0
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806ACBA8
    /* mtctr r12 */ // 0x806ACBAC
    /* bctrl  */ // 0x806ACBB0
    /* b 0x806acbcc */ // 0x806ACBB4
    if (!=) goto 0x0x806acbc8;
    /* li r0, 1 */ // 0x806ACBC0
    /* b 0x806acbd8 */ // 0x806ACBC4
    r3 = *(0 + r3); // lwz @ 0x806ACBC8
    if (!=) goto 0x0x806acbb8;
    /* li r0, 0 */ // 0x806ACBD4
    if (==) goto 0x0x806acbe4;
    /* b 0x806acbe8 */ // 0x806ACBE0
    /* li r30, 0 */ // 0x806ACBE4
    /* li r0, 1 */ // 0x806ACBE8
    *(0x1cf4 + r30) = r0; // stw @ 0x806ACBEC
    /* li r0, 0x8c */ // 0x806ACBF0
    r3 = r29;
    *(0xf30 + r28) = r0; // stw @ 0x806ACBF8
    FUN_8064A384(r3); // bl 0x8064A384
    r3 = r28;
    /* li r4, 0 */ // 0x806ACC04
    FUN_80671C48(r3, r3, r4); // bl 0x80671C48
    r0 = *(0x24 + r1); // lwz @ 0x806ACC0C
    r31 = *(0x1c + r1); // lwz @ 0x806ACC10
    r30 = *(0x18 + r1); // lwz @ 0x806ACC14
    r29 = *(0x14 + r1); // lwz @ 0x806ACC18
    r28 = *(0x10 + r1); // lwz @ 0x806ACC1C
    return;
}