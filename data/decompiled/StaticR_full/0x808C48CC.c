/* Function at 0x808C48CC, size=104 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_808C48CC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* mulli r6, r4, 0xa30 */ // 0x808C48D4
    *(0xc + r1) = r31; // stw @ 0x808C48DC
    *(8 + r1) = r30; // stw @ 0x808C48E0
    r30 = r4;
    r4 = r3 + r6; // 0x808C48E8
    /* li r6, 0 */ // 0x808C48EC
    r5 = *(0x654 + r3); // lwz @ 0x808C48F0
    r31 = r4 + 0x6cc; // 0x808C48F4
    r0 = r5 + 1; // 0x808C48F8
    *(0x654 + r3) = r0; // stw @ 0x808C48FC
    r4 = r5;
    r5 = r31;
    FUN_80671C2C(r4, r5); // bl 0x80671C2C
    r3 = r31;
    r4 = r30;
    FUN_808745B4(r4, r5, r3, r4); // bl 0x808745B4
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x808C491C
    r30 = *(8 + r1); // lwz @ 0x808C4920
    r0 = *(0x14 + r1); // lwz @ 0x808C4924
    return;
}