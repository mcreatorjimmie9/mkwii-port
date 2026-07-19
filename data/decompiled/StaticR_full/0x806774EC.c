/* Function at 0x806774EC, size=32 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_806774EC(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x806774FC
    r30 = r3;
    /* lfs f1, 0x19c(r3) */ // 0x80677504
    FUN_805E3430(); // bl 0x805E3430
}