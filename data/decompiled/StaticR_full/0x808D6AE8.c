/* Function at 0x808D6AE8, size=200 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_808D6AE8(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x808D6AF8
    r30 = r3;
    r12 = *(0 + r3); // lwz @ 0x808D6B00
    r12 = *(0x3c + r12); // lwz @ 0x808D6B04
    /* mtctr r12 */ // 0x808D6B08
    /* bctrl  */ // 0x808D6B0C
    /* lis r3, 0 */ // 0x808D6B10
    /* lis r4, 0 */ // 0x808D6B14
    r3 = *(0 + r3); // lwz @ 0x808D6B18
    r4 = *(0 + r4); // lwz @ 0x808D6B1C
    r0 = *(0xb70 + r3); // lwz @ 0x808D6B20
    if (!=) goto 0x0x808d6b38;
    r3 = *(0x10 + r4); // lwz @ 0x808D6B2C
    r31 = *(8 + r3); // lwz @ 0x808D6B30
    /* b 0x808d6b3c */ // 0x808D6B34
    /* li r31, 0 */ // 0x808D6B38
    r0 = *(0x1a0 + r30); // lwz @ 0x808D6B3C
    if (>=) goto 0x0x808d6b4c;
    r31 = r0;
    r0 = *(0x19c + r30); // lwz @ 0x808D6B4C
    if (==) goto 0x0x808d6b98;
    r3 = r30;
    r4 = r31;
    FUN_808D6C0C(r3, r4); // bl 0x808D6C0C
    r0 = *(0x19c + r30); // lwz @ 0x808D6B64
    if (<=) goto 0x0x808d6b84;
    r3 = r30;
    /* li r4, 0xe8 */ // 0x808D6B74
    /* li r5, -1 */ // 0x808D6B78
    FUN_806A03CC(r3, r4, r5); // bl 0x806A03CC
    /* b 0x808d6b94 */ // 0x808D6B80
    r3 = r30;
    /* li r4, 0xea */ // 0x808D6B88
    /* li r5, -1 */ // 0x808D6B8C
    FUN_806A03CC(r3, r4, r5); // bl 0x806A03CC
    *(0x19c + r30) = r31; // stw @ 0x808D6B94
    r0 = *(0x14 + r1); // lwz @ 0x808D6B98
    r31 = *(0xc + r1); // lwz @ 0x808D6B9C
    r30 = *(8 + r1); // lwz @ 0x808D6BA0
    return;
}