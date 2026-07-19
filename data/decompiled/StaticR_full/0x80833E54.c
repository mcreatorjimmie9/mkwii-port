/* Function at 0x80833E54, size=160 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_80833E54(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80833E60
    r31 = r3;
    FUN_8082B664(); // bl 0x8082B664
    r3 = r31;
    /* li r4, 0 */ // 0x80833E70
    FUN_8083BE5C(r3, r4); // bl 0x8083BE5C
    if (==) goto 0x0x80833ecc;
    r0 = *(0x7c + r31); // lwz @ 0x80833E80
    /* lis r3, 0 */ // 0x80833E84
    r3 = *(0 + r3); // lwz @ 0x80833E88
    /* rlwinm. r0, r0, 0, 0x1c, 0x1c */ // 0x80833E8C
    r0 = *(0x74 + r31); // lwz @ 0x80833E90
    r7 = *(0x160 + r31); // lwz @ 0x80833E94
    r3 = *(0x74 + r3); // lwz @ 0x80833E98
    r4 = *(0xa + r31); // lha @ 0x80833E9C
    r0 = r0 rlwinm 0x18; // rlwinm
    if (==) goto 0x0x80833eb0;
    r5 = r31 + 0x8c; // 0x80833EA8
    /* b 0x80833eb4 */ // 0x80833EAC
    r5 = *(0x98 + r31); // lwz @ 0x80833EB0
    /* cntlzw r0, r0 */ // 0x80833EB4
    /* lfs f1, 0x68(r31) */ // 0x80833EB8
    r6 = r31 + 0x2d4; // 0x80833EBC
    /* srwi r8, r0, 5 */ // 0x80833EC0
    FUN_8071CEF0(r6); // bl 0x8071CEF0
    /* b 0x80833ee0 */ // 0x80833EC8
    /* lis r3, 0 */ // 0x80833ECC
    r4 = *(0xa + r31); // lha @ 0x80833ED0
    r3 = *(0 + r3); // lwz @ 0x80833ED4
    r3 = *(0x74 + r3); // lwz @ 0x80833ED8
    FUN_8071D034(r3); // bl 0x8071D034
    r0 = *(0x14 + r1); // lwz @ 0x80833EE0
    r31 = *(0xc + r1); // lwz @ 0x80833EE4
    return;
}