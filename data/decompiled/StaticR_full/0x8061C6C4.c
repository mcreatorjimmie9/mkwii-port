/* Function at 0x8061C6C4, size=108 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31 */
/* Calls: 6 function(s) */

int FUN_8061C6C4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    *(0x2c + r1) = r31; // stw @ 0x8061C6D0
    r31 = r3;
    FUN_8061E2D8(); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x8061C6DC
    r0 = r3;
    r3 = *(0 + r4); // lwz @ 0x8061C6E4
    /* clrlwi r6, r0, 0x18 */ // 0x8061C6F0
    FUN_805C5834(r4, r5); // bl 0x805C5834
    r3 = r31;
    FUN_8061DFF8(r4, r5, r3); // bl 0x8061DFF8
    FUN_806118C0(r3, r4, r5); // bl 0x806118C0
    r3 = r31;
    FUN_8061DFF8(r4, r5, r3); // bl 0x8061DFF8
    FUN_80611EC4(r5, r3, r4); // bl 0x80611EC4
    r0 = *(0x34 + r1); // lwz @ 0x8061C71C
    r31 = *(0x2c + r1); // lwz @ 0x8061C720
    return;
}