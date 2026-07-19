/* Function at 0x8091E2DC, size=96 bytes */
/* Stack frame: 0 bytes */

int FUN_8091E2DC(int r3, int r4, int r5, int r6, int r7)
{
    /* mulli r4, r4, 0x18 */ // 0x8091E2DC
    r0 = *(0x1c + r3); // lwz @ 0x8091E2E0
    r7 = r0 + r4; // 0x8091E2E4
    /* lbzx r0, r4, r0 */ // 0x8091E2E8
    if (==) goto 0x0x8091e334;
    if (==) goto 0x0x8091e314;
    /* lfs f0, 4(r7) */ // 0x8091E2FC
    /* stfs f0, 0(r5) */ // 0x8091E300
    /* lfs f0, 8(r7) */ // 0x8091E304
    /* stfs f0, 4(r5) */ // 0x8091E308
    /* lfs f0, 0xc(r7) */ // 0x8091E30C
    /* stfs f0, 8(r5) */ // 0x8091E310
    if (==) goto 0x0x8091e32c;
    r0 = *(0x1c + r3); // lwz @ 0x8091E31C
    r3 = r0 + r4; // 0x8091E320
    r0 = *(0x10 + r3); // lwz @ 0x8091E324
    *(0 + r6) = r0; // stw @ 0x8091E328
    /* li r3, 1 */ // 0x8091E32C
    return;
    /* li r3, 0 */ // 0x8091E334
    return;
}