/* Function at 0x8086D390, size=180 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_8086D390(int r3, int r4, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r6;
    *(8 + r1) = r30; // stw @ 0x8086D3A4
    r30 = r3;
    r0 = *(0x1a8 + r3); // lwz @ 0x8086D3AC
    if (>) goto 0x0x8086d42c;
    if (>=) goto 0x0x8086d420;
    *(0x1a8 + r3) = r4; // stw @ 0x8086D3C0
    if (==) goto 0x0x8086d3d0;
    r0 = r4 + -1; // 0x8086D3C8
    *(0x1a8 + r3) = r0; // stw @ 0x8086D3CC
    r4 = *(0x1c4 + r3); // lwz @ 0x8086D3D0
    if (==) goto 0x0x8086d420;
    /* li r0, 0x2d */ // 0x8086D3DC
    *(0x1d4 + r3) = r0; // stw @ 0x8086D3E0
    r3 = r4;
    FUN_8061DFF8(r3); // bl 0x8061DFF8
    FUN_8060F27C(r3); // bl 0x8060F27C
    /* li r0, 0 */ // 0x8086D3F0
    *(0x1c4 + r30) = r0; // stw @ 0x8086D3F4
    r3 = *(0x1a0 + r30); // lwz @ 0x8086D3F8
    FUN_8061DFF8(); // bl 0x8061DFF8
    FUN_8060F264(); // bl 0x8060F264
    /* lis r4, 0 */ // 0x8086D404
    /* lis r3, 0 */ // 0x8086D408
    /* lfs f1, 0(r4) */ // 0x8086D40C
    /* lfs f0, 0(r3) */ // 0x8086D410
    /* stfs f1, 0x1f8(r30) */ // 0x8086D414
    /* stfs f1, 0x1fc(r30) */ // 0x8086D418
    /* stfs f0, 0x1f4(r30) */ // 0x8086D41C
    r3 = r30;
    r4 = r31;
    FUN_8086CBFC(r3, r4); // bl 0x8086CBFC
    r0 = *(0x14 + r1); // lwz @ 0x8086D42C
    r31 = *(0xc + r1); // lwz @ 0x8086D430
    r30 = *(8 + r1); // lwz @ 0x8086D434
    return;
}