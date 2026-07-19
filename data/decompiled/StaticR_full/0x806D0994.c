/* Function at 0x806D0994, size=440 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 6 function(s) */

int FUN_806D0994(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x806D09AC
    r29 = r3;
    *(0x10 + r1) = r28; // stw @ 0x806D09B4
    r5 = *(0x240 + r4); // lwz @ 0x806D09B8
    r0 = r5 + -2; // 0x806D09BC
    if (<=) goto 0x0x806d09fc;
    if (==) goto 0x0x806d09dc;
    if (==) goto 0x0x806d0b10;
    /* b 0x806d0b2c */ // 0x806D09D8
    /* li r0, 0xc5 */ // 0x806D09DC
    *(0x120c + r3) = r0; // stw @ 0x806D09E0
    r3 = r30;
    FUN_8064A384(r3); // bl 0x8064A384
    r3 = r29;
    /* li r4, 0 */ // 0x806D09F0
    FUN_80671C48(r3, r3, r4); // bl 0x80671C48
    /* b 0x806d0b2c */ // 0x806D09F8
    /* lis r3, 0 */ // 0x806D09FC
    r3 = *(0 + r3); // lwz @ 0x806D0A00
    r3 = *(0 + r3); // lwz @ 0x806D0A04
    r31 = *(0x320 + r3); // lwz @ 0x806D0A08
    if (!=) goto 0x0x806d0a1c;
    /* li r31, 0 */ // 0x806D0A14
    /* b 0x806d0a70 */ // 0x806D0A18
    /* lis r28, 0 */ // 0x806D0A1C
    r28 = r28 + 0; // 0x806D0A20
    if (==) goto 0x0x806d0a6c;
    r12 = *(0 + r31); // lwz @ 0x806D0A28
    r3 = r31;
    r12 = *(0x60 + r12); // lwz @ 0x806D0A30
    /* mtctr r12 */ // 0x806D0A34
    /* bctrl  */ // 0x806D0A38
    /* b 0x806d0a54 */ // 0x806D0A3C
    if (!=) goto 0x0x806d0a50;
    /* li r0, 1 */ // 0x806D0A48
    /* b 0x806d0a60 */ // 0x806D0A4C
    r3 = *(0 + r3); // lwz @ 0x806D0A50
    if (!=) goto 0x0x806d0a40;
    /* li r0, 0 */ // 0x806D0A5C
    if (==) goto 0x0x806d0a6c;
    /* b 0x806d0a70 */ // 0x806D0A68
    /* li r31, 0 */ // 0x806D0A6C
    /* li r0, 0xc6 */ // 0x806D0A70
    *(0x120c + r29) = r0; // stw @ 0x806D0A74
    r0 = *(0x240 + r30); // lwz @ 0x806D0A78
    if (==) goto 0x0x806d0aa0;
    if (==) goto 0x0x806d0aac;
    if (==) goto 0x0x806d0ae4;
    if (==) goto 0x0x806d0af0;
    /* b 0x806d0af8 */ // 0x806D0A9C
    /* li r0, 1 */ // 0x806D0AA0
    *(0x68 + r31) = r0; // stw @ 0x806D0AA4
    /* b 0x806d0af8 */ // 0x806D0AA8
    /* lis r3, 0 */ // 0x806D0AAC
    r3 = *(0 + r3); // lwz @ 0x806D0AB0
    /* addis r3, r3, 2 */ // 0x806D0AB4
    r3 = *(0x4ffc + r3); // lwz @ 0x806D0AB8
    /* addis r3, r3, 2 */ // 0x806D0ABC
    r0 = *(0x330c + r3); // lwz @ 0x806D0AC0
    /* rlwinm. r0, r0, 0, 0x1c, 0x1c */ // 0x806D0AC4
    if (==) goto 0x0x806d0ad8;
    /* li r0, 3 */ // 0x806D0ACC
    *(0x68 + r31) = r0; // stw @ 0x806D0AD0
    /* b 0x806d0af8 */ // 0x806D0AD4
    /* li r0, 2 */ // 0x806D0AD8
    *(0x68 + r31) = r0; // stw @ 0x806D0ADC
    /* b 0x806d0af8 */ // 0x806D0AE0
    /* li r0, 4 */ // 0x806D0AE4
    *(0x68 + r31) = r0; // stw @ 0x806D0AE8
    /* b 0x806d0af8 */ // 0x806D0AEC
    /* li r0, 5 */ // 0x806D0AF0
    *(0x68 + r31) = r0; // stw @ 0x806D0AF4
    r3 = r30;
    FUN_8064A384(r3); // bl 0x8064A384
    r3 = r29;
    /* li r4, 0 */ // 0x806D0B04
    FUN_80671C48(r3, r3, r4); // bl 0x80671C48
    /* b 0x806d0b2c */ // 0x806D0B0C
    /* li r0, 0xc0 */ // 0x806D0B10
    *(0x120c + r3) = r0; // stw @ 0x806D0B14
    r3 = r30;
    FUN_8064A384(r3); // bl 0x8064A384
    r3 = r29;
    /* li r4, 1 */ // 0x806D0B24
    FUN_80671C48(r3, r3, r4); // bl 0x80671C48
    r0 = *(0x24 + r1); // lwz @ 0x806D0B2C
    r31 = *(0x1c + r1); // lwz @ 0x806D0B30
    r30 = *(0x18 + r1); // lwz @ 0x806D0B34
    r29 = *(0x14 + r1); // lwz @ 0x806D0B38
    r28 = *(0x10 + r1); // lwz @ 0x806D0B3C
    return;
}