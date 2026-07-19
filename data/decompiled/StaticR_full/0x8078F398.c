/* Function at 0x8078F398, size=224 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8078F398(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r5 = r4;
    /* li r6, 0 */ // 0x8078F3A4
    *(0x14 + r1) = r0; // stw @ 0x8078F3A8
    r7 = r3;
    *(0xc + r1) = r31; // stw @ 0x8078F3B0
    r9 = *(0x90 + r3); // lwz @ 0x8078F3B4
    /* mtctr r9 */ // 0x8078F3B8
    if (<=) goto 0x0x8078f400;
    r8 = *(0x80 + r7); // lwz @ 0x8078F3C4
    if (==) goto 0x0x8078f3d8;
    r0 = *(0x90 + r8); // lwz @ 0x8078F3D0
    /* b 0x8078f3dc */ // 0x8078F3D4
    /* li r0, -1 */ // 0x8078F3D8
    if (!=) goto 0x0x8078f3f4;
    /* slwi r0, r6, 2 */ // 0x8078F3E4
    r4 = r3 + r0; // 0x8078F3E8
    r31 = r4 + 0x80; // 0x8078F3EC
    /* b 0x8078f404 */ // 0x8078F3F0
    r7 = r7 + 4; // 0x8078F3F4
    r6 = r6 + 1; // 0x8078F3F8
    if (counter-- != 0) goto 0x0x8078f3c4;
    /* li r31, 0 */ // 0x8078F400
    if (!=) goto 0x0x8078f44c;
    r6 = r3;
    /* li r4, 0 */ // 0x8078F410
    /* mtctr r9 */ // 0x8078F414
    if (<=) goto 0x0x8078f448;
    r0 = *(0x80 + r6); // lwz @ 0x8078F420
    if (!=) goto 0x0x8078f43c;
    /* slwi r0, r4, 2 */ // 0x8078F42C
    r4 = r3 + r0; // 0x8078F430
    r31 = r4 + 0x80; // 0x8078F434
    /* b 0x8078f44c */ // 0x8078F438
    r6 = r6 + 4; // 0x8078F43C
    r4 = r4 + 1; // 0x8078F440
    if (counter-- != 0) goto 0x0x8078f420;
    /* li r31, 0 */ // 0x8078F448
    if (==) goto 0x0x8078f468;
    r4 = r31;
    /* li r6, 0 */ // 0x8078F458
    FUN_805E3430(r4, r6); // bl 0x805E3430
    r3 = r31;
    /* b 0x8078f46c */ // 0x8078F464
    /* li r3, 0 */ // 0x8078F468
    r0 = *(0x14 + r1); // lwz @ 0x8078F46C
    r31 = *(0xc + r1); // lwz @ 0x8078F470
}