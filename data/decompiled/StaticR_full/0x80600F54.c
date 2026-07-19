/* Function at 0x80600F54, size=36 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80600F54(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x80600F64
    r30 = r3;
    r31 = *(0x6c + r3); // lha @ 0x80600F6C
    r3 = r3 + 4; // 0x80600F70
    FUN_8061DA88(r3); // bl 0x8061DA88
}