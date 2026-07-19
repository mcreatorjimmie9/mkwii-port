/* Function at 0x807BC288, size=360 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807BC288(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x807BC298
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807BC2A0
    r30 = r3;
    if (==) goto 0x0x807bc3d4;
    r0 = *(0x150 + r3); // lwz @ 0x807BC2AC
    /* lis r4, 0 */ // 0x807BC2B0
    r4 = r4 + 0; // 0x807BC2B4
    *(0x34 + r3) = r4; // stw @ 0x807BC2B8
    if (==) goto 0x0x807bc2dc;
    r3 = r0;
    /* li r4, 1 */ // 0x807BC2C8
    r12 = *(0 + r3); // lwz @ 0x807BC2CC
    r12 = *(8 + r12); // lwz @ 0x807BC2D0
    /* mtctr r12 */ // 0x807BC2D4
    /* bctrl  */ // 0x807BC2D8
    r3 = *(0x140 + r30); // lwz @ 0x807BC2DC
    /* li r0, 0 */ // 0x807BC2E0
    *(0x150 + r30) = r0; // stw @ 0x807BC2E4
    if (==) goto 0x0x807bc2f4;
    FUN_805E3430(); // bl 0x805E3430
    r3 = *(0x144 + r30); // lwz @ 0x807BC2F4
    /* li r0, 0 */ // 0x807BC2F8
    *(0x140 + r30) = r0; // stw @ 0x807BC2FC
    if (==) goto 0x0x807bc31c;
    r12 = *(0x34 + r3); // lwz @ 0x807BC308
    /* li r4, 1 */ // 0x807BC30C
    r12 = *(8 + r12); // lwz @ 0x807BC310
    /* mtctr r12 */ // 0x807BC314
    /* bctrl  */ // 0x807BC318
    r3 = *(0x14c + r30); // lwz @ 0x807BC31C
    /* li r0, 0 */ // 0x807BC320
    *(0x144 + r30) = r0; // stw @ 0x807BC324
    if (==) goto 0x0x807bc344;
    r12 = *(0x34 + r3); // lwz @ 0x807BC330
    /* li r4, 1 */ // 0x807BC334
    r12 = *(8 + r12); // lwz @ 0x807BC338
    /* mtctr r12 */ // 0x807BC33C
    /* bctrl  */ // 0x807BC340
    r3 = *(0x148 + r30); // lwz @ 0x807BC344
    /* li r0, 0 */ // 0x807BC348
    *(0x14c + r30) = r0; // stw @ 0x807BC34C
    if (==) goto 0x0x807bc36c;
    r12 = *(0 + r3); // lwz @ 0x807BC358
    /* li r4, 1 */ // 0x807BC35C
    r12 = *(8 + r12); // lwz @ 0x807BC360
    /* mtctr r12 */ // 0x807BC364
    /* bctrl  */ // 0x807BC368
    r3 = *(0x158 + r30); // lwz @ 0x807BC36C
    /* li r0, 0 */ // 0x807BC370
    *(0x148 + r30) = r0; // stw @ 0x807BC374
    if (==) goto 0x0x807bc394;
    r12 = *(0x34 + r3); // lwz @ 0x807BC380
    /* li r4, 1 */ // 0x807BC384
    r12 = *(8 + r12); // lwz @ 0x807BC388
    /* mtctr r12 */ // 0x807BC38C
    /* bctrl  */ // 0x807BC390
    r3 = *(0x154 + r30); // lwz @ 0x807BC394
    /* li r0, 0 */ // 0x807BC398
    *(0x158 + r30) = r0; // stw @ 0x807BC39C
    if (==) goto 0x0x807bc3bc;
    r12 = *(0 + r3); // lwz @ 0x807BC3A8
    /* li r4, 1 */ // 0x807BC3AC
    r12 = *(8 + r12); // lwz @ 0x807BC3B0
    /* mtctr r12 */ // 0x807BC3B4
    /* bctrl  */ // 0x807BC3B8
    /* li r0, 0 */ // 0x807BC3C0
    *(0x154 + r30) = r0; // stw @ 0x807BC3C4
    if (<=) goto 0x0x807bc3d4;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x807BC3D8
    r30 = *(8 + r1); // lwz @ 0x807BC3DC
    r0 = *(0x14 + r1); // lwz @ 0x807BC3E0
    return;
}