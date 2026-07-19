/* Function at 0x807833F8, size=192 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_807833F8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80783408
    r31 = r5;
    *(8 + r1) = r30; // stw @ 0x80783410
    r30 = r3;
    if (==) goto 0x0x80783430;
    if (==) goto 0x0x80783450;
    if (==) goto 0x0x80783478;
    /* b 0x8078349c */ // 0x8078342C
    r3 = r4;
    FUN_8061E63C(r3); // bl 0x8061E63C
    /* lis r3, 0 */ // 0x80783438
    /* lfs f0, 0(r3) */ // 0x8078343C
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x80783440
    if (>=) goto 0x0x8078349c;
    /* li r31, 8 */ // 0x80783448
    /* b 0x8078349c */ // 0x8078344C
    r0 = *(0xb4 + r3); // lhz @ 0x80783450
    /* clrlwi r0, r0, 0x18 */ // 0x80783454
    if (==) goto 0x0x8078349c;
    r3 = r4;
    /* li r4, 1 */ // 0x80783464
    FUN_8061DCF4(r3, r4); // bl 0x8061DCF4
    /* li r0, 2 */ // 0x8078346C
    *(0xb8 + r30) = r0; // stw @ 0x80783470
    /* b 0x8078349c */ // 0x80783474
    r0 = *(0xb4 + r3); // lhz @ 0x80783478
    /* clrlwi r0, r0, 0x18 */ // 0x8078347C
    if (==) goto 0x0x8078349c;
    r3 = r4;
    /* li r4, 1 */ // 0x8078348C
    FUN_8061DCF4(r3, r4); // bl 0x8061DCF4
    /* li r0, 2 */ // 0x80783494
    *(0xb8 + r30) = r0; // stw @ 0x80783498
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x807834A0
    r30 = *(8 + r1); // lwz @ 0x807834A4
    r0 = *(0x14 + r1); // lwz @ 0x807834A8
    return;
}