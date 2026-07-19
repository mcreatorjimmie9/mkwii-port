/* Function at 0x8069B3D0, size=256 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_8069B3D0(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x8069B3E0
    r3 = *(0x64 + r3); // lwz @ 0x8069B3E4
    r30 = *(8 + r3); // lwz @ 0x8069B3E8
    if (!=) goto 0x0x8069b3fc;
    /* li r30, 0 */ // 0x8069B3F4
    /* b 0x8069b450 */ // 0x8069B3F8
    /* lis r31, 0 */ // 0x8069B3FC
    r31 = r31 + 0; // 0x8069B400
    if (==) goto 0x0x8069b44c;
    r12 = *(0 + r30); // lwz @ 0x8069B408
    r3 = r30;
    r12 = *(0x28 + r12); // lwz @ 0x8069B410
    /* mtctr r12 */ // 0x8069B414
    /* bctrl  */ // 0x8069B418
    /* b 0x8069b434 */ // 0x8069B41C
    if (!=) goto 0x0x8069b430;
    /* li r0, 1 */ // 0x8069B428
    /* b 0x8069b440 */ // 0x8069B42C
    r3 = *(0 + r3); // lwz @ 0x8069B430
    if (!=) goto 0x0x8069b420;
    /* li r0, 0 */ // 0x8069B43C
    if (==) goto 0x0x8069b44c;
    /* b 0x8069b450 */ // 0x8069B448
    /* li r30, 0 */ // 0x8069B44C
    if (!=) goto 0x0x8069b460;
    /* li r30, 0 */ // 0x8069B458
    /* b 0x8069b4b4 */ // 0x8069B45C
    /* lis r31, 0 */ // 0x8069B460
    r31 = r31 + 0; // 0x8069B464
    if (==) goto 0x0x8069b4b0;
    r12 = *(0 + r30); // lwz @ 0x8069B46C
    r3 = r30;
    r12 = *(0x28 + r12); // lwz @ 0x8069B474
    /* mtctr r12 */ // 0x8069B478
    /* bctrl  */ // 0x8069B47C
    /* b 0x8069b498 */ // 0x8069B480
    if (!=) goto 0x0x8069b494;
    /* li r0, 1 */ // 0x8069B48C
    /* b 0x8069b4a4 */ // 0x8069B490
    r3 = *(0 + r3); // lwz @ 0x8069B494
    if (!=) goto 0x0x8069b484;
    /* li r0, 0 */ // 0x8069B4A0
    if (==) goto 0x0x8069b4b0;
    /* b 0x8069b4b4 */ // 0x8069B4AC
    /* li r30, 0 */ // 0x8069B4B0
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x8069B4B8
    r30 = *(8 + r1); // lwz @ 0x8069B4BC
    r0 = *(0x14 + r1); // lwz @ 0x8069B4C0
    return;
}