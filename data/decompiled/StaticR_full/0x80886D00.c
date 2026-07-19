/* Function at 0x80886D00, size=44 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_80886D00(int r3, int r4, int r5)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x44 + r1) = r29; // stw @ 0x80886D14
    r29 = r3;
    r4 = r29 + 0x114; // 0x80886D20
    r5 = r29 + 0x108; // 0x80886D24
    FUN_805E3430(r3, r4, r5); // bl 0x805E3430
}