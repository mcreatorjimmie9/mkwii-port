/* Function at 0x8082E254, size=432 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 9 function(s) */

int FUN_8082E254(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x8082E268
    *(0x14 + r1) = r29; // stw @ 0x8082E26C
    r4 = *(0x78 + r3); // lwz @ 0x8082E270
    /* rlwinm. r0, r4, 0, 8, 0xa */ // 0x8082E274
    if (==) goto 0x0x8082e2ec;
    r4 = r31;
    /* li r3, 0 */ // 0x8082E280
    /* li r5, 1 */ // 0x8082E284
    FUN_808279F4(r4, r3, r5); // bl 0x808279F4
    r4 = r31;
    /* li r5, 0 */ // 0x8082E290
    FUN_808279F4(r3, r5, r4, r5); // bl 0x808279F4
    r0 = *(0x7c + r31); // lwz @ 0x8082E298
    r3 = r31;
    r0 = r0 | 0x80; // 0x8082E2A0
    *(0x7c + r31) = r0; // stw @ 0x8082E2A4
    FUN_80828374(r3); // bl 0x80828374
    r0 = *(0x78 + r31); // lwz @ 0x8082E2AC
    /* rlwinm. r0, r0, 0, 0xa, 0xa */ // 0x8082E2B0
    if (==) goto 0x0x8082e2c0;
    r3 = r31;
    FUN_80831A0C(r3); // bl 0x80831A0C
    r0 = *(0x78 + r31); // lwz @ 0x8082E2C0
    /* rlwinm. r0, r0, 0, 9, 9 */ // 0x8082E2C4
    if (==) goto 0x0x8082e2d4;
    r3 = r31;
    FUN_80831FF8(r3); // bl 0x80831FF8
    r0 = *(0x78 + r31); // lwz @ 0x8082E2D4
    /* rlwinm. r0, r0, 0, 8, 8 */ // 0x8082E2D8
    if (==) goto 0x0x8082e3dc;
    r3 = r31;
    FUN_80832000(r3); // bl 0x80832000
    /* b 0x8082e3dc */ // 0x8082E2E8
    /* rlwinm. r0, r4, 0, 0x10, 0x10 */ // 0x8082E2EC
    if (==) goto 0x0x8082e364;
    r4 = r31;
    /* li r3, 0 */ // 0x8082E2F8
    /* li r5, 1 */ // 0x8082E2FC
    FUN_80826540(r4, r3, r5); // bl 0x80826540
    if (==) goto 0x0x8082e334;
    r0 = *(0x78 + r31); // lwz @ 0x8082E30C
    /* lis r12, 0 */ // 0x8082E310
    r3 = *(4 + r31); // lwz @ 0x8082E314
    /* rlwinm. r0, r0, 0, 0x10, 0x10 */ // 0x8082E31C
    if (==) goto 0x0x8082e32c;
    /* lis r12, 0 */ // 0x8082E324
    /* mtctr r12 */ // 0x8082E32C
    /* bctrl  */ // 0x8082E330
    r4 = r31;
    /* li r5, 0 */ // 0x8082E338
    FUN_80826540(r4, r5); // bl 0x80826540
    r0 = *(0x7c + r31); // lwz @ 0x8082E340
    r3 = r31;
    r0 = r0 | 0x80; // 0x8082E348
    *(0x7c + r31) = r0; // stw @ 0x8082E34C
    r12 = *(0 + r31); // lwz @ 0x8082E350
    r12 = *(0x34 + r12); // lwz @ 0x8082E354
    /* mtctr r12 */ // 0x8082E358
    /* bctrl  */ // 0x8082E35C
    /* b 0x8082e3dc */ // 0x8082E360
    r0 = *(4 + r3); // lwz @ 0x8082E364
    /* lis r6, 0 */ // 0x8082E368
    r6 = r6 + 0; // 0x8082E36C
    r4 = r31;
    /* mulli r0, r0, 0x74 */ // 0x8082E374
    /* li r3, 0 */ // 0x8082E378
    /* li r5, 1 */ // 0x8082E37C
    r6 = r6 + r0; // 0x8082E380
    r30 = *(0x24 + r6); // lwz @ 0x8082E384
    r12 = r30;
    /* mtctr r12 */ // 0x8082E38C
    /* bctrl  */ // 0x8082E390
    r0 = *(0x78 + r31); // lwz @ 0x8082E394
    r29 = r3;
    r3 = r0 rlwinm 7; // rlwinm
    FUN_8085841C(); // bl 0x8085841C
    r12 = r30;
    r3 = r29;
    r4 = r31;
    /* li r5, 0 */ // 0x8082E3B0
    /* mtctr r12 */ // 0x8082E3B4
    /* bctrl  */ // 0x8082E3B8
    r0 = *(0x7c + r31); // lwz @ 0x8082E3BC
    r3 = r31;
    r0 = r0 | 0x80; // 0x8082E3C4
    *(0x7c + r31) = r0; // stw @ 0x8082E3C8
    r12 = *(0 + r31); // lwz @ 0x8082E3CC
    r12 = *(0x30 + r12); // lwz @ 0x8082E3D0
    /* mtctr r12 */ // 0x8082E3D4
    /* bctrl  */ // 0x8082E3D8
    r0 = *(0x7c + r31); // lwz @ 0x8082E3DC
    r0 = r0 | 2; // 0x8082E3E0
    *(0x7c + r31) = r0; // stw @ 0x8082E3E4
    r31 = *(0x1c + r1); // lwz @ 0x8082E3E8
    r30 = *(0x18 + r1); // lwz @ 0x8082E3EC
    r29 = *(0x14 + r1); // lwz @ 0x8082E3F0
    r0 = *(0x24 + r1); // lwz @ 0x8082E3F4
    return;
}