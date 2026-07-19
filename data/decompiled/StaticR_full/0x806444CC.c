/* Function at 0x806444CC, size=288 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 10 function(s) */

int FUN_806444CC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x806444E0
    r6 = *(0 + r3); // lwz @ 0x806444E4
    r5 = *(4 + r6); // lwz @ 0x806444E8
    r0 = *(8 + r5); // lwz @ 0x806444EC
    /* rlwinm. r0, r0, 0, 0x15, 0x15 */ // 0x806444F0
    if (==) goto 0x0x80644518;
    r5 = *(4 + r6); // lwz @ 0x806444F8
    r0 = *(0x1c + r5); // lwz @ 0x806444FC
    if (<=) goto 0x0x80644518;
    if (==) goto 0x0x80644518;
    FUN_8061DFF8(); // bl 0x8061DFF8
    FUN_8060D1A8(); // bl 0x8060D1A8
    r3 = *(0 + r31); // lwz @ 0x80644518
    r3 = *(4 + r3); // lwz @ 0x8064451C
    r0 = *(8 + r3); // lwz @ 0x80644520
    /* rlwinm. r0, r0, 0, 0x10, 0x10 */ // 0x80644524
    if (==) goto 0x0x8064453c;
    r3 = r31;
    FUN_8061DC28(r3); // bl 0x8061DC28
    r4 = r31 + 0x7c; // 0x80644534
    FUN_8062A14C(r3, r4); // bl 0x8062A14C
    r3 = *(0 + r31); // lwz @ 0x8064453C
    r3 = *(4 + r3); // lwz @ 0x80644540
    r0 = *(8 + r3); // lwz @ 0x80644544
    /* rlwinm. r0, r0, 0, 0x15, 0x15 */ // 0x80644548
    if (==) goto 0x0x806445bc;
    r3 = r31;
    FUN_8061DC48(r3); // bl 0x8061DC48
    r30 = r3;
    r3 = r31;
    FUN_8061DFF8(r3, r3); // bl 0x8061DFF8
    r5 = r3;
    /* lis r4, 0 */ // 0x80644568
    r3 = r30 + 0xf0; // 0x8064456C
    r4 = r4 + 0; // 0x80644570
    r5 = r5 + 0x5c; // 0x80644574
    FUN_805E3430(r5, r4, r3, r4, r5); // bl 0x805E3430
    r3 = r31;
    FUN_8061DFF8(r3, r4, r5, r3); // bl 0x8061DFF8
    r30 = r3;
    r3 = r31;
    FUN_8061DFF8(r3, r3); // bl 0x8061DFF8
    /* lfs f0, 0x5c(r30) */ // 0x80644590
    /* li r4, 5 */ // 0x80644594
    /* stfs f0, 0x74(r3) */ // 0x80644598
    /* li r5, 0 */ // 0x8064459C
    /* li r6, 1 */ // 0x806445A0
    /* lfs f0, 0x60(r30) */ // 0x806445A4
    /* stfs f0, 0x78(r3) */ // 0x806445A8
    /* lfs f0, 0x64(r30) */ // 0x806445AC
    /* stfs f0, 0x7c(r3) */ // 0x806445B0
    r3 = r31;
    FUN_8061E8CC(r3); // bl 0x8061E8CC
    r3 = *(0 + r31); // lwz @ 0x806445BC
    /* li r0, -1 */ // 0x806445C0
    r4 = *(4 + r3); // lwz @ 0x806445C4
    r3 = *(8 + r4); // lwz @ 0x806445C8
    r3 = r3 rlwinm 0; // rlwinm
    *(8 + r4) = r3; // stw @ 0x806445D0
    r3 = *(0 + r31); // lwz @ 0x806445D4
    r4 = *(4 + r3); // lwz @ 0x806445D8
    r3 = *(8 + r4); // lwz @ 0x806445DC
    r3 = r3 rlwinm 0; // rlwinm
    *(8 + r4) = r3; // stw @ 0x806445E4
    r3 = *(0 + r31); // lwz @ 0x806445E8
}