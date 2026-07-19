/* Function at 0x806F2994, size=208 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 2 function(s) */

int FUN_806F2994(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* stmw r27, 0xc(r1) */ // 0x806F29A0
    r30 = r3;
    /* li r31, 0 */ // 0x806F29A8
    /* lis r29, 0 */ // 0x806F29AC
    /* li r28, 1 */ // 0x806F29B0
    r4 = *(0 + r29); // lwz @ 0x806F29B4
    /* clrlwi r0, r31, 0x18 */ // 0x806F29B8
    r3 = r28 << r0; // slw
    r0 = *(0x291c + r4); // lwz @ 0x806F29C0
    /* mulli r0, r0, 0x58 */ // 0x806F29C4
    r4 = r4 + r0; // 0x806F29C8
    r0 = *(0x48 + r4); // lwz @ 0x806F29CC
    /* and. r0, r3, r0 */ // 0x806F29D0
    if (==) goto 0x0x806f2a44;
    r0 = *(0x59 + r4); // lbz @ 0x806F29D8
    if (==) goto 0x0x806f2a44;
    /* li r27, 0 */ // 0x806F29E4
    /* b 0x806f2a00 */ // 0x806F29E8
    r3 = r30;
    r4 = r27;
    /* clrlwi r5, r31, 0x18 */ // 0x806F29F4
    FUN_806F336C(r3, r4); // bl 0x806F336C
    r27 = r27 + 1; // 0x806F29FC
    r5 = *(0 + r29); // lwz @ 0x806F2A00
    r0 = *(0x291c + r5); // lwz @ 0x806F2A04
    /* mulli r0, r0, 0x58 */ // 0x806F2A08
    r3 = r5 + r0; // 0x806F2A0C
    r0 = *(0x58 + r3); // lbz @ 0x806F2A10
    if (<) goto 0x0x806f29ec;
    r3 = r31 rlwinm 2; // rlwinm
    r4 = r30;
    r3 = r5 + r3; // 0x806F2A24
    r5 = r0 rlwinm 3; // rlwinm
    r0 = *(0x276c + r3); // lwz @ 0x806F2A2C
    /* mulli r0, r0, 0x30 */ // 0x806F2A30
    r3 = r0 + r3; // 0x806F2A34
    r3 = *(0xf0 + r3); // lwz @ 0x806F2A38
    r3 = *(0x18 + r3); // lwz @ 0x806F2A3C
    FUN_806E9F64(); // bl 0x806E9F64
    r31 = r31 + 1; // 0x806F2A44
    if (<) goto 0x0x806f29b4;
    r0 = *(0x24 + r1); // lwz @ 0x806F2A54
    return;
}