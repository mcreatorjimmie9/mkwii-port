/* Function at 0x807B2F54, size=220 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_807B2F54(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x807B2F5C
    /* lis r4, 0 */ // 0x807B2F60
    *(0x44 + r1) = r0; // stw @ 0x807B2F64
    /* lfs f0, 0(r5) */ // 0x807B2F6C
    /* lis r5, 0 */ // 0x807B2F70
    *(0x3c + r1) = r31; // stw @ 0x807B2F74
    /* lis r31, 0x20e8 */ // 0x807B2F78
    r5 = r5 + 0; // 0x807B2F7C
    *(0x38 + r1) = r30; // stw @ 0x807B2F84
    /* li r30, 0 */ // 0x807B2F88
    r6 = r31 + 0xfff; // 0x807B2F8C
    /* li r9, 0 */ // 0x807B2F90
    *(0x34 + r1) = r29; // stw @ 0x807B2F94
    r29 = r3;
    /* lis r3, 0 */ // 0x807B2F9C
    /* lfs f1, 0(r4) */ // 0x807B2FA0
    r4 = r29 + 0x1d4; // 0x807B2FA4
    /* stfs f0, 0xc(r1) */ // 0x807B2FA8
    r3 = *(0 + r3); // lwz @ 0x807B2FAC
    /* stfs f0, 0x10(r1) */ // 0x807B2FB0
    /* stfs f0, 0x14(r1) */ // 0x807B2FB4
    /* stfs f0, 0x18(r1) */ // 0x807B2FB8
    /* stfs f0, 0x1c(r1) */ // 0x807B2FBC
    /* stfs f0, 0x20(r1) */ // 0x807B2FC0
    *(8 + r1) = r30; // stw @ 0x807B2FC4
    FUN_8081A3B4(); // bl 0x8081A3B4
    if (==) goto 0x0x807b3014;
    r0 = *(8 + r1); // lwz @ 0x807B2FD4
    r4 = r31 + 0xfff; // 0x807B2FD8
    /* and. r0, r0, r4 */ // 0x807B2FDC
    if (==) goto 0x0x807b2ff0;
    FUN_80842FAC(r4, r3); // bl 0x80842FAC
    /* b 0x807b2ff4 */ // 0x807B2FEC
    r3 = r30;
    if (==) goto 0x0x807b3014;
    /* lis r4, 0 */ // 0x807B2FFC
    r3 = *(0x20c + r29); // lwz @ 0x807B3000
    r4 = *(0 + r4); // lwz @ 0x807B3004
    r0 = *(4 + r4); // lhz @ 0x807B3008
    r0 = r0 rlwinm 0x18; // rlwinm
    *(0x21 + r3) = r0; // stb @ 0x807B3010
    r0 = *(0x44 + r1); // lwz @ 0x807B3014
    r31 = *(0x3c + r1); // lwz @ 0x807B3018
    r30 = *(0x38 + r1); // lwz @ 0x807B301C
    r29 = *(0x34 + r1); // lwz @ 0x807B3020
    return;
}