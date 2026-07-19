/* Function at 0x8074BD3C, size=392 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30 */
/* Calls: 7 function(s) */

int FUN_8074BD3C(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x8074BD4C
    r31 = r31 + 0; // 0x8074BD50
    *(0x28 + r1) = r30; // stw @ 0x8074BD54
    r30 = r3;
    FUN_8074C2F0(); // bl 0x8074C2F0
    r12 = *(0 + r30); // lwz @ 0x8074BD60
    r3 = r30;
    r12 = *(0xf0 + r12); // lwz @ 0x8074BD68
    /* mtctr r12 */ // 0x8074BD6C
    /* bctrl  */ // 0x8074BD70
    /* lfs f3, 0xb4(r30) */ // 0x8074BD74
    /* lfs f2, 0xb8(r30) */ // 0x8074BD7C
    r4 = r30 + 0xb4; // 0x8074BD80
    /* lfs f0, 0xbc(r30) */ // 0x8074BD84
    r5 = r30 + 0x104; // 0x8074BD88
    /* lfs f1, 0x11c(r30) */ // 0x8074BD8C
    /* stfs f3, 0xc0(r30) */ // 0x8074BD90
    /* stfs f2, 0xc4(r30) */ // 0x8074BD94
    /* stfs f0, 0xc8(r30) */ // 0x8074BD98
    FUN_8074CB64(r5); // bl 0x8074CB64
    /* lfs f0, 8(r1) */ // 0x8074BDA0
    /* stfs f0, 0xb4(r30) */ // 0x8074BDA4
    /* fmuls f2, f0, f0 */ // 0x8074BDA8
    /* lfs f0, 0x64(r31) */ // 0x8074BDAC
    /* lfs f1, 0xc(r1) */ // 0x8074BDB0
    /* stfs f1, 0xb8(r30) */ // 0x8074BDB4
    /* fmuls f1, f1, f1 */ // 0x8074BDB8
    /* lfs f3, 0x10(r1) */ // 0x8074BDBC
    /* stfs f3, 0xbc(r30) */ // 0x8074BDC0
    /* fmuls f3, f3, f3 */ // 0x8074BDC4
    /* fadds f1, f2, f1 */ // 0x8074BDC8
    /* fadds f1, f3, f1 */ // 0x8074BDCC
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8074BDD0
    /* cror cr0eq, cr0lt, cr0eq */ // 0x8074BDD4
    /* mfcr r0 */ // 0x8074BDD8
    /* rlwinm. r0, r0, 3, 0x1f, 0x1f */ // 0x8074BDDC
    if (==) goto 0x0x8074bdfc;
    /* lfs f1, 0(r31) */ // 0x8074BDE4
    /* lfs f0, 0x60(r31) */ // 0x8074BDE8
    /* stfs f1, 0xb4(r30) */ // 0x8074BDEC
    /* stfs f1, 0xb8(r30) */ // 0x8074BDF0
    /* stfs f0, 0xbc(r30) */ // 0x8074BDF4
    /* b 0x8074be04 */ // 0x8074BDF8
    r3 = r30 + 0xb4; // 0x8074BDFC
    FUN_805E3430(r3); // bl 0x805E3430
    /* lis r4, 0 */ // 0x8074BE04
    /* lfs f1, 0(r4) */ // 0x8074BE0C
    r4 = r30 + 0xcc; // 0x8074BE10
    r5 = r30 + 0xec; // 0x8074BE14
    FUN_8074CB64(r4, r3, r4, r5); // bl 0x8074CB64
    /* lfs f0, 0x14(r1) */ // 0x8074BE1C
    /* stfs f0, 0xcc(r30) */ // 0x8074BE20
    /* fmuls f2, f0, f0 */ // 0x8074BE24
    /* lfs f0, 0x64(r31) */ // 0x8074BE28
    /* lfs f1, 0x18(r1) */ // 0x8074BE2C
    /* stfs f1, 0xd0(r30) */ // 0x8074BE30
    /* fmuls f1, f1, f1 */ // 0x8074BE34
    /* lfs f3, 0x1c(r1) */ // 0x8074BE38
    /* stfs f3, 0xd4(r30) */ // 0x8074BE3C
    /* fmuls f3, f3, f3 */ // 0x8074BE40
    /* fadds f1, f2, f1 */ // 0x8074BE44
    /* fadds f1, f3, f1 */ // 0x8074BE48
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8074BE4C
    /* cror cr0eq, cr0lt, cr0eq */ // 0x8074BE50
    /* mfcr r0 */ // 0x8074BE54
    /* rlwinm. r0, r0, 3, 0x1f, 0x1f */ // 0x8074BE58
    if (==) goto 0x0x8074be78;
    /* lfs f1, 0(r31) */ // 0x8074BE60
    /* lfs f0, 0x60(r31) */ // 0x8074BE64
    /* stfs f1, 0xcc(r30) */ // 0x8074BE68
    /* stfs f0, 0xd0(r30) */ // 0x8074BE6C
    /* stfs f1, 0xd4(r30) */ // 0x8074BE70
    /* b 0x8074be80 */ // 0x8074BE74
    r3 = r30 + 0xcc; // 0x8074BE78
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r4 = r30 + 0xcc; // 0x8074BE84
    r5 = r30 + 0xb4; // 0x8074BE88
    FUN_808A1E9C(r3, r3, r4, r5); // bl 0x808A1E9C
    r3 = *(0x120 + r30); // lwz @ 0x8074BE90
    if (==) goto 0x0x8074beac;
    r0 = r3 + 1; // 0x8074BE9C
    *(0x120 + r30) = r0; // stw @ 0x8074BEA0
    r3 = r30;
    FUN_8074C7BC(r3); // bl 0x8074C7BC
    r0 = *(0x34 + r1); // lwz @ 0x8074BEAC
    r31 = *(0x2c + r1); // lwz @ 0x8074BEB0
    r30 = *(0x28 + r1); // lwz @ 0x8074BEB4
    return;
}