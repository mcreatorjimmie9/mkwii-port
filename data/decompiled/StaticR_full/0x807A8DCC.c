/* Function at 0x807A8DCC, size=40 bytes */
/* Stack frame: 1184 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_807A8DCC(int r3, int r4, int r5)
{
    /* Stack frame: -1184(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r5;
    *(0x494 + r1) = r29; // stw @ 0x807A8DE4
    r29 = r4;
    *(0x490 + r1) = r28; // stw @ 0x807A8DEC
    FUN_805E3430(); // bl 0x805E3430
}