/* Function at 0x806154D0, size=172 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_806154D0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806154DC
    r31 = r3;
    FUN_80605AD8(); // bl 0x80605AD8
    r3 = r31;
    FUN_8061E28C(r3); // bl 0x8061E28C
    if (==) goto 0x0x80615504;
    if (==) goto 0x0x80615514;
    /* b 0x80615524 */ // 0x80615500
    /* lis r3, 0 */ // 0x80615504
    r3 = r3 + 0; // 0x80615508
    *(0x2c0 + r31) = r3; // stw @ 0x8061550C
    /* b 0x80615524 */ // 0x80615510
    /* lis r3, 0 */ // 0x80615514
    r3 = r3 + 0; // 0x80615518
    r0 = r3 + 0x30; // 0x8061551C
    *(0x2c0 + r31) = r0; // stw @ 0x80615520
    /* lis r3, 0 */ // 0x80615524
    /* li r4, 2 */ // 0x80615528
    r3 = *(0 + r3); // lwz @ 0x8061552C
    FUN_805C5788(r3, r4); // bl 0x805C5788
    if (!=) goto 0x0x80615554;
    r3 = *(0x2c0 + r31); // lwz @ 0x8061553C
    /* lfs f0, 0x18(r3) */ // 0x80615540
    /* stfs f0, 0x29c(r31) */ // 0x80615544
    /* lfs f0, 0x1c(r3) */ // 0x80615548
    /* stfs f0, 0x298(r31) */ // 0x8061554C
    /* b 0x80615568 */ // 0x80615550
    r3 = *(0x2c0 + r31); // lwz @ 0x80615554
    /* lfs f0, 4(r3) */ // 0x80615558
    /* stfs f0, 0x29c(r31) */ // 0x8061555C
    /* lfs f0, 8(r3) */ // 0x80615560
    /* stfs f0, 0x298(r31) */ // 0x80615564
    r0 = *(0x14 + r1); // lwz @ 0x80615568
    r31 = *(0xc + r1); // lwz @ 0x8061556C
    return;
}