/* Function at 0x805D7994, size=96 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805D7994(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x805D79A8
    r30 = r3;
    r3 = r5;
    FUN_805E0ED8(r3); // bl 0x805E0ED8
    /* extsh. r0, r3 */ // 0x805D79B8
    if (<) goto 0x0x805d79d8;
    /* mulli r3, r31, 0xc80 */ // 0x805D79C0
    /* mulli r0, r0, 0x64 */ // 0x805D79C4
    r3 = r30 + r3; // 0x805D79C8
    r3 = r3 + r0; // 0x805D79CC
    r3 = r3 + 0xe20; // 0x805D79D0
    /* b 0x805d79dc */ // 0x805D79D4
    /* li r3, 0 */ // 0x805D79D8
    r0 = *(0x14 + r1); // lwz @ 0x805D79DC
    r31 = *(0xc + r1); // lwz @ 0x805D79E0
    r30 = *(8 + r1); // lwz @ 0x805D79E4
    return;
}