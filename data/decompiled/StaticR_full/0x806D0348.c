/* Function at 0x806D0348, size=372 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 7 function(s) */

int FUN_806D0348(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x806D0364
    r28 = r3;
    r0 = *(0x240 + r4); // lwz @ 0x806D036C
    if (==) goto 0x0x806d0394;
    if (==) goto 0x0x806d0430;
    if (==) goto 0x0x806d0450;
    if (==) goto 0x0x806d0470;
    /* b 0x806d049c */ // 0x806D0390
    /* lis r3, 0 */ // 0x806D0394
    r3 = *(0 + r3); // lwz @ 0x806D0398
    r3 = *(0 + r3); // lwz @ 0x806D039C
    r30 = *(0x320 + r3); // lwz @ 0x806D03A0
    if (!=) goto 0x0x806d03b4;
    /* li r30, 0 */ // 0x806D03AC
    /* b 0x806d0408 */ // 0x806D03B0
    /* lis r31, 0 */ // 0x806D03B4
    r31 = r31 + 0; // 0x806D03B8
    if (==) goto 0x0x806d0404;
    r12 = *(0 + r30); // lwz @ 0x806D03C0
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806D03C8
    /* mtctr r12 */ // 0x806D03CC
    /* bctrl  */ // 0x806D03D0
    /* b 0x806d03ec */ // 0x806D03D4
    if (!=) goto 0x0x806d03e8;
    /* li r0, 1 */ // 0x806D03E0
    /* b 0x806d03f8 */ // 0x806D03E4
    r3 = *(0 + r3); // lwz @ 0x806D03E8
    if (!=) goto 0x0x806d03d8;
    /* li r0, 0 */ // 0x806D03F4
    if (==) goto 0x0x806d0404;
    /* b 0x806d0408 */ // 0x806D0400
    /* li r30, 0 */ // 0x806D0404
    /* li r0, 0 */ // 0x806D0408
    *(0x68 + r30) = r0; // stw @ 0x806D040C
    /* li r0, 0xc6 */ // 0x806D0410
    r3 = r29;
    *(0xd64 + r28) = r0; // stw @ 0x806D0418
    FUN_8064A384(r3); // bl 0x8064A384
    r3 = r28;
    /* li r4, 0 */ // 0x806D0424
    FUN_80671C48(r3, r3, r4); // bl 0x80671C48
    /* b 0x806d049c */ // 0x806D042C
    /* li r0, 0xc1 */ // 0x806D0430
    *(0xd64 + r3) = r0; // stw @ 0x806D0434
    r3 = r29;
    FUN_8064A384(r3); // bl 0x8064A384
    r3 = r28;
    /* li r4, 0 */ // 0x806D0444
    FUN_80671C48(r3, r3, r4); // bl 0x80671C48
    /* b 0x806d049c */ // 0x806D044C
    /* li r0, 0xca */ // 0x806D0450
    *(0xd64 + r3) = r0; // stw @ 0x806D0454
    r3 = r29;
    FUN_8064A384(r3); // bl 0x8064A384
    r3 = r28;
    /* li r4, 0 */ // 0x806D0464
    FUN_80671C48(r3, r3, r4); // bl 0x80671C48
    /* b 0x806d049c */ // 0x806D046C
    /* li r0, -1 */ // 0x806D0470
    *(0xd64 + r3) = r0; // stw @ 0x806D0474
    r3 = r29;
    FUN_8064A384(r3); // bl 0x8064A384
    r12 = *(0 + r28); // lwz @ 0x806D0480
    r3 = r28;
    /* li r4, 0x43 */ // 0x806D0488
    /* li r5, 1 */ // 0x806D048C
    r12 = *(0x1c + r12); // lwz @ 0x806D0490
    /* mtctr r12 */ // 0x806D0494
    /* bctrl  */ // 0x806D0498
    r0 = *(0x24 + r1); // lwz @ 0x806D049C
    r31 = *(0x1c + r1); // lwz @ 0x806D04A0
    r30 = *(0x18 + r1); // lwz @ 0x806D04A4
    r29 = *(0x14 + r1); // lwz @ 0x806D04A8
    r28 = *(0x10 + r1); // lwz @ 0x806D04AC
    return;
}