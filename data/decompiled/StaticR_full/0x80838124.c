/* Function at 0x80838124, size=160 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_80838124(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80838130
    r31 = r3;
    FUN_8082B664(); // bl 0x8082B664
    r3 = r31;
    /* li r4, 0 */ // 0x80838140
    FUN_8083BE5C(r3, r4); // bl 0x8083BE5C
    if (==) goto 0x0x8083819c;
    r0 = *(0x7c + r31); // lwz @ 0x80838150
    /* lis r3, 0 */ // 0x80838154
    r3 = *(0 + r3); // lwz @ 0x80838158
    /* rlwinm. r0, r0, 0, 0x1c, 0x1c */ // 0x8083815C
    r0 = *(0x74 + r31); // lwz @ 0x80838160
    r7 = *(0x160 + r31); // lwz @ 0x80838164
    r3 = *(0x74 + r3); // lwz @ 0x80838168
    r4 = *(0xa + r31); // lha @ 0x8083816C
    r0 = r0 rlwinm 0x18; // rlwinm
    if (==) goto 0x0x80838180;
    r5 = r31 + 0x8c; // 0x80838178
    /* b 0x80838184 */ // 0x8083817C
    r5 = *(0x98 + r31); // lwz @ 0x80838180
    /* cntlzw r0, r0 */ // 0x80838184
    /* lfs f1, 0x68(r31) */ // 0x80838188
    r6 = r31 + 0x1e0; // 0x8083818C
    /* srwi r8, r0, 5 */ // 0x80838190
    FUN_8071CE9C(r6); // bl 0x8071CE9C
    /* b 0x808381b0 */ // 0x80838198
    /* lis r3, 0 */ // 0x8083819C
    r4 = *(0xa + r31); // lha @ 0x808381A0
    r3 = *(0 + r3); // lwz @ 0x808381A4
    r3 = *(0x74 + r3); // lwz @ 0x808381A8
    FUN_8071D008(r3); // bl 0x8071D008
    r0 = *(0x14 + r1); // lwz @ 0x808381B0
    r31 = *(0xc + r1); // lwz @ 0x808381B4
    return;
}