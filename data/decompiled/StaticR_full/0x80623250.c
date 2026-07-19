/* Function at 0x80623250, size=292 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_80623250(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x80623258
    *(0x14 + r1) = r0; // stw @ 0x8062325C
    *(0xc + r1) = r31; // stw @ 0x80623260
    r31 = r3;
    r3 = *(0 + r4); // lwz @ 0x80623268
    FUN_805C25E8(r4); // bl 0x805C25E8
    if (!=) goto 0x0x80623360;
    r3 = *(0x18 + r31); // lwz @ 0x80623278
    FUN_8061DEE0(); // bl 0x8061DEE0
    if (!=) goto 0x0x80623348;
    /* lis r3, 0 */ // 0x80623288
    r3 = *(0 + r3); // lwz @ 0x8062328C
    r0 = *(0xb68 + r3); // lwz @ 0x80623290
    if (==) goto 0x0x80623348;
    if (==) goto 0x0x80623348;
    r0 = *(4 + r31); // lwz @ 0x806232A4
    /* clrlwi. r0, r0, 0x1f */ // 0x806232A8
    if (==) goto 0x0x80623348;
    /* lis r4, 0 */ // 0x806232B0
    /* lfs f1, 0x9c(r31) */ // 0x806232B4
    r3 = r4 + 0; // 0x806232B8
    /* lfs f0, 0x28(r3) */ // 0x806232BC
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x806232C0
    if (<=) goto 0x0x806232d4;
    /* li r0, -1 */ // 0x806232C8
    *(0xa0 + r31) = r0; // stw @ 0x806232CC
    /* b 0x80623348 */ // 0x806232D0
    /* lfs f0, 0(r4) */ // 0x806232D4
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x806232D8
    if (<=) goto 0x0x80623348;
    /* li r0, 5 */ // 0x806232E0
    /* li r4, 1 */ // 0x806232E4
    /* mtctr r0 */ // 0x806232E8
    r0 = r4 rlwinm 3; // rlwinm
    /* lfs f1, 0x9c(r31) */ // 0x806232F0
    r5 = r3 + r0; // 0x806232F4
    /* lfs f0, -8(r5) */ // 0x806232F8
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x806232FC
    if (<=) goto 0x0x80623340;
    /* lfs f0, 0(r5) */ // 0x80623304
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x80623308
    /* cror cr0eq, cr0lt, cr0eq */ // 0x8062330C
    if (!=) goto 0x0x80623340;
    /* clrlwi r0, r4, 0x18 */ // 0x80623314
    *(0xa0 + r31) = r0; // stw @ 0x80623318
    r3 = *(0x18 + r31); // lwz @ 0x8062331C
    r3 = *(0 + r3); // lwz @ 0x80623320
    r3 = *(0 + r3); // lwz @ 0x80623324
    r3 = *(0x34 + r3); // lwz @ 0x80623328
    if (==) goto 0x0x80623348;
    /* li r0, 1 */ // 0x80623334
    *(0 + r3) = r0; // stb @ 0x80623338
    /* b 0x80623348 */ // 0x8062333C
    r4 = r4 + 1; // 0x80623340
    if (counter-- != 0) goto 0x0x806232ec;
    r4 = *(0xa0 + r31); // lwz @ 0x80623348
    r3 = r31;
    FUN_80623374(r4, r3); // bl 0x80623374
    r0 = *(0x10 + r31); // lwz @ 0x80623354
    r0 = r0 rlwinm 0; // rlwinm
    *(0x10 + r31) = r0; // stw @ 0x8062335C
    r0 = *(0x14 + r1); // lwz @ 0x80623360
    r31 = *(0xc + r1); // lwz @ 0x80623364
    return;
}