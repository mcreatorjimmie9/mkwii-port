/* Function at 0x80681364, size=168 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 6 function(s) */

int FUN_80681364(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, -1 */ // 0x8068136C
    /* li r5, 0 */ // 0x80681370
    *(0x14 + r1) = r0; // stw @ 0x80681374
    /* li r0, 0 */ // 0x80681378
    *(0xc + r1) = r31; // stw @ 0x8068137C
    r31 = r3;
    *(0x1b8 + r3) = r4; // stw @ 0x80681384
    /* li r4, 0 */ // 0x80681388
    *(0x360 + r3) = r0; // stw @ 0x8068138C
    r12 = *(0x1bc + r3); // lwzu @ 0x80681390
    r12 = *(0x10 + r12); // lwz @ 0x80681394
    /* mtctr r12 */ // 0x80681398
    /* bctrl  */ // 0x8068139C
    r3 = r31;
    r4 = r31 + 0x1bc; // 0x806813A4
    FUN_80671C34(r3, r4); // bl 0x80671C34
    r3 = r31;
    /* li r4, 1 */ // 0x806813B0
    FUN_80671C1C(r3, r4, r3, r4); // bl 0x80671C1C
    r3 = r31;
    r5 = r31 + 0x44; // 0x806813BC
    /* li r4, 0 */ // 0x806813C0
    /* li r6, 0 */ // 0x806813C4
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r3 = r31 + 0x44; // 0x806813CC
    /* li r4, 0 */ // 0x806813D0
    FUN_808D5444(r4, r6, r3, r4); // bl 0x808D5444
    r3 = r31 + 0x44; // 0x806813D8
    /* li r4, 0x138e */ // 0x806813DC
    /* li r5, 0 */ // 0x806813E0
    FUN_808D5844(r4, r3, r4, r5); // bl 0x808D5844
    /* lis r3, 0 */ // 0x806813E8
    r3 = *(0 + r3); // lwz @ 0x806813EC
    r3 = *(0 + r3); // lwz @ 0x806813F0
    FUN_80685EA4(r5, r3); // bl 0x80685EA4
    r0 = *(0x14 + r1); // lwz @ 0x806813F8
    r31 = *(0xc + r1); // lwz @ 0x806813FC
    return;
}