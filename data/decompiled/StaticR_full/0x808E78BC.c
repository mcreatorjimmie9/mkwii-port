/* Function at 0x808E78BC, size=112 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_808E78BC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r5 = r3 + 0x6c8; // 0x808E78C4
    /* li r6, 0 */ // 0x808E78C8
    *(0x14 + r1) = r0; // stw @ 0x808E78CC
    *(0xc + r1) = r31; // stw @ 0x808E78D0
    r31 = r3;
    r4 = *(0x654 + r3); // lwz @ 0x808E78D8
    r0 = r4 + 1; // 0x808E78DC
    *(0x654 + r3) = r0; // stw @ 0x808E78E0
    FUN_80671C2C(); // bl 0x80671C2C
    /* lis r6, 0 */ // 0x808E78E8
    r3 = r31 + 0x6c8; // 0x808E78EC
    r6 = r6 + 0; // 0x808E78F0
    r4 = r6 + 0x3a; // 0x808E78F4
    r5 = r6 + 0x49; // 0x808E78F8
    r6 = r6 + 0x5b; // 0x808E78FC
    FUN_8066CF50(r3, r6, r4, r5, r6); // bl 0x8066CF50
    r3 = r31 + 0x6c8; // 0x808E7904
    /* li r4, 0 */ // 0x808E7908
    /* li r5, 0 */ // 0x808E790C
    FUN_806A0A34(r6, r3, r4, r5); // bl 0x806A0A34
    r3 = r31 + 0x6c8; // 0x808E7914
    r31 = *(0xc + r1); // lwz @ 0x808E7918
    r0 = *(0x14 + r1); // lwz @ 0x808E791C
    return;
}