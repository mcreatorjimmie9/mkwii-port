/* Function at 0x8067A01C, size=136 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_8067A01C(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    *(0x3c + r1) = r31; // stw @ 0x8067A028
    r31 = r3;
    r4 = r31;
    FUN_8064E324(r3, r4); // bl 0x8064E324
    /* lis r6, 0 */ // 0x8067A03C
    r6 = r6 + 0; // 0x8067A044
    /* li r7, 0 */ // 0x8067A048
    r4 = r6 + 0x14; // 0x8067A04C
    r5 = r6 + 0x1c; // 0x8067A050
    r6 = r6 + 0x28; // 0x8067A054
    FUN_8064E36C(r6, r7, r4, r5, r6); // bl 0x8064E36C
    /* li r4, -1 */ // 0x8067A060
    FUN_8064E32C(r5, r6, r3, r4); // bl 0x8064E32C
    /* li r0, -1 */ // 0x8067A068
    /* li r3, 0 */ // 0x8067A06C
    *(0xc40 + r31) = r3; // stw @ 0x8067A070
    r3 = r31;
    *(0xc38 + r31) = r0; // stw @ 0x8067A078
    *(0xc3c + r31) = r0; // stw @ 0x8067A07C
    r12 = *(0 + r31); // lwz @ 0x8067A080
    r12 = *(0x48 + r12); // lwz @ 0x8067A084
    /* mtctr r12 */ // 0x8067A088
    /* bctrl  */ // 0x8067A08C
    r0 = *(0x44 + r1); // lwz @ 0x8067A090
    r31 = *(0x3c + r1); // lwz @ 0x8067A094
    return;
}