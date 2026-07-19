/* Function at 0x8065E99C, size=108 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_8065E99C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x8065E9A4
    /* li r5, 0 */ // 0x8065E9A8
    *(0x14 + r1) = r0; // stw @ 0x8065E9AC
    *(0xc + r1) = r31; // stw @ 0x8065E9B0
    r31 = r3;
    r12 = *(0x44 + r3); // lwz @ 0x8065E9B8
    r12 = *(0x10 + r12); // lwz @ 0x8065E9BC
    /* mtctr r12 */ // 0x8065E9C0
    r3 = r3 + 0x44; // 0x8065E9C4
    /* bctrl  */ // 0x8065E9C8
    r3 = r31;
    r4 = r31 + 0x44; // 0x8065E9D0
    FUN_80671C34(r3, r3, r4); // bl 0x80671C34
    r3 = r31;
    /* li r4, 0 */ // 0x8065E9DC
    FUN_80671C1C(r3, r4, r3, r4); // bl 0x80671C1C
    /* lis r3, 0 */ // 0x8065E9E4
    r3 = *(0 + r3); // lwz @ 0x8065E9E8
    r3 = *(0 + r3); // lwz @ 0x8065E9EC
    FUN_80685EA4(r4, r3); // bl 0x80685EA4
    r0 = *(0x14 + r1); // lwz @ 0x8065E9F4
    r31 = *(0xc + r1); // lwz @ 0x8065E9F8
    return;
}