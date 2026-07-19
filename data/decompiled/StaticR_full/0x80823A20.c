/* Function at 0x80823A20, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80823A20(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x80823A30
    r30 = r3;
    r0 = *(0x44 + r3); // lbz @ 0x80823A38
    if (==) goto 0x0x80823a88;
    FUN_8061DA88(); // bl 0x8061DA88
    r31 = r3;
    r3 = r30 + 0x44; // 0x80823A4C
    r4 = r31;
    FUN_8083E0DC(r3, r4); // bl 0x8083E0DC
    r4 = r31;
    r3 = r30 + 0x48; // 0x80823A5C
}