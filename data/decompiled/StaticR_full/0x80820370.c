/* Function at 0x80820370, size=116 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80820370(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r5, 0 */ // 0x80820378
    *(0xc + r1) = r31; // stw @ 0x80820380
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80820388
    r30 = r3;
    r6 = *(0x50 + r3); // lwz @ 0x80820390
    r0 = r6 + -1; // 0x80820394
    *(0x50 + r3) = r0; // stw @ 0x80820398
    r0 = *(4 + r4); // lwz @ 0x8082039C
    r3 = *(0 + r5); // lwz @ 0x808203A0
    /* mulli r0, r0, 0x24 */ // 0x808203A4
    r3 = r3 + r0; // 0x808203A8
    r3 = r3 + 0x48; // 0x808203AC
    FUN_80821284(r3); // bl 0x80821284
    r3 = *(0xc + r30); // lwz @ 0x808203B4
    r4 = r31;
    FUN_80823984(r3, r4); // bl 0x80823984
    r0 = *(0x78 + r31); // lwz @ 0x808203C0
    r0 = r0 rlwinm 0; // rlwinm
    *(0x78 + r31) = r0; // stw @ 0x808203C8
    r31 = *(0xc + r1); // lwz @ 0x808203CC
    r30 = *(8 + r1); // lwz @ 0x808203D0
    r0 = *(0x14 + r1); // lwz @ 0x808203D4
    return;
}