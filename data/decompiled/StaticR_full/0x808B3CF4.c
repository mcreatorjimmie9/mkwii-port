/* Function at 0x808B3CF4, size=272 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_808B3CF4(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* stfd f31, 0x18(r1) */ // 0x808B3D00
    *(0x10 + r1) = r30; // stw @ 0x808B3D08
    *(0xc + r1) = r29; // stw @ 0x808B3D0C
    r29 = r3;
    r3 = r4;
    FUN_8064A384(r3); // bl 0x8064A384
    r0 = *(0x3ec + r29); // lwz @ 0x808B3D1C
    /* lis r3, 0 */ // 0x808B3D20
    *(0x3e8 + r29) = r0; // stw @ 0x808B3D24
    /* fmr f31, f1 */ // 0x808B3D28
    /* slwi r0, r0, 2 */ // 0x808B3D2C
    r3 = *(0 + r3); // lwz @ 0x808B3D30
    r3 = *(0 + r3); // lwz @ 0x808B3D34
    r3 = r3 + r0; // 0x808B3D38
    r30 = *(8 + r3); // lwz @ 0x808B3D3C
    if (!=) goto 0x0x808b3d50;
    /* li r30, 0 */ // 0x808B3D48
    /* b 0x808b3da4 */ // 0x808B3D4C
    /* lis r31, 0 */ // 0x808B3D50
    r31 = r31 + 0; // 0x808B3D54
    if (==) goto 0x0x808b3da0;
    r12 = *(0 + r30); // lwz @ 0x808B3D5C
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x808B3D64
    /* mtctr r12 */ // 0x808B3D68
    /* bctrl  */ // 0x808B3D6C
    /* b 0x808b3d88 */ // 0x808B3D70
    if (!=) goto 0x0x808b3d84;
    /* li r0, 1 */ // 0x808B3D7C
    /* b 0x808b3d94 */ // 0x808B3D80
    r3 = *(0 + r3); // lwz @ 0x808B3D84
    if (!=) goto 0x0x808b3d74;
    /* li r0, 0 */ // 0x808B3D90
    if (==) goto 0x0x808b3da0;
    /* b 0x808b3da4 */ // 0x808B3D9C
    /* li r30, 0 */ // 0x808B3DA0
    if (==) goto 0x0x808b3db4;
    r0 = *(4 + r29); // lwz @ 0x808B3DAC
    *(0x3e8 + r30) = r0; // stw @ 0x808B3DB0
    r0 = *(0x42c + r29); // lbz @ 0x808B3DB4
    if (!=) goto 0x0x808b3de4;
    r0 = *(8 + r29); // lwz @ 0x808B3DC0
    if (!=) goto 0x0x808b3de4;
    /* fmr f1, f31 */ // 0x808B3DCC
    r3 = r29;
    /* li r4, 1 */ // 0x808B3DD4
    FUN_80671C48(r3, r4); // bl 0x80671C48
    /* li r0, 1 */ // 0x808B3DDC
    *(0x42c + r29) = r0; // stb @ 0x808B3DE0
    r0 = *(0x24 + r1); // lwz @ 0x808B3DE4
    /* lfd f31, 0x18(r1) */ // 0x808B3DE8
    r31 = *(0x14 + r1); // lwz @ 0x808B3DEC
    r30 = *(0x10 + r1); // lwz @ 0x808B3DF0
    r29 = *(0xc + r1); // lwz @ 0x808B3DF4
    return;
}