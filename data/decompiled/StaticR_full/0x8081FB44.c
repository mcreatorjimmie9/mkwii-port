/* Function at 0x8081FB44, size=200 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8081FB44(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r5;
    *(8 + r1) = r30; // stw @ 0x8081FB58
    r30 = r3;
    r6 = *(0x50 + r3); // lwz @ 0x8081FB60
    r0 = r6 + -1; // 0x8081FB64
    if (==) goto 0x0x8081fbb0;
    /* slwi r8, r0, 2 */ // 0x8081FB70
    /* slwi r6, r0, 1 */ // 0x8081FB74
    /* slwi r7, r4, 1 */ // 0x8081FB78
    /* slwi r0, r4, 2 */ // 0x8081FB7C
    r8 = r3 + r8; // 0x8081FB80
    r6 = r3 + r6; // 0x8081FB84
    r7 = r3 + r7; // 0x8081FB88
    r4 = r3 + r0; // 0x8081FB8C
    r11 = *(0x20 + r8); // lwz @ 0x8081FB90
    r10 = *(0x174 + r7); // lhz @ 0x8081FB94
    r9 = *(0x174 + r6); // lhz @ 0x8081FB98
    r0 = *(0x20 + r4); // lwz @ 0x8081FB9C
    *(0x20 + r8) = r0; // stw @ 0x8081FBA0
    *(0x174 + r6) = r10; // sth @ 0x8081FBA4
    *(0x20 + r4) = r11; // stw @ 0x8081FBA8
    *(0x174 + r7) = r9; // sth @ 0x8081FBAC
    r7 = *(0x50 + r3); // lwz @ 0x8081FBB0
    /* lis r6, 0 */ // 0x8081FBB4
    r4 = r31;
    r0 = r7 + -1; // 0x8081FBBC
    *(0x50 + r3) = r0; // stw @ 0x8081FBC0
    r0 = *(4 + r5); // lwz @ 0x8081FBC4
    r3 = *(0 + r6); // lwz @ 0x8081FBC8
    /* mulli r0, r0, 0x24 */ // 0x8081FBCC
    r3 = r3 + r0; // 0x8081FBD0
    r3 = r3 + 0x48; // 0x8081FBD4
    FUN_80821284(r3); // bl 0x80821284
    r3 = *(0xc + r30); // lwz @ 0x8081FBDC
    r4 = r31;
    FUN_80823984(r3, r4); // bl 0x80823984
    r0 = *(0x78 + r31); // lwz @ 0x8081FBE8
    r0 = r0 rlwinm 0; // rlwinm
    *(0x78 + r31) = r0; // stw @ 0x8081FBF0
    r31 = *(0xc + r1); // lwz @ 0x8081FBF4
    r30 = *(8 + r1); // lwz @ 0x8081FBF8
    r0 = *(0x14 + r1); // lwz @ 0x8081FBFC
    return;
}