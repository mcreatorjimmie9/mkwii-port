/* Function at 0x808381C4, size=140 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_808381C4(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x808381D0
    r31 = r3;
    FUN_8082B688(); // bl 0x8082B688
    r3 = r31;
    /* li r4, 0 */ // 0x808381E0
    FUN_8083BE5C(r3, r4); // bl 0x8083BE5C
    if (==) goto 0x0x80838228;
    r0 = *(0x74 + r31); // lwz @ 0x808381F0
    /* lis r3, 0 */ // 0x808381F4
    r3 = *(0 + r3); // lwz @ 0x808381F8
    r5 = r31 + 0x44; // 0x808381FC
    r0 = r0 rlwinm 0; // rlwinm
    r4 = *(0xa + r31); // lha @ 0x80838204
    /* cntlzw r0, r0 */ // 0x80838208
    r3 = *(0x74 + r3); // lwz @ 0x8083820C
    /* lfs f1, 0x68(r31) */ // 0x80838210
    r6 = r31 + 0x1e0; // 0x80838214
    r7 = *(0x160 + r31); // lwz @ 0x80838218
    /* srwi r8, r0, 5 */ // 0x8083821C
    FUN_8071CE9C(r6); // bl 0x8071CE9C
    /* b 0x8083823c */ // 0x80838224
    /* lis r3, 0 */ // 0x80838228
    r4 = *(0xa + r31); // lha @ 0x8083822C
    r3 = *(0 + r3); // lwz @ 0x80838230
    r3 = *(0x74 + r3); // lwz @ 0x80838234
    FUN_8071D008(r3); // bl 0x8071D008
    r0 = *(0x14 + r1); // lwz @ 0x8083823C
    r31 = *(0xc + r1); // lwz @ 0x80838240
    return;
}