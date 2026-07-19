/* Function at 0x807F5B38, size=308 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_807F5B38(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x807F5B48
    r30 = r3;
    r0 = *(0xb0 + r3); // lwz @ 0x807F5B50
    if (==) goto 0x0x807f5c54;
    /* lis r4, 0 */ // 0x807F5B5C
    /* li r5, 5 */ // 0x807F5B60
    /* lfs f0, 0(r4) */ // 0x807F5B64
    /* li r0, 0xb4 */ // 0x807F5B68
    *(0xb0 + r3) = r5; // stw @ 0x807F5B6C
    /* li r31, 0 */ // 0x807F5B70
    *(0xc0 + r3) = r0; // stw @ 0x807F5B74
    /* stfs f0, 0xc4(r3) */ // 0x807F5B78
    r12 = *(0 + r3); // lwz @ 0x807F5B7C
    r12 = *(0x30 + r12); // lwz @ 0x807F5B80
    /* mtctr r12 */ // 0x807F5B84
    /* bctrl  */ // 0x807F5B88
    /* lis r4, 0x101 */ // 0x807F5B8C
    r0 = *(0x20 + r3); // lwz @ 0x807F5B90
    r3 = r4 + 0x101; // 0x807F5B94
    /* andc. r0, r3, r0 */ // 0x807F5B98
    if (!=) goto 0x0x807f5bb8;
    /* lis r3, 0 */ // 0x807F5BA0
    r3 = *(0 + r3); // lwz @ 0x807F5BA4
    FUN_8070D8D8(r3, r3); // bl 0x8070D8D8
    if (==) goto 0x0x807f5bb8;
    /* li r31, 1 */ // 0x807F5BB4
    if (!=) goto 0x0x807f5c20;
    r3 = *(0xc8 + r30); // lwz @ 0x807F5BC0
    r12 = *(0 + r3); // lwz @ 0x807F5BC4
    r12 = *(0xc + r12); // lwz @ 0x807F5BC8
    /* mtctr r12 */ // 0x807F5BCC
    /* bctrl  */ // 0x807F5BD0
    r3 = r30;
    FUN_808A1BCC(r3); // bl 0x808A1BCC
    r3 = *(0xc8 + r30); // lwz @ 0x807F5BDC
    r4 = r30 + 0x58; // 0x807F5BE0
    r12 = *(0 + r3); // lwz @ 0x807F5BE4
    r12 = *(0x78 + r12); // lwz @ 0x807F5BE8
    /* mtctr r12 */ // 0x807F5BEC
    /* bctrl  */ // 0x807F5BF0
    r3 = *(0xc8 + r30); // lwz @ 0x807F5BF4
    /* lfs f1, 0xd0(r30) */ // 0x807F5BF8
    r12 = *(0 + r3); // lwz @ 0x807F5BFC
    r12 = *(0x6c + r12); // lwz @ 0x807F5C00
    /* mtctr r12 */ // 0x807F5C04
    /* bctrl  */ // 0x807F5C08
    r3 = *(0xc8 + r30); // lwz @ 0x807F5C0C
    r12 = *(0 + r3); // lwz @ 0x807F5C10
    r12 = *(0x80 + r12); // lwz @ 0x807F5C14
    /* mtctr r12 */ // 0x807F5C18
    /* bctrl  */ // 0x807F5C1C
    r12 = *(0 + r30); // lwz @ 0x807F5C20
    r3 = r30;
    /* li r31, 0x34e */ // 0x807F5C28
    r12 = *(0x24 + r12); // lwz @ 0x807F5C2C
    /* mtctr r12 */ // 0x807F5C30
    /* bctrl  */ // 0x807F5C34
    /* clrlwi r0, r3, 0x10 */ // 0x807F5C38
    if (!=) goto 0x0x807f5c48;
    /* li r31, 0x345 */ // 0x807F5C44
    r3 = r30;
    r4 = r31;
    FUN_808A0AE8(r3, r4); // bl 0x808A0AE8
    r0 = *(0x14 + r1); // lwz @ 0x807F5C54
    r31 = *(0xc + r1); // lwz @ 0x807F5C58
    r30 = *(8 + r1); // lwz @ 0x807F5C5C
    return;
}