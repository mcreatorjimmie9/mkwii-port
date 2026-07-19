/* Function at 0x8086ED8C, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8086ED8C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8086EDA0
    r30 = r3;
    r5 = *(0x10 + r3); // lwz @ 0x8086EDA8
    r0 = *(0x6dc + r5); // lwz @ 0x8086EDAC
    if (<=) goto 0x0x8086edcc;
    r0 = *(0x7c + r30); // lwz @ 0x8086EDB8
    r3 = *(0x6e0 + r5); // lwz @ 0x8086EDBC
    /* mulli r0, r0, 0x30 */ // 0x8086EDC0
    r4 = r4 + r0; // 0x8086EDC4
    FUN_8082D58C(); // bl 0x8082D58C
    r0 = *(0x80 + r30); // lwz @ 0x8086EDCC
    r4 = r30 + 0x48; // 0x8086EDD0
    /* mulli r0, r0, 0x30 */ // 0x8086EDD4
    r3 = r31 + r0; // 0x8086EDD8
    FUN_805E3430(r4); // bl 0x805E3430
}