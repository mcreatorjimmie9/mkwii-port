/* Function at 0x8069A3B4, size=408 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 6 function(s) */

int FUN_8069A3B4(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r29 = r4;
    /* li r4, 2 */ // 0x8069A3D0
    *(0x10 + r1) = r28; // stw @ 0x8069A3D4
    r28 = r3;
    r3 = r3 + 0x98; // 0x8069A3DC
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    /* lis r31, 0 */ // 0x8069A3E4
    /* li r4, 0 */ // 0x8069A3E8
    /* lfs f1, 0(r31) */ // 0x8069A3EC
    FUN_8069F59C(r3, r4); // bl 0x8069F59C
    r3 = r28 + 0x98; // 0x8069A3F4
    /* li r4, 3 */ // 0x8069A3F8
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x8069A400
    /* li r4, 0 */ // 0x8069A404
    FUN_8069F59C(r3, r4, r4); // bl 0x8069F59C
    r3 = *(0x64 + r28); // lwz @ 0x8069A40C
    r30 = *(8 + r3); // lwz @ 0x8069A410
    if (!=) goto 0x0x8069a424;
    /* li r30, 0 */ // 0x8069A41C
    /* b 0x8069a478 */ // 0x8069A420
    /* lis r31, 0 */ // 0x8069A424
    r31 = r31 + 0; // 0x8069A428
    if (==) goto 0x0x8069a474;
    r12 = *(0 + r30); // lwz @ 0x8069A430
    r3 = r30;
    r12 = *(0x28 + r12); // lwz @ 0x8069A438
    /* mtctr r12 */ // 0x8069A43C
    /* bctrl  */ // 0x8069A440
    /* b 0x8069a45c */ // 0x8069A444
    if (!=) goto 0x0x8069a458;
    /* li r0, 1 */ // 0x8069A450
    /* b 0x8069a468 */ // 0x8069A454
    r3 = *(0 + r3); // lwz @ 0x8069A458
    if (!=) goto 0x0x8069a448;
    /* li r0, 0 */ // 0x8069A464
    if (==) goto 0x0x8069a474;
    /* b 0x8069a478 */ // 0x8069A470
    /* li r30, 0 */ // 0x8069A474
    r0 = *(0x234 + r28); // lwz @ 0x8069A478
    if (==) goto 0x0x8069a490;
    if (==) goto 0x0x8069a4e0;
    /* b 0x8069a52c */ // 0x8069A48C
    r3 = *(0x98 + r30); // lwz @ 0x8069A490
    if (==) goto 0x0x8069a4b4;
    r12 = *(0 + r3); // lwz @ 0x8069A49C
    r4 = r30;
    r5 = r29;
    r12 = *(8 + r12); // lwz @ 0x8069A4A8
    /* mtctr r12 */ // 0x8069A4AC
    /* bctrl  */ // 0x8069A4B0
    r12 = *(0 + r30); // lwz @ 0x8069A4B4
    r3 = r30;
    r4 = r29;
    r12 = *(0x3c + r12); // lwz @ 0x8069A4C0
    /* mtctr r12 */ // 0x8069A4C4
    /* bctrl  */ // 0x8069A4C8
    r3 = r30;
    r5 = r29;
    /* li r4, 0x15 */ // 0x8069A4D4
    FUN_806A03CC(r3, r5, r4); // bl 0x806A03CC
    /* b 0x8069a52c */ // 0x8069A4DC
    r3 = *(0x9c + r30); // lwz @ 0x8069A4E0
    if (==) goto 0x0x8069a504;
    r12 = *(0 + r3); // lwz @ 0x8069A4EC
    r4 = r30;
    r5 = r29;
    r12 = *(8 + r12); // lwz @ 0x8069A4F8
    /* mtctr r12 */ // 0x8069A4FC
    /* bctrl  */ // 0x8069A500
    r12 = *(0 + r30); // lwz @ 0x8069A504
    r3 = r30;
    r4 = r29;
    r12 = *(0x40 + r12); // lwz @ 0x8069A510
    /* mtctr r12 */ // 0x8069A514
    /* bctrl  */ // 0x8069A518
    r3 = r30;
    r5 = r29;
    /* li r4, 0x14 */ // 0x8069A524
    FUN_806A03CC(r3, r5, r4); // bl 0x806A03CC
    r0 = *(0x24 + r1); // lwz @ 0x8069A52C
    r31 = *(0x1c + r1); // lwz @ 0x8069A530
    r30 = *(0x18 + r1); // lwz @ 0x8069A534
    r29 = *(0x14 + r1); // lwz @ 0x8069A538
    r28 = *(0x10 + r1); // lwz @ 0x8069A53C
    return;
}