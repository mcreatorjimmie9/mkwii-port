/* Function at 0x80677650, size=100 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_80677650(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 0 */ // 0x80677658
    *(0xc + r1) = r31; // stw @ 0x80677660
    *(8 + r1) = r30; // stw @ 0x80677664
    r30 = r3;
    r3 = r3 + 0x98; // 0x8067766C
    FUN_8069F4A0(r3); // bl 0x8069F4A0
    /* lis r31, 0 */ // 0x80677674
    /* li r4, 0 */ // 0x80677678
    /* lfs f1, 0(r31) */ // 0x8067767C
    FUN_8069F59C(r3, r4); // bl 0x8069F59C
    r3 = r30 + 0x98; // 0x80677684
    /* li r4, 1 */ // 0x80677688
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x80677690
    /* li r4, 0 */ // 0x80677694
    FUN_8069F59C(r3, r4, r4); // bl 0x8069F59C
    r0 = *(0x14 + r1); // lwz @ 0x8067769C
    r31 = *(0xc + r1); // lwz @ 0x806776A0
    r30 = *(8 + r1); // lwz @ 0x806776A4
    return;
}