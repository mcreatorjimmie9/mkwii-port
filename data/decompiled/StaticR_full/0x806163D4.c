/* Function at 0x806163D4, size=340 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_806163D4(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x806163DC
    /* lfs f0, 0(r4) */ // 0x806163E4
    *(0xc + r1) = r31; // stw @ 0x806163E8
    /* li r31, 0 */ // 0x806163EC
    *(8 + r1) = r30; // stw @ 0x806163F0
    r30 = r3;
    *(0x118 + r3) = r31; // sth @ 0x806163F8
    r5 = *(0 + r3); // lwz @ 0x806163FC
    r4 = *(4 + r5); // lwz @ 0x80616400
    r0 = *(4 + r4); // lwz @ 0x80616404
    r0 = r0 rlwinm 0; // rlwinm
    *(4 + r4) = r0; // stw @ 0x8061640C
    r4 = *(0 + r3); // lwz @ 0x80616410
    r4 = *(4 + r4); // lwz @ 0x80616414
    r0 = *(8 + r4); // lwz @ 0x80616418
    r0 = r0 rlwinm 0; // rlwinm
    *(8 + r4) = r0; // stw @ 0x80616420
    *(0x102 + r3) = r31; // sth @ 0x80616424
    r4 = *(0 + r3); // lwz @ 0x80616428
    /* stfs f0, 0x1b0(r3) */ // 0x8061642C
    r4 = *(4 + r4); // lwz @ 0x80616430
    r0 = *(4 + r4); // lwz @ 0x80616434
    r0 = r0 rlwinm 0; // rlwinm
    *(4 + r4) = r0; // stw @ 0x8061643C
    FUN_8061E6D4(); // bl 0x8061E6D4
    *(0x1c4 + r30) = r31; // sth @ 0x80616444
    r3 = r30;
    r6 = *(0 + r30); // lwz @ 0x8061644C
    /* li r4, 4 */ // 0x80616450
    /* li r5, 0 */ // 0x80616454
    r7 = *(4 + r6); // lwz @ 0x80616458
    /* li r6, 1 */ // 0x8061645C
    r0 = *(4 + r7); // lwz @ 0x80616460
    /* clrlwi r0, r0, 1 */ // 0x80616464
    *(4 + r7) = r0; // stw @ 0x80616468
    FUN_8061E8CC(r6); // bl 0x8061E8CC
    *(0x12c + r30) = r31; // sth @ 0x80616470
    /* lis r3, 0 */ // 0x80616474
    r4 = *(0 + r30); // lwz @ 0x80616478
    /* lfs f0, 0(r3) */ // 0x8061647C
    r3 = r30;
    r4 = *(4 + r4); // lwz @ 0x80616484
    r0 = *(8 + r4); // lwz @ 0x80616488
    r0 = r0 rlwinm 0; // rlwinm
    *(8 + r4) = r0; // stw @ 0x80616490
    r0 = *(0x254 + r30); // lhz @ 0x80616494
    *(0x14c + r30) = r31; // sth @ 0x80616498
    r0 = r0 rlwinm 0; // rlwinm
    r4 = *(0 + r30); // lwz @ 0x806164A0
    r0 = r0 rlwinm 0; // rlwinm
    *(0x14e + r30) = r31; // sth @ 0x806164A8
    *(0x150 + r30) = r31; // sth @ 0x806164AC
    *(0x254 + r30) = r0; // sth @ 0x806164B0
    *(0xec + r30) = r31; // stw @ 0x806164B4
    /* stfs f0, 0xf0(r30) */ // 0x806164B8
    r4 = *(4 + r4); // lwz @ 0x806164BC
    r0 = *(0xc + r4); // lwz @ 0x806164C0
    r0 = r0 rlwinm 0; // rlwinm
    *(0xc + r4) = r0; // stw @ 0x806164C8
    r4 = *(0 + r30); // lwz @ 0x806164CC
    r4 = *(4 + r4); // lwz @ 0x806164D0
    r0 = *(0xc + r4); // lwz @ 0x806164D4
    r0 = r0 rlwinm 0; // rlwinm
    *(0xc + r4) = r0; // stw @ 0x806164DC
    FUN_8061E6D4(); // bl 0x8061E6D4
    *(0x148 + r30) = r31; // sth @ 0x806164E4
    r3 = r30;
    r4 = *(0 + r30); // lwz @ 0x806164EC
    r4 = *(4 + r4); // lwz @ 0x806164F0
    r0 = *(8 + r4); // lwz @ 0x806164F4
    r0 = r0 rlwinm 0; // rlwinm
    *(8 + r4) = r0; // stw @ 0x806164FC
    r12 = *(0xc + r30); // lwz @ 0x80616500
    r12 = *(0x70 + r12); // lwz @ 0x80616504
    /* mtctr r12 */ // 0x80616508
    /* bctrl  */ // 0x8061650C
    r0 = *(0x14 + r1); // lwz @ 0x80616510
    r31 = *(0xc + r1); // lwz @ 0x80616514
    r30 = *(8 + r1); // lwz @ 0x80616518
    return;
}