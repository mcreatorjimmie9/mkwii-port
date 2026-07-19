/* Function at 0x806AA38C, size=416 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 7 function(s) */

int FUN_806AA38C(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x14 + r1) = r29; // stw @ 0x806AA3A0
    r29 = r3;
    r0 = *(0x240 + r4); // lwz @ 0x806AA3A8
    if (==) goto 0x0x806aa3c8;
    if (==) goto 0x0x806aa408;
    if (==) goto 0x0x806aa4f4;
    /* b 0x806aa510 */ // 0x806AA3C4
    /* li r0, 0 */ // 0x806AA3C8
    *(0xc98 + r3) = r0; // stw @ 0x806AA3CC
    r3 = r4;
    FUN_8064A384(r3); // bl 0x8064A384
    r3 = r29;
    /* li r4, 0 */ // 0x806AA3DC
    FUN_80671C48(r3, r3, r4); // bl 0x80671C48
    /* lis r3, 0 */ // 0x806AA3E4
    r3 = *(0 + r3); // lwz @ 0x806AA3E8
    /* addis r3, r3, 2 */ // 0x806AA3EC
    r3 = *(0x4ffc + r3); // lwz @ 0x806AA3F0
    /* addis r3, r3, 2 */ // 0x806AA3F4
    r0 = *(0x330c + r3); // lwz @ 0x806AA3F8
    r0 = r0 | 0x10; // 0x806AA3FC
    *(0x330c + r3) = r0; // stw @ 0x806AA400
    /* b 0x806aa510 */ // 0x806AA404
    /* li r0, 1 */ // 0x806AA408
    *(0xc98 + r3) = r0; // stw @ 0x806AA40C
    /* lis r3, 0 */ // 0x806AA410
    r3 = *(0 + r3); // lwz @ 0x806AA414
    r3 = *(0 + r3); // lwz @ 0x806AA418
    r30 = *(0x140 + r3); // lwz @ 0x806AA41C
    if (!=) goto 0x0x806aa430;
    /* li r30, 0 */ // 0x806AA428
    /* b 0x806aa484 */ // 0x806AA42C
    /* lis r31, 0 */ // 0x806AA430
    r31 = r31 + 0; // 0x806AA434
    if (==) goto 0x0x806aa480;
    r12 = *(0 + r30); // lwz @ 0x806AA43C
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806AA444
    /* mtctr r12 */ // 0x806AA448
    /* bctrl  */ // 0x806AA44C
    /* b 0x806aa468 */ // 0x806AA450
    if (!=) goto 0x0x806aa464;
    /* li r0, 1 */ // 0x806AA45C
    /* b 0x806aa474 */ // 0x806AA460
    r3 = *(0 + r3); // lwz @ 0x806AA464
    if (!=) goto 0x0x806aa454;
    /* li r0, 0 */ // 0x806AA470
    if (==) goto 0x0x806aa480;
    /* b 0x806aa484 */ // 0x806AA47C
    /* li r30, 0 */ // 0x806AA480
    r3 = r30;
    /* li r4, 0x1cee */ // 0x806AA488
    /* li r5, 0 */ // 0x806AA48C
    FUN_806B2C88(r3, r4, r5); // bl 0x806B2C88
    r3 = r30;
    r8 = r29 + 0x6c; // 0x806AA498
    /* li r4, 0 */ // 0x806AA49C
    /* li r5, 0x7d2 */ // 0x806AA4A0
    /* li r6, 0 */ // 0x806AA4A4
    /* li r7, 0 */ // 0x806AA4A8
    FUN_806B2C90(r8, r4, r5, r6, r7); // bl 0x806B2C90
    r3 = r30;
    /* li r4, 1 */ // 0x806AA4B4
    /* li r5, 0x7d3 */ // 0x806AA4B8
    /* li r6, 0 */ // 0x806AA4BC
    /* li r7, 0 */ // 0x806AA4C0
    /* li r8, 0 */ // 0x806AA4C4
    FUN_806B2C90(r4, r5, r6, r7, r8); // bl 0x806B2C90
    /* li r0, 1 */ // 0x806AA4CC
    *(0x27c + r30) = r0; // stw @ 0x806AA4D0
    r3 = r29;
    /* li r4, 0x4e */ // 0x806AA4D8
    r12 = *(0 + r29); // lwz @ 0x806AA4DC
    /* li r5, 0 */ // 0x806AA4E0
    r12 = *(0x24 + r12); // lwz @ 0x806AA4E4
    /* mtctr r12 */ // 0x806AA4E8
    /* bctrl  */ // 0x806AA4EC
    /* b 0x806aa510 */ // 0x806AA4F0
    /* li r0, 2 */ // 0x806AA4F4
    *(0xc98 + r3) = r0; // stw @ 0x806AA4F8
    r3 = r4;
    FUN_8064A384(r3); // bl 0x8064A384
    r3 = r29;
    /* li r4, 1 */ // 0x806AA508
    FUN_80671C48(r3, r3, r4); // bl 0x80671C48
    r0 = *(0x24 + r1); // lwz @ 0x806AA510
    r31 = *(0x1c + r1); // lwz @ 0x806AA514
    r30 = *(0x18 + r1); // lwz @ 0x806AA518
    r29 = *(0x14 + r1); // lwz @ 0x806AA51C
    return;
}