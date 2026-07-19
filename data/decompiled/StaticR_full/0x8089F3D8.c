/* Function at 0x8089F3D8, size=140 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8089F3D8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8089F3E8
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8089F3F0
    r30 = r3;
    if (==) goto 0x0x8089f448;
    r0 = *(4 + r3); // lwz @ 0x8089F3FC
    /* lis r4, 0 */ // 0x8089F400
    r4 = r4 + 0; // 0x8089F404
    *(0 + r3) = r4; // stw @ 0x8089F408
    if (==) goto 0x0x8089f438;
    if (==) goto 0x0x8089f430;
    r3 = r0;
    /* li r4, 1 */ // 0x8089F41C
    r12 = *(0 + r3); // lwz @ 0x8089F420
    r12 = *(8 + r12); // lwz @ 0x8089F424
    /* mtctr r12 */ // 0x8089F428
    /* bctrl  */ // 0x8089F42C
    /* li r0, 0 */ // 0x8089F430
    *(4 + r30) = r0; // stw @ 0x8089F434
    if (<=) goto 0x0x8089f448;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x8089F44C
    r30 = *(8 + r1); // lwz @ 0x8089F450
    r0 = *(0x14 + r1); // lwz @ 0x8089F454
    return;
}