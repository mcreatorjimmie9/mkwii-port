/* Function at 0x806FD93C, size=60 bytes */
/* Stack frame: 256 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_806FD93C(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -256(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r7;
    *(0xf8 + r1) = r30; // stw @ 0x806FD950
    r30 = r6;
    *(0xf4 + r1) = r29; // stw @ 0x806FD958
    r29 = r5;
    *(0xf0 + r1) = r28; // stw @ 0x806FD964
    r28 = r4;
    r3 = r28;
    r4 = r31;
    FUN_805E3430(r5, r3, r4); // bl 0x805E3430
}