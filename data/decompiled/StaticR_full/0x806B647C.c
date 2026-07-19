/* Function at 0x806B647C, size=220 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 6 function(s) */

int FUN_806B647C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806B6488
    r31 = r3;
    r0 = *(0x20 + r3); // lwz @ 0x806B6490
    if (!=) goto 0x0x806b64b8;
    /* li r4, 0 */ // 0x806B649C
    r3 = r3 + 0x520; // 0x806B64A0
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x806B64A8
    /* li r4, 1 */ // 0x806B64AC
    /* lfs f1, 0(r5) */ // 0x806B64B0
    FUN_8069F59C(r3, r5, r4); // bl 0x8069F59C
    r3 = *(0x58 + r31); // lwz @ 0x806B64B8
    if (==) goto 0x0x806b64d4;
    r12 = *(0x10 + r3); // lwz @ 0x806B64C4
    r12 = *(0x10 + r12); // lwz @ 0x806B64C8
    /* mtctr r12 */ // 0x806B64CC
    /* bctrl  */ // 0x806B64D0
    r0 = *(0x20 + r31); // lwz @ 0x806B64D4
    if (!=) goto 0x0x806b6544;
    /* lis r3, 0 */ // 0x806B64E0
    r3 = *(0 + r3); // lwz @ 0x806B64E4
    r3 = r3 + 0x1808; // 0x806B64E8
    FUN_805BD048(r3, r3); // bl 0x805BD048
    if (==) goto 0x0x806b650c;
    if (==) goto 0x0x806b6520;
    if (==) goto 0x0x806b6534;
    /* b 0x806b6544 */ // 0x806B6508
    r3 = r31;
    /* li r4, 0x219 */ // 0x806B6510
    /* li r5, -1 */ // 0x806B6514
    FUN_806724B8(r3, r4, r5); // bl 0x806724B8
    /* b 0x806b6544 */ // 0x806B651C
    r3 = r31;
    /* li r4, 0x218 */ // 0x806B6524
    /* li r5, -1 */ // 0x806B6528
    FUN_806724B8(r3, r4, r5); // bl 0x806724B8
    /* b 0x806b6544 */ // 0x806B6530
    r3 = r31;
    /* li r4, 0x217 */ // 0x806B6538
    /* li r5, -1 */ // 0x806B653C
    FUN_806724B8(r3, r4, r5); // bl 0x806724B8
    r0 = *(0x14 + r1); // lwz @ 0x806B6544
    r31 = *(0xc + r1); // lwz @ 0x806B6548
    return;
}