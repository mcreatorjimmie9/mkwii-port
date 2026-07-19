/* Function at 0x807A900C, size=36 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_807A900C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x807A9020
    *(0x14 + r1) = r29; // stw @ 0x807A9024
    r29 = r4;
    FUN_805E3430(); // bl 0x805E3430
}