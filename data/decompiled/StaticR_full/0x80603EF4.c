/* Function at 0x80603EF4, size=140 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_80603EF4(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80603F00
    r31 = r3;
    r4 = *(0 + r3); // lwz @ 0x80603F08
    r4 = *(4 + r4); // lwz @ 0x80603F0C
    r0 = *(8 + r4); // lwz @ 0x80603F10
    /* rlwinm. r0, r0, 0, 9, 9 */ // 0x80603F14
    if (==) goto 0x0x80603f28;
    FUN_8061DC28(); // bl 0x8061DC28
    r4 = r31 + 0x3c; // 0x80603F20
    FUN_8062A14C(r4); // bl 0x8062A14C
    r5 = *(0 + r31); // lwz @ 0x80603F28
    /* li r0, 0 */ // 0x80603F2C
    r3 = r31;
    /* li r4, 5 */ // 0x80603F34
    r8 = *(4 + r5); // lwz @ 0x80603F38
    /* li r5, 0 */ // 0x80603F3C
    /* li r6, 1 */ // 0x80603F40
    r7 = *(8 + r8); // lwz @ 0x80603F44
    r7 = r7 rlwinm 0; // rlwinm
    *(8 + r8) = r7; // stw @ 0x80603F4C
    r7 = *(0 + r31); // lwz @ 0x80603F50
    r8 = *(4 + r7); // lwz @ 0x80603F54
    r7 = *(8 + r8); // lwz @ 0x80603F58
    r7 = r7 rlwinm 0; // rlwinm
    *(8 + r8) = r7; // stw @ 0x80603F60
    *(0x3a + r31) = r0; // stb @ 0x80603F64
    FUN_8061E8CC(); // bl 0x8061E8CC
    r0 = *(0x14 + r1); // lwz @ 0x80603F6C
    r31 = *(0xc + r1); // lwz @ 0x80603F70
    return;
}