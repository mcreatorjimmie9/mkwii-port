/* Function at 0x80610B20, size=320 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_80610B20(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x80610B28
    /* lfs f0, 0(r4) */ // 0x80610B30
    *(0xc + r1) = r31; // stw @ 0x80610B34
    /* li r31, 0 */ // 0x80610B38
    *(8 + r1) = r30; // stw @ 0x80610B3C
    r30 = r3;
    *(0x118 + r3) = r31; // sth @ 0x80610B44
    r5 = *(0 + r3); // lwz @ 0x80610B48
    r4 = *(4 + r5); // lwz @ 0x80610B4C
    r0 = *(4 + r4); // lwz @ 0x80610B50
    r0 = r0 rlwinm 0; // rlwinm
    *(4 + r4) = r0; // stw @ 0x80610B58
    r4 = *(0 + r3); // lwz @ 0x80610B5C
    r4 = *(4 + r4); // lwz @ 0x80610B60
    r0 = *(8 + r4); // lwz @ 0x80610B64
    r0 = r0 rlwinm 0; // rlwinm
    *(8 + r4) = r0; // stw @ 0x80610B6C
    *(0x102 + r3) = r31; // sth @ 0x80610B70
    r4 = *(0 + r3); // lwz @ 0x80610B74
    /* stfs f0, 0x1b0(r3) */ // 0x80610B78
    r4 = *(4 + r4); // lwz @ 0x80610B7C
    r0 = *(4 + r4); // lwz @ 0x80610B80
    r0 = r0 rlwinm 0; // rlwinm
    *(4 + r4) = r0; // stw @ 0x80610B88
    FUN_8061E6D4(); // bl 0x8061E6D4
    *(0x1c4 + r30) = r31; // sth @ 0x80610B90
    r3 = r30;
    r6 = *(0 + r30); // lwz @ 0x80610B98
    /* li r4, 4 */ // 0x80610B9C
    /* li r5, 0 */ // 0x80610BA0
    r7 = *(4 + r6); // lwz @ 0x80610BA4
    /* li r6, 1 */ // 0x80610BA8
    r0 = *(4 + r7); // lwz @ 0x80610BAC
    /* clrlwi r0, r0, 1 */ // 0x80610BB0
    *(4 + r7) = r0; // stw @ 0x80610BB4
    FUN_8061E8CC(r6); // bl 0x8061E8CC
    *(0x12c + r30) = r31; // sth @ 0x80610BBC
    /* lis r3, 0 */ // 0x80610BC0
    r4 = *(0 + r30); // lwz @ 0x80610BC4
    /* lfs f0, 0(r3) */ // 0x80610BC8
    r3 = r30;
    r4 = *(4 + r4); // lwz @ 0x80610BD0
    r0 = *(8 + r4); // lwz @ 0x80610BD4
    r0 = r0 rlwinm 0; // rlwinm
    *(8 + r4) = r0; // stw @ 0x80610BDC
    r0 = *(0x254 + r30); // lhz @ 0x80610BE0
    *(0x14c + r30) = r31; // sth @ 0x80610BE4
    r0 = r0 rlwinm 0; // rlwinm
    r4 = *(0 + r30); // lwz @ 0x80610BEC
    r0 = r0 rlwinm 0; // rlwinm
    *(0x14e + r30) = r31; // sth @ 0x80610BF4
    *(0x150 + r30) = r31; // sth @ 0x80610BF8
    *(0x254 + r30) = r0; // sth @ 0x80610BFC
    *(0xec + r30) = r31; // stw @ 0x80610C00
    /* stfs f0, 0xf0(r30) */ // 0x80610C04
    r4 = *(4 + r4); // lwz @ 0x80610C08
    r0 = *(0xc + r4); // lwz @ 0x80610C0C
    r0 = r0 rlwinm 0; // rlwinm
    *(0xc + r4) = r0; // stw @ 0x80610C14
    r4 = *(0 + r30); // lwz @ 0x80610C18
    r4 = *(4 + r4); // lwz @ 0x80610C1C
    r0 = *(0xc + r4); // lwz @ 0x80610C20
    r0 = r0 rlwinm 0; // rlwinm
    *(0xc + r4) = r0; // stw @ 0x80610C28
    FUN_8061E6D4(); // bl 0x8061E6D4
    *(0x148 + r30) = r31; // sth @ 0x80610C30
    r3 = *(0 + r30); // lwz @ 0x80610C34
    r3 = *(4 + r3); // lwz @ 0x80610C38
    r0 = *(8 + r3); // lwz @ 0x80610C3C
    r0 = r0 rlwinm 0; // rlwinm
    *(8 + r3) = r0; // stw @ 0x80610C44
    r31 = *(0xc + r1); // lwz @ 0x80610C48
    r30 = *(8 + r1); // lwz @ 0x80610C4C
    r0 = *(0x14 + r1); // lwz @ 0x80610C50
    return;
}