/* Function at 0x808417B0, size=108 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 3 function(s) */

int FUN_808417B0(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r4, 0 */ // 0x808417B8
    *(0x24 + r1) = r29; // stw @ 0x808417C8
    *(0x20 + r1) = r28; // stw @ 0x808417CC
    r28 = r3;
    r5 = *(8 + r3); // lwz @ 0x808417D4
    r0 = r5 + -1; // 0x808417D8
    *(8 + r3) = r0; // stw @ 0x808417DC
    /* slwi r0, r0, 2 */ // 0x808417E0
    r5 = r3 + r0; // 0x808417E4
    r3 = *(0 + r4); // lwz @ 0x808417E8
    r31 = *(0xc + r5); // lwz @ 0x808417EC
    r0 = *(4 + r31); // lwz @ 0x808417F0
    r4 = r31;
    /* mulli r0, r0, 0x24 */ // 0x808417F8
    r3 = r3 + r0; // 0x808417FC
    r3 = r3 + 0x48; // 0x80841800
    FUN_80821284(r4, r3); // bl 0x80821284
    r3 = *(0 + r28); // lwz @ 0x80841808
    r4 = r31;
    FUN_80823984(r3, r4); // bl 0x80823984
    r3 = *(0 + r28); // lwz @ 0x80841814
    FUN_8061DA88(r4); // bl 0x8061DA88
}