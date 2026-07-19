/* Function at 0x806E85A8, size=96 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r24 */
/* Calls: 1 function(s) */

int FUN_806E85A8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -48(r1) */
    /* saved r24 */
    r0 = r4 rlwinm 3; // rlwinm
    r6 = r3 + r0; // 0x806E85B8
    /* stmw r24, 0x10(r1) */ // 0x806E85BC
    /* li r29, 0 */ // 0x806E85C0
    r25 = r4 rlwinm 2; // rlwinm
    r31 = r4;
    r5 = r3 + r25; // 0x806E85CC
    r30 = r3;
    /* li r4, 0 */ // 0x806E85D4
    *(0x1e4 + r6) = r29; // stw @ 0x806E85D8
    *(0x1e0 + r6) = r29; // stw @ 0x806E85DC
    *(0x2a4 + r6) = r29; // stw @ 0x806E85E0
    *(0x2a0 + r6) = r29; // stw @ 0x806E85E4
    *(0x244 + r6) = r29; // stw @ 0x806E85E8
    *(0x240 + r6) = r29; // stw @ 0x806E85EC
    *(0x304 + r6) = r29; // stw @ 0x806E85F0
    *(0x300 + r6) = r29; // stw @ 0x806E85F4
    r28 = *(0x1b0 + r5); // lwz @ 0x806E85F8
    r3 = *(0 + r28); // lwz @ 0x806E85FC
    r5 = *(4 + r28); // lwz @ 0x806E8600
    FUN_805E3430(); // bl 0x805E3430
}