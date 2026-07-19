/* Function at 0x806F35D0, size=144 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 3 function(s) */

int FUN_806F35D0(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r31, 0 */ // 0x806F35E0
    /* li r30, 0 */ // 0x806F35E8
    *(0x14 + r1) = r29; // stw @ 0x806F35EC
    *(0x10 + r1) = r28; // stw @ 0x806F35F0
    r28 = r3;
    /* b 0x806f3624 */ // 0x806F35F8
    r4 = r30;
    FUN_806E9970(r4); // bl 0x806E9970
    r29 = r3;
    r3 = r28;
    r4 = r29;
    FUN_806F3660(r4, r3, r4); // bl 0x806F3660
    r3 = r28;
    r4 = r29;
    FUN_806F3A9C(r3, r4, r3, r4); // bl 0x806F3A9C
    r30 = r30 + 1; // 0x806F3620
    r3 = *(0 + r31); // lwz @ 0x806F3624
    r0 = *(0x291c + r3); // lwz @ 0x806F3628
    /* mulli r0, r0, 0x58 */ // 0x806F362C
    r4 = r3 + r0; // 0x806F3630
    r0 = *(0x58 + r4); // lbz @ 0x806F3634
    if (<) goto 0x0x806f35fc;
    r0 = *(0x24 + r1); // lwz @ 0x806F3640
    r31 = *(0x1c + r1); // lwz @ 0x806F3644
    r30 = *(0x18 + r1); // lwz @ 0x806F3648
    r29 = *(0x14 + r1); // lwz @ 0x806F364C
    r28 = *(0x10 + r1); // lwz @ 0x806F3650
    return;
}