/* Function at 0x805EF884, size=64 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_805EF884(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r30 = r5;
    *(0x14 + r1) = r29; // stw @ 0x805EF89C
    r29 = r4;
    r4 = r6;
    *(0x10 + r1) = r28; // stw @ 0x805EF8A8
    r28 = r3;
    r7 = *(4 + r3); // lwz @ 0x805EF8B0
    r0 = *(0xc + r7); // lwz @ 0x805EF8B8
    *(8 + r1) = r0; // stw @ 0x805EF8BC
    FUN_805E3430(r3); // bl 0x805E3430
}