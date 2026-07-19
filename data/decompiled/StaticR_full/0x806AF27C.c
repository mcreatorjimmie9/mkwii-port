/* Function at 0x806AF27C, size=416 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_806AF27C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x806AF290
    r0 = *(8 + r3); // lwz @ 0x806AF294
    if (!=) goto 0x0x806af404;
    r5 = *(0xb1c + r3); // lwz @ 0x806AF2A0
    /* lis r4, 0 */ // 0x806AF2A4
    /* lfs f1, 0(r4) */ // 0x806AF2A8
    /* lfs f0, 0(r5) */ // 0x806AF2AC
    /* .byte 0xfc, 0x00, 0x08, 0x40 */ // 0x806AF2B0
    /* cror cr0eq, cr0lt, cr0eq */ // 0x806AF2B4
    /* mfcr r0 */ // 0x806AF2B8
    /* rlwinm. r0, r0, 3, 0x1f, 0x1f */ // 0x806AF2BC
    if (==) goto 0x0x806af404;
    r0 = *(0xb18 + r3); // lbz @ 0x806AF2C4
    if (!=) goto 0x0x806af404;
    /* lis r4, 0 */ // 0x806AF2D0
    r4 = *(0 + r4); // lwz @ 0x806AF2D4
    r0 = *(0x291c + r4); // lwz @ 0x806AF2D8
    /* mulli r0, r0, 0x58 */ // 0x806AF2DC
    r4 = r4 + r0; // 0x806AF2E0
    r0 = *(0x8b + r4); // lbz @ 0x806AF2E4
    if (==) goto 0x0x806af370;
    /* li r0, -1 */ // 0x806AF2F0
    *(0xb14 + r3) = r0; // stw @ 0x806AF2F4
    /* lis r3, 0 */ // 0x806AF2F8
    /* li r4, -1 */ // 0x806AF2FC
    r3 = *(0 + r3); // lwz @ 0x806AF300
    r3 = *(0 + r3); // lwz @ 0x806AF304
    r0 = *(0 + r3); // lwz @ 0x806AF308
    if (==) goto 0x0x806af330;
    if (==) goto 0x0x806af338;
    if (==) goto 0x0x806af340;
    if (==) goto 0x0x806af348;
    /* b 0x806af34c */ // 0x806AF32C
    /* li r4, 0x58 */ // 0x806AF330
    /* b 0x806af34c */ // 0x806AF334
    /* li r4, 0x5e */ // 0x806AF338
    /* b 0x806af34c */ // 0x806AF33C
    /* li r4, 0x59 */ // 0x806AF340
    /* b 0x806af34c */ // 0x806AF344
    /* li r4, 0x5f */ // 0x806AF348
    r12 = *(0 + r31); // lwz @ 0x806AF34C
    /* lis r5, 0 */ // 0x806AF350
    /* lfs f1, 0(r5) */ // 0x806AF354
    r3 = r31;
    r12 = *(0x1c + r12); // lwz @ 0x806AF35C
    /* li r5, 0 */ // 0x806AF360
    /* mtctr r12 */ // 0x806AF364
    /* bctrl  */ // 0x806AF368
    /* b 0x806af380 */ // 0x806AF36C
    /* li r4, 0 */ // 0x806AF370
    FUN_80671C48(r5, r4); // bl 0x80671C48
    /* li r0, 0x48 */ // 0x806AF378
    *(0xb14 + r31) = r0; // stw @ 0x806AF37C
    /* lis r3, 0 */ // 0x806AF380
    r3 = *(0 + r3); // lwz @ 0x806AF384
    r3 = *(0 + r3); // lwz @ 0x806AF388
    r30 = *(0x11c + r3); // lwz @ 0x806AF38C
    if (!=) goto 0x0x806af3a0;
    /* li r30, 0 */ // 0x806AF398
    /* b 0x806af3f4 */ // 0x806AF39C
    /* lis r31, 0 */ // 0x806AF3A0
    r31 = r31 + 0; // 0x806AF3A4
    if (==) goto 0x0x806af3f0;
    r12 = *(0 + r30); // lwz @ 0x806AF3AC
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806AF3B4
    /* mtctr r12 */ // 0x806AF3B8
    /* bctrl  */ // 0x806AF3BC
    /* b 0x806af3d8 */ // 0x806AF3C0
    if (!=) goto 0x0x806af3d4;
    /* li r0, 1 */ // 0x806AF3CC
    /* b 0x806af3e4 */ // 0x806AF3D0
    r3 = *(0 + r3); // lwz @ 0x806AF3D4
    if (!=) goto 0x0x806af3c4;
    /* li r0, 0 */ // 0x806AF3E0
    if (==) goto 0x0x806af3f0;
    /* b 0x806af3f4 */ // 0x806AF3EC
    /* li r30, 0 */ // 0x806AF3F0
    /* li r0, 0 */ // 0x806AF3F4
    *(0x1d4 + r30) = r0; // stb @ 0x806AF3F8
    r3 = r30 + 0x54; // 0x806AF3FC
    FUN_8064F568(r3); // bl 0x8064F568
    r0 = *(0x14 + r1); // lwz @ 0x806AF404
    r31 = *(0xc + r1); // lwz @ 0x806AF408
    r30 = *(8 + r1); // lwz @ 0x806AF40C
    return;
}