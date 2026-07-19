/* Function at 0x805F51B4, size=44 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805F51B4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x805F51C4
    *(8 + r1) = r30; // stw @ 0x805F51C8
    /* li r30, 0 */ // 0x805F51CC
    /* b 0x805f51dc */ // 0x805F51D0
    r3 = *(0x10 + r3); // lwz @ 0x805F51D4
    FUN_805F6544(); // bl 0x805F6544
    r4 = r30;
}