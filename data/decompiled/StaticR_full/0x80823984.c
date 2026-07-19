/* Function at 0x80823984, size=24 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80823984(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80823990
    r31 = r4;
    FUN_8061DA88(); // bl 0x8061DA88
}