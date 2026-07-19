/* Function at 0x806161CC, size=480 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_806161CC(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x806161DC
    r30 = r3;
    r5 = *(0 + r3); // lwz @ 0x806161E4
    r4 = *(4 + r5); // lwz @ 0x806161E8
    r0 = *(8 + r4); // lwz @ 0x806161EC
    /* rlwinm. r0, r0, 0, 0x15, 0x15 */ // 0x806161F0
    if (==) goto 0x0x80616208;
    r4 = *(4 + r5); // lwz @ 0x806161F8
    r0 = *(0x10 + r4); // lwz @ 0x806161FC
    r0 = r0 | 0x80; // 0x80616200
    *(0x10 + r4) = r0; // stw @ 0x80616204
    /* li r31, 0 */ // 0x80616208
    *(0x118 + r3) = r31; // sth @ 0x8061620C
    /* lis r4, 0 */ // 0x80616210
    r5 = *(0 + r3); // lwz @ 0x80616214
    /* lfs f0, 0(r4) */ // 0x80616218
    r4 = *(4 + r5); // lwz @ 0x8061621C
    r0 = *(4 + r4); // lwz @ 0x80616220
    r0 = r0 rlwinm 0; // rlwinm
    *(4 + r4) = r0; // stw @ 0x80616228
    r4 = *(0 + r3); // lwz @ 0x8061622C
    r4 = *(4 + r4); // lwz @ 0x80616230
    r0 = *(8 + r4); // lwz @ 0x80616234
    r0 = r0 rlwinm 0; // rlwinm
    *(8 + r4) = r0; // stw @ 0x8061623C
    *(0x102 + r3) = r31; // sth @ 0x80616240
    r4 = *(0 + r3); // lwz @ 0x80616244
    /* stfs f0, 0x1b0(r3) */ // 0x80616248
    r3 = r30;
    r4 = *(4 + r4); // lwz @ 0x80616250
    r0 = *(4 + r4); // lwz @ 0x80616254
    r0 = r0 rlwinm 0; // rlwinm
    *(4 + r4) = r0; // stw @ 0x8061625C
    FUN_8061E6D4(r3); // bl 0x8061E6D4
    *(0x1c4 + r30) = r31; // sth @ 0x80616264
    r3 = r30;
    r6 = *(0 + r30); // lwz @ 0x8061626C
    /* li r4, 4 */ // 0x80616270
    /* li r5, 0 */ // 0x80616274
    r7 = *(4 + r6); // lwz @ 0x80616278
    /* li r6, 1 */ // 0x8061627C
    r0 = *(4 + r7); // lwz @ 0x80616280
    /* clrlwi r0, r0, 1 */ // 0x80616284
    *(4 + r7) = r0; // stw @ 0x80616288
    FUN_8061E8CC(r6); // bl 0x8061E8CC
    *(0x12c + r30) = r31; // sth @ 0x80616290
    /* lis r3, 0 */ // 0x80616294
    r4 = *(0 + r30); // lwz @ 0x80616298
    /* lfs f0, 0(r3) */ // 0x8061629C
    r3 = r30;
    r4 = *(4 + r4); // lwz @ 0x806162A4
    r0 = *(8 + r4); // lwz @ 0x806162A8
    r0 = r0 rlwinm 0; // rlwinm
    *(8 + r4) = r0; // stw @ 0x806162B0
    r0 = *(0x254 + r30); // lhz @ 0x806162B4
    *(0x14c + r30) = r31; // sth @ 0x806162B8
    r0 = r0 rlwinm 0; // rlwinm
    r4 = *(0 + r30); // lwz @ 0x806162C0
    r0 = r0 rlwinm 0; // rlwinm
    *(0x14e + r30) = r31; // sth @ 0x806162C8
    *(0x150 + r30) = r31; // sth @ 0x806162CC
    *(0x254 + r30) = r0; // sth @ 0x806162D0
    *(0xec + r30) = r31; // stw @ 0x806162D4
    /* stfs f0, 0xf0(r30) */ // 0x806162D8
    r4 = *(4 + r4); // lwz @ 0x806162DC
    r0 = *(0xc + r4); // lwz @ 0x806162E0
    r0 = r0 rlwinm 0; // rlwinm
    *(0xc + r4) = r0; // stw @ 0x806162E8
    r4 = *(0 + r30); // lwz @ 0x806162EC
    r4 = *(4 + r4); // lwz @ 0x806162F0
    r0 = *(0xc + r4); // lwz @ 0x806162F4
    r0 = r0 rlwinm 0; // rlwinm
    *(0xc + r4) = r0; // stw @ 0x806162FC
    FUN_8061E6D4(); // bl 0x8061E6D4
    *(0x148 + r30) = r31; // sth @ 0x80616304
    /* li r4, 0 */ // 0x80616308
    r3 = *(0 + r30); // lwz @ 0x8061630C
    r3 = *(4 + r3); // lwz @ 0x80616310
    r0 = *(8 + r3); // lwz @ 0x80616314
    r0 = r0 rlwinm 0; // rlwinm
    *(8 + r3) = r0; // stw @ 0x8061631C
    r3 = *(0 + r30); // lwz @ 0x80616320
    r3 = *(4 + r3); // lwz @ 0x80616324
    r0 = *(0xc + r3); // lwz @ 0x80616328
    r0 = r0 rlwinm 0; // rlwinm
    *(0xc + r3) = r0; // stw @ 0x80616330
    r3 = *(0x25c + r30); // lwz @ 0x80616334
    FUN_806444CC(); // bl 0x806444CC
    r3 = *(0x258 + r30); // lwz @ 0x8061633C
    FUN_80603EF4(); // bl 0x80603EF4
    r4 = *(0 + r30); // lwz @ 0x80616344
    r3 = r30;
    r4 = *(4 + r4); // lwz @ 0x8061634C
    r0 = *(8 + r4); // lwz @ 0x80616350
    r0 = r0 rlwinm 0; // rlwinm
    *(8 + r4) = r0; // stw @ 0x80616358
    r4 = *(0 + r30); // lwz @ 0x8061635C
    r4 = *(4 + r4); // lwz @ 0x80616360
    r0 = *(0xc + r4); // lwz @ 0x80616364
    r0 = r0 rlwinm 0; // rlwinm
    *(0xc + r4) = r0; // stw @ 0x8061636C
    r4 = *(0 + r30); // lwz @ 0x80616370
    r4 = *(4 + r4); // lwz @ 0x80616374
    r0 = *(0xc + r4); // lwz @ 0x80616378
    r0 = r0 rlwinm 0; // rlwinm
    *(0xc + r4) = r0; // stw @ 0x80616380
    r12 = *(0xc + r30); // lwz @ 0x80616384
    r12 = *(0x70 + r12); // lwz @ 0x80616388
    /* mtctr r12 */ // 0x8061638C
    /* bctrl  */ // 0x80616390
    r0 = *(0x14 + r1); // lwz @ 0x80616394
    r31 = *(0xc + r1); // lwz @ 0x80616398
    r30 = *(8 + r1); // lwz @ 0x8061639C
    return;
}