/* Function at 0x805FD5AC, size=68 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_805FD5AC(int r3, int r4, int r5)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r4;
    *(0x44 + r1) = r29; // stw @ 0x805FD5C4
    r29 = r3;
    FUN_8061DC48(); // bl 0x8061DC48
    r31 = r3;
    r3 = r29;
    FUN_8061DC48(r3); // bl 0x8061DC48
    r4 = r3;
    r4 = r4 + 0x100; // 0x805FD5E4
    r5 = r31 + 0x68; // 0x805FD5E8
    FUN_805E3430(r4, r3, r4, r5); // bl 0x805E3430
}