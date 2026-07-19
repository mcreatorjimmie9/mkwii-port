/* Function at 0x80638AC0, size=36 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80638AC0(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r3, 4 */ // 0x80638AC8
    *(0xc + r1) = r31; // stw @ 0x80638AD0
    r31 = r5;
    *(8 + r1) = r30; // stw @ 0x80638AD8
    r30 = r4;
    FUN_805E3430(); // bl 0x805E3430
}