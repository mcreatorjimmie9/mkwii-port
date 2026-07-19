/* Function at 0x80869BD8, size=396 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 7 function(s) */

int FUN_80869BD8(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* stfd f31, 0x18(r1) */ // 0x80869BE4
    *(0x14 + r1) = r31; // stw @ 0x80869BE8
    *(0x10 + r1) = r30; // stw @ 0x80869BEC
    r30 = r3;
    r0 = *(0 + r3); // lwz @ 0x80869BF4
    if (==) goto 0x0x80869c14;
    if (==) goto 0x0x80869c74;
    if (==) goto 0x0x80869cdc;
    /* b 0x80869d40 */ // 0x80869C10
    r3 = *(4 + r3); // lwz @ 0x80869C14
    /* li r4, 0 */ // 0x80869C18
    r3 = *(0x28 + r3); // lwz @ 0x80869C1C
    FUN_805E7060(r4); // bl 0x805E7060
    r12 = *(0 + r3); // lwz @ 0x80869C24
    r31 = r3;
    r12 = *(8 + r12); // lwz @ 0x80869C2C
    /* mtctr r12 */ // 0x80869C30
    /* bctrl  */ // 0x80869C34
    r12 = *(0 + r31); // lwz @ 0x80869C38
    /* fmr f31, f1 */ // 0x80869C3C
    r3 = r31;
    r12 = *(0xc + r12); // lwz @ 0x80869C44
    /* mtctr r12 */ // 0x80869C48
    /* bctrl  */ // 0x80869C4C
    /* .byte 0xfc, 0x01, 0xf8, 0x40 */ // 0x80869C50
    /* cror cr0eq, cr0gt, cr0eq */ // 0x80869C54
    /* mfcr r0 */ // 0x80869C58
    /* rlwinm. r0, r0, 3, 0x1f, 0x1f */ // 0x80869C5C
    if (==) goto 0x0x80869d40;
    r3 = *(4 + r30); // lwz @ 0x80869C64
    r4 = *(8 + r30); // lwz @ 0x80869C68
    FUN_805ECA18(); // bl 0x805ECA18
    /* b 0x80869d40 */ // 0x80869C70
    r3 = *(4 + r3); // lwz @ 0x80869C74
    /* li r4, 0 */ // 0x80869C78
    r3 = *(0x28 + r3); // lwz @ 0x80869C7C
    FUN_805E7060(r4); // bl 0x805E7060
    r12 = *(0 + r3); // lwz @ 0x80869C84
    r31 = r3;
    r12 = *(8 + r12); // lwz @ 0x80869C8C
    /* mtctr r12 */ // 0x80869C90
    /* bctrl  */ // 0x80869C94
    r12 = *(0 + r31); // lwz @ 0x80869C98
    /* fmr f31, f1 */ // 0x80869C9C
    r3 = r31;
    r12 = *(0xc + r12); // lwz @ 0x80869CA4
    /* mtctr r12 */ // 0x80869CA8
    /* bctrl  */ // 0x80869CAC
    /* .byte 0xfc, 0x01, 0xf8, 0x40 */ // 0x80869CB0
    /* cror cr0eq, cr0gt, cr0eq */ // 0x80869CB4
    /* mfcr r0 */ // 0x80869CB8
    /* rlwinm. r0, r0, 3, 0x1f, 0x1f */ // 0x80869CBC
    if (==) goto 0x0x80869d40;
    r3 = *(4 + r30); // lwz @ 0x80869CC4
    r4 = *(8 + r30); // lwz @ 0x80869CC8
    FUN_805ECA18(); // bl 0x805ECA18
    /* li r0, 3 */ // 0x80869CD0
    *(0 + r30) = r0; // stw @ 0x80869CD4
    /* b 0x80869d40 */ // 0x80869CD8
    r3 = *(4 + r3); // lwz @ 0x80869CDC
    /* li r4, 0 */ // 0x80869CE0
    r3 = *(0x28 + r3); // lwz @ 0x80869CE4
    FUN_805E7060(r4); // bl 0x805E7060
    r12 = *(0 + r3); // lwz @ 0x80869CEC
    r31 = r3;
    r12 = *(8 + r12); // lwz @ 0x80869CF4
    /* mtctr r12 */ // 0x80869CF8
    /* bctrl  */ // 0x80869CFC
    r12 = *(0 + r31); // lwz @ 0x80869D00
    /* fmr f31, f1 */ // 0x80869D04
    r3 = r31;
    r12 = *(0xc + r12); // lwz @ 0x80869D0C
    /* mtctr r12 */ // 0x80869D10
    /* bctrl  */ // 0x80869D14
    /* .byte 0xfc, 0x01, 0xf8, 0x40 */ // 0x80869D18
    /* cror cr0eq, cr0gt, cr0eq */ // 0x80869D1C
    /* mfcr r0 */ // 0x80869D20
    /* rlwinm. r0, r0, 3, 0x1f, 0x1f */ // 0x80869D24
    if (==) goto 0x0x80869d40;
    r3 = *(4 + r30); // lwz @ 0x80869D2C
    r4 = *(8 + r30); // lwz @ 0x80869D30
    FUN_805ECA18(); // bl 0x805ECA18
    /* li r0, 3 */ // 0x80869D38
    *(0 + r30) = r0; // stw @ 0x80869D3C
    r3 = r30;
    FUN_808695B0(r3); // bl 0x808695B0
    r0 = *(0x24 + r1); // lwz @ 0x80869D48
    /* lfd f31, 0x18(r1) */ // 0x80869D4C
    r31 = *(0x14 + r1); // lwz @ 0x80869D50
    r30 = *(0x10 + r1); // lwz @ 0x80869D54
    return;
}