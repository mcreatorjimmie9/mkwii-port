/* Function at 0x80837CE0, size=52 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80837CE0(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x80837CF0
    r31 = r31 + 0; // 0x80837CF4
    *(0x18 + r1) = r30; // stw @ 0x80837CF8
    r30 = r3;
    /* lis r3, 0 */ // 0x80837D00
    r4 = *(0x2ec + r30); // lbz @ 0x80837D04
    r3 = *(0 + r3); // lwz @ 0x80837D08
    FUN_8061D97C(r3); // bl 0x8061D97C
    FUN_8061DA88(r3); // bl 0x8061DA88
}