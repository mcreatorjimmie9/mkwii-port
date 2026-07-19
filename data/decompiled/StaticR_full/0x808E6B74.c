/* Function at 0x808E6B74, size=212 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_808E6B74(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x808E6B7C
    *(0x18 + r1) = r30; // stw @ 0x808E6B88
    *(0x14 + r1) = r29; // stw @ 0x808E6B8C
    r29 = r3;
    r3 = *(0 + r4); // lwz @ 0x808E6B94
    r3 = *(0 + r3); // lwz @ 0x808E6B98
    r30 = *(0x250 + r3); // lwz @ 0x808E6B9C
    if (!=) goto 0x0x808e6bb0;
    /* li r30, 0 */ // 0x808E6BA8
    /* b 0x808e6c04 */ // 0x808E6BAC
    /* lis r31, 0 */ // 0x808E6BB0
    r31 = r31 + 0; // 0x808E6BB4
    if (==) goto 0x0x808e6c00;
    r12 = *(0 + r30); // lwz @ 0x808E6BBC
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x808E6BC4
    /* mtctr r12 */ // 0x808E6BC8
    /* bctrl  */ // 0x808E6BCC
    /* b 0x808e6be8 */ // 0x808E6BD0
    if (!=) goto 0x0x808e6be4;
    /* li r0, 1 */ // 0x808E6BDC
    /* b 0x808e6bf4 */ // 0x808E6BE0
    r3 = *(0 + r3); // lwz @ 0x808E6BE4
    if (!=) goto 0x0x808e6bd4;
    /* li r0, 0 */ // 0x808E6BF0
    if (==) goto 0x0x808e6c00;
    /* b 0x808e6c04 */ // 0x808E6BFC
    /* li r30, 0 */ // 0x808E6C00
    r3 = r30;
    /* li r4, -1 */ // 0x808E6C08
    FUN_806A6BC8(r3, r4); // bl 0x806A6BC8
    /* lis r4, 0 */ // 0x808E6C10
    /* li r0, -1 */ // 0x808E6C14
    /* lfs f1, 0(r4) */ // 0x808E6C18
    r3 = r29;
    *(0x3e8 + r29) = r0; // stw @ 0x808E6C20
    /* li r4, 0 */ // 0x808E6C24
    FUN_80671C48(r3, r4); // bl 0x80671C48
    r0 = *(0x24 + r1); // lwz @ 0x808E6C2C
    r31 = *(0x1c + r1); // lwz @ 0x808E6C30
    r30 = *(0x18 + r1); // lwz @ 0x808E6C34
    r29 = *(0x14 + r1); // lwz @ 0x808E6C38
    return;
}