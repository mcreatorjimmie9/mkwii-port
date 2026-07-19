/* Function at 0x8065F3CC, size=168 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 4 function(s) */

int FUN_8065F3CC(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* lis r4, 0x1062 */ // 0x8065F3D4
    *(0x24 + r1) = r0; // stw @ 0x8065F3D8
    /* li r0, 0 */ // 0x8065F3DC
    /* stmw r26, 8(r1) */ // 0x8065F3E0
    /* li r30, 0xa */ // 0x8065F3E4
    r31 = r0 * r30; // 0x8065F3E8
    r26 = r3;
    r28 = r4 + 0x4dd3; // 0x8065F3F0
    /* lis r27, 0 */ // 0x8065F3F4
    /* lis r29, -0x8000 */ // 0x8065F3F8
    /* b 0x8065f448 */ // 0x8065F3FC
    r3 = *(0 + r27); // lwz @ 0x8065F400
    r3 = *(0x90 + r3); // lwz @ 0x8065F404
    FUN_80684590(); // bl 0x80684590
    if (!=) goto 0x0x8065f460;
    r3 = *(0 + r27); // lwz @ 0x8065F414
    r3 = *(0x90 + r3); // lwz @ 0x8065F418
    FUN_806843C8(); // bl 0x806843C8
    r3 = r26;
    FUN_8065F4D8(r3); // bl 0x8065F4D8
    r0 = *(0xf8 + r29); // lwz @ 0x8065F428
    /* srwi r0, r0, 2 */ // 0x8065F42C
    r0 = r28 * r0; // 0x8065F430
    /* srwi r3, r0, 6 */ // 0x8065F434
    r0 = r3 * r30; // 0x8065F438
    /* mulli r4, r3, 0xa */ // 0x8065F43C
    r3 = r0 + r31; // 0x8065F440
    FUN_805E3430(); // bl 0x805E3430
    r0 = *(0x94 + r26); // lwz @ 0x8065F448
    if (!=) goto 0x0x8065f400;
    r0 = *(0x9c + r26); // lwz @ 0x8065F454
    if (!=) goto 0x0x8065f400;
    r0 = *(0x24 + r1); // lwz @ 0x8065F464
    return;
}