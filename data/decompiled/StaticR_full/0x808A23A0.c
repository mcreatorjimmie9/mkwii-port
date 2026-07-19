/* Function at 0x808A23A0, size=92 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_808A23A0(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r5, 0 */ // 0x808A23A8
    /* lis r31, 0 */ // 0x808A23B4
    *(0x18 + r1) = r30; // stw @ 0x808A23B8
    *(0x14 + r1) = r29; // stw @ 0x808A23BC
    *(0x10 + r1) = r28; // stw @ 0x808A23C0
    r28 = r4;
    r5 = *(0 + r5); // lwz @ 0x808A23C8
    r3 = *(0 + r4); // lwz @ 0x808A23CC
    r4 = r31 + 0; // 0x808A23D0
    r30 = *(4 + r5); // lwz @ 0x808A23D4
    r0 = *(0 + r3); // lhz @ 0x808A23D8
    r3 = *(0xc + r30); // lwz @ 0x808A23DC
    /* slwi r29, r0, 1 */ // 0x808A23E0
    r5 = *(8 + r30); // lwz @ 0x808A23E4
    /* lhax r0, r3, r29 */ // 0x808A23E8
    /* mulli r0, r0, 0x74 */ // 0x808A23EC
    r3 = r5 + r0; // 0x808A23F0
    r3 = r3 + 2; // 0x808A23F4
    FUN_805E3430(r3); // bl 0x805E3430
}