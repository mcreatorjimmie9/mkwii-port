/* Function at 0x807077E8, size=116 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_807077E8(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x807077F0
    /* li r5, 0 */ // 0x807077F4
    *(0x14 + r1) = r0; // stw @ 0x807077F8
    *(0xc + r1) = r31; // stw @ 0x807077FC
    r31 = r3;
    r12 = *(0x44 + r3); // lwz @ 0x80707804
    r12 = *(0x10 + r12); // lwz @ 0x80707808
    /* mtctr r12 */ // 0x8070780C
    r3 = r3 + 0x44; // 0x80707810
    /* bctrl  */ // 0x80707814
    r3 = r31;
    r4 = r31 + 0x44; // 0x8070781C
    FUN_80671C34(r3, r3, r4); // bl 0x80671C34
    r3 = r31;
    /* li r4, 0 */ // 0x80707828
    FUN_80671C1C(r3, r4, r3, r4); // bl 0x80671C1C
    r3 = r31;
    /* li r4, 0 */ // 0x80707834
    /* li r5, 0 */ // 0x80707838
    FUN_806724E0(r4, r3, r4, r5); // bl 0x806724E0
    /* li r0, 0 */ // 0x80707840
    *(0x54 + r31) = r0; // stw @ 0x80707844
    r31 = *(0xc + r1); // lwz @ 0x80707848
    r0 = *(0x14 + r1); // lwz @ 0x8070784C
    return;
}