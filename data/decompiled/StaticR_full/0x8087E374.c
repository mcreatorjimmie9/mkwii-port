/* Function at 0x8087E374, size=268 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 10 function(s) */

int FUN_8087E374(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 1 */ // 0x8087E37C
    *(0x1c + r1) = r31; // stw @ 0x8087E384
    *(0x18 + r1) = r30; // stw @ 0x8087E388
    r30 = r3;
    r3 = r3 + 0x98; // 0x8087E390
    FUN_8069F4A0(r3); // bl 0x8069F4A0
    /* lis r31, 0 */ // 0x8087E398
    /* li r4, 1 */ // 0x8087E39C
    /* lfs f1, 0(r31) */ // 0x8087E3A0
    FUN_8069F59C(r3, r4); // bl 0x8069F59C
    r3 = r30 + 0x98; // 0x8087E3A8
    /* li r4, 0 */ // 0x8087E3AC
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    r4 = *(0x198 + r30); // lbz @ 0x8087E3B4
    /* lis r0, 0x4330 */ // 0x8087E3B8
    *(0xc + r1) = r4; // stw @ 0x8087E3BC
    /* lis r4, 0 */ // 0x8087E3C0
    /* lfd f2, 0(r4) */ // 0x8087E3C4
    /* lis r5, 0 */ // 0x8087E3C8
    *(8 + r1) = r0; // stw @ 0x8087E3CC
    /* li r4, 0 */ // 0x8087E3D0
    /* lfs f0, 0(r5) */ // 0x8087E3D4
    /* lfd f1, 8(r1) */ // 0x8087E3D8
    /* fsubs f1, f1, f2 */ // 0x8087E3DC
    /* fsubs f1, f1, f0 */ // 0x8087E3E0
    FUN_8069F7A0(r4); // bl 0x8069F7A0
    r3 = r30;
    FUN_80876FEC(r3); // bl 0x80876FEC
    *(0x19c + r30) = r3; // stw @ 0x8087E3F0
    /* lis r3, 0 */ // 0x8087E3F4
    r3 = *(0 + r3); // lwz @ 0x8087E3F8
    r0 = *(0xb90 + r3); // lwz @ 0x8087E3FC
    /* rlwinm. r0, r0, 0, 0x1e, 0x1e */ // 0x8087E400
    if (!=) goto 0x0x8087e414;
    r0 = *(0x25 + r3); // lbz @ 0x8087E408
    if (==) goto 0x0x8087e430;
    /* lis r4, 0 */ // 0x8087E414
    r3 = r30;
    r4 = r4 + 0; // 0x8087E41C
    /* li r5, 1 */ // 0x8087E420
    r4 = r4 + 0x10; // 0x8087E424
    FUN_80876714(r4, r3, r4, r5, r4); // bl 0x80876714
    /* b 0x8087e448 */ // 0x8087E42C
    r3 = r30 + 0x98; // 0x8087E430
    /* li r4, 2 */ // 0x8087E434
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x8087E43C
    /* li r4, 0 */ // 0x8087E440
    FUN_8069F7A0(r3, r4, r4); // bl 0x8069F7A0
    /* lis r4, 0 */ // 0x8087E448
    r3 = r30 + 0xa8; // 0x8087E44C
    r4 = r4 + 0; // 0x8087E450
    r4 = r4 + 0x19; // 0x8087E454
    FUN_80665D1C(r4, r3, r4, r4); // bl 0x80665D1C
    *(0x1a0 + r30) = r3; // stw @ 0x8087E45C
    r3 = r30;
    FUN_806A0740(r4, r4, r3); // bl 0x806A0740
    r0 = *(0x24 + r1); // lwz @ 0x8087E468
    r31 = *(0x1c + r1); // lwz @ 0x8087E46C
    r30 = *(0x18 + r1); // lwz @ 0x8087E470
    return;
}