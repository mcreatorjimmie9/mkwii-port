/* Function at 0x80646D64, size=24 bytes */
/* Stack frame: 208 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80646D64(int r3)
{
    /* Stack frame: -208(r1) */
    /* saved r31 */
    *(0xcc + r1) = r31; // stw @ 0x80646D70
    r31 = r3;
    FUN_8061DA88(); // bl 0x8061DA88
}