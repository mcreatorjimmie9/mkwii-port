/* Function at 0x80833EF4, size=140 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_80833EF4(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80833F00
    r31 = r3;
    FUN_8082B688(); // bl 0x8082B688
    r3 = r31;
    /* li r4, 0 */ // 0x80833F10
    FUN_8083BE5C(r3, r4); // bl 0x8083BE5C
    if (==) goto 0x0x80833f58;
    r0 = *(0x74 + r31); // lwz @ 0x80833F20
    /* lis r3, 0 */ // 0x80833F24
    r3 = *(0 + r3); // lwz @ 0x80833F28
    r5 = r31 + 0x44; // 0x80833F2C
    r0 = r0 rlwinm 0; // rlwinm
    r4 = *(0xa + r31); // lha @ 0x80833F34
    /* cntlzw r0, r0 */ // 0x80833F38
    r3 = *(0x74 + r3); // lwz @ 0x80833F3C
    /* lfs f1, 0x68(r31) */ // 0x80833F40
    r6 = r31 + 0x2d4; // 0x80833F44
    r7 = *(0x160 + r31); // lwz @ 0x80833F48
    /* srwi r8, r0, 5 */ // 0x80833F4C
    FUN_8071CEF0(r6); // bl 0x8071CEF0
    /* b 0x80833f6c */ // 0x80833F54
    /* lis r3, 0 */ // 0x80833F58
    r4 = *(0xa + r31); // lha @ 0x80833F5C
    r3 = *(0 + r3); // lwz @ 0x80833F60
    r3 = *(0x74 + r3); // lwz @ 0x80833F64
    FUN_8071D034(r3); // bl 0x8071D034
    r0 = *(0x14 + r1); // lwz @ 0x80833F6C
    r31 = *(0xc + r1); // lwz @ 0x80833F70
    return;
}