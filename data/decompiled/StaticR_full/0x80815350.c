/* Function at 0x80815350, size=36 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80815350(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x80815364
    /* lis r30, 0 */ // 0x80815368
    r30 = r30 + 0; // 0x8081536C
    FUN_805E3430(); // bl 0x805E3430
}