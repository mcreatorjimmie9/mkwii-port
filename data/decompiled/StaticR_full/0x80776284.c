/* Function at 0x80776284, size=148 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80776284(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r31, 0 */ // 0x80776294
    *(8 + r1) = r30; // stw @ 0x80776298
    r30 = r3;
    r12 = *(0 + r3); // lwz @ 0x807762A0
    r12 = *(0x30 + r12); // lwz @ 0x807762A4
    /* mtctr r12 */ // 0x807762A8
    /* bctrl  */ // 0x807762AC
    /* lis r4, 0x101 */ // 0x807762B0
    r0 = *(0x20 + r3); // lwz @ 0x807762B4
    r3 = r4 + 0x101; // 0x807762B8
    /* andc. r0, r3, r0 */ // 0x807762BC
    if (!=) goto 0x0x807762dc;
    /* lis r3, 0 */ // 0x807762C4
    r3 = *(0 + r3); // lwz @ 0x807762C8
    FUN_8070D8D8(r3, r3); // bl 0x8070D8D8
    if (==) goto 0x0x807762dc;
    /* li r31, 1 */ // 0x807762D8
    if (!=) goto 0x0x8077635c;
    r3 = *(0xb0 + r30); // lwz @ 0x807762E4
    r3 = r3 + 0x74; // 0x807762E8
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x80776300;
    /* li r3, 0 */ // 0x807762F8
    /* b 0x80776304 */ // 0x807762FC
    r3 = *(0xc + r3); // lwz @ 0x80776300
    /* li r0, 0 */ // 0x80776308
    if (==) goto 0x0x80776318;
    if (!=) goto 0x0x8077631c;
}