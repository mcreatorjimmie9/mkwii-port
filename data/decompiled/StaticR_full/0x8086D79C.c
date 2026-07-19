/* Function at 0x8086D79C, size=112 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 1 function(s) */

void FUN_8086D79C(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* lis r3, 0 */ // 0x8086D7A4
    *(0x24 + r1) = r0; // stw @ 0x8086D7A8
    /* stmw r27, 0xc(r1) */ // 0x8086D7AC
    /* li r30, 0xc */ // 0x8086D7B0
    /* li r29, 0 */ // 0x8086D7B4
    /* li r31, 0 */ // 0x8086D7B8
    r27 = *(0 + r3); // lwz @ 0x8086D7BC
    *(8 + r27) = r30; // stb @ 0x8086D7C0
    r28 = r27;
    /* b 0x8086d7ec */ // 0x8086D7C8
    r4 = *(0x18 + r28); // lwz @ 0x8086D7CC
    *(8 + r4) = r30; // stw @ 0x8086D7D0
    *(0xc + r4) = r31; // stb @ 0x8086D7D4
    r3 = *(0 + r4); // lwz @ 0x8086D7D8
    r4 = *(4 + r4); // lwz @ 0x8086D7DC
    FUN_805ECA18(); // bl 0x805ECA18
    r28 = r28 + 4; // 0x8086D7E4
    r29 = r29 + 1; // 0x8086D7E8
    r0 = *(4 + r27); // lwz @ 0x8086D7EC
    if (<) goto 0x0x8086d7cc;
    r0 = *(0x24 + r1); // lwz @ 0x8086D7FC
    return;
}