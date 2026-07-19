/* Function at 0x806331B0, size=40 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_806331B0(int r3, int r4)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r4;
    *(0x24 + r1) = r29; // stw @ 0x806331C8
    r29 = r3;
    r3 = *(0x2c + r3); // lwz @ 0x806331D0
    FUN_8061DA88(); // bl 0x8061DA88
}