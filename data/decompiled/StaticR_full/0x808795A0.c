/* Function at 0x808795A0, size=192 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_808795A0(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0x18 + r1) = r30; // stw @ 0x808795B0
    r30 = r3;
    r12 = *(0 + r3); // lwz @ 0x808795B8
    r12 = *(0x3c + r12); // lwz @ 0x808795BC
    /* mtctr r12 */ // 0x808795C0
    /* bctrl  */ // 0x808795C4
    r3 = r30;
    FUN_80876FEC(r3); // bl 0x80876FEC
    /* lis r31, 0 */ // 0x808795D0
    r0 = r3 rlwinm 2; // rlwinm
    r3 = *(0 + r31); // lwz @ 0x808795D8
    r4 = *(0x198 + r30); // lbz @ 0x808795DC
    r3 = *(0xc + r3); // lwz @ 0x808795E0
    /* lwzx r3, r3, r0 */ // 0x808795E4
    r0 = *(0x26 + r3); // lbz @ 0x808795E8
    if (==) goto 0x0x80879648;
    r3 = r30;
    FUN_80876FEC(r3); // bl 0x80876FEC
    r5 = *(0 + r31); // lwz @ 0x808795FC
    r0 = r3 rlwinm 2; // rlwinm
    r3 = r30 + 0x98; // 0x80879604
    /* li r4, 0 */ // 0x80879608
    r5 = *(0xc + r5); // lwz @ 0x8087960C
    /* lwzx r5, r5, r0 */ // 0x80879610
    r0 = *(0x26 + r5); // lbz @ 0x80879614
    *(0x198 + r30) = r0; // stb @ 0x80879618
    FUN_8069F4A0(r4); // bl 0x8069F4A0
    r4 = *(0x198 + r30); // lbz @ 0x80879620
    /* lis r0, 0x4330 */ // 0x80879624
    *(0xc + r1) = r4; // stw @ 0x80879628
    /* lis r4, 0 */ // 0x8087962C
    /* lfd f1, 0(r4) */ // 0x80879630
    /* li r4, 0 */ // 0x80879634
    *(8 + r1) = r0; // stw @ 0x80879638
    /* lfd f0, 8(r1) */ // 0x8087963C
    /* fsubs f1, f0, f1 */ // 0x80879640
    FUN_8069F7A0(r4); // bl 0x8069F7A0
    r0 = *(0x24 + r1); // lwz @ 0x80879648
    r31 = *(0x1c + r1); // lwz @ 0x8087964C
    r30 = *(0x18 + r1); // lwz @ 0x80879650
    return;
}