/* Function at 0x807D49B8, size=48 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807D49B8(int r3, int r4)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0x38 + r1) = r30; // stw @ 0x807D49C8
    r30 = r3;
    r4 = *(0x38 + r3); // lwz @ 0x807D49D0
    r31 = *(0 + r4); // lwz @ 0x807D49D4
    r3 = r31;
    FUN_8061E2BC(r3); // bl 0x8061E2BC
    r3 = r31;
    FUN_8061DA88(r3, r3); // bl 0x8061DA88
}