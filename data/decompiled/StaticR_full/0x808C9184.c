/* Function at 0x808C9184, size=344 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_808C9184(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r9, 1 */ // 0x808C9190
    *(0x14 + r1) = r0; // stw @ 0x808C9194
    *(0xc + r1) = r31; // stw @ 0x808C9198
    *(8 + r1) = r30; // stw @ 0x808C919C
    r30 = r3;
    r0 = *(0x64 + r3); // lwz @ 0x808C91A4
    r31 = r0;
    if (==) goto 0x0x808c91b4;
    /* li r9, -1 */ // 0x808C91B0
    /* lis r4, 0 */ // 0x808C91B4
    /* lis r6, 0 */ // 0x808C91B8
    r7 = *(0 + r4); // lwz @ 0x808C91BC
    /* lis r5, 0x2aab */ // 0x808C91C0
    /* li r4, 6 */ // 0x808C91C4
    r8 = *(0 + r6); // lwz @ 0x808C91C8
    r7 = r5 + -0x5555; // 0x808C91D0
    /* li r11, 0 */ // 0x808C91D4
    /* mtctr r4 */ // 0x808C91D8
    r4 = r31 + r9; // 0x808C91DC
    r6 = r4 + 0xc; // 0x808C91E0
    /* mulhw r4, r7, r6 */ // 0x808C91E4
    r4 = r4 >> 1; // srawi
    /* srwi r5, r4, 0x1f */ // 0x808C91EC
    r4 = r4 + r5; // 0x808C91F0
    /* mulli r4, r4, 0xc */ // 0x808C91F4
    /* subf r31, r4, r6 */ // 0x808C91F8
    if (==) goto 0x0x808c92c4;
    /* clrlwi r6, r31, 0x18 */ // 0x808C9204
    /* mulli r4, r6, 0xf0 */ // 0x808C9208
    r4 = r10 + r4; // 0x808C920C
    r4 = *(0x10 + r4); // lwz @ 0x808C9210
    if (==) goto 0x0x808c924c;
    r5 = *(0xc + r8); // lwz @ 0x808C921C
    r4 = r31 rlwinm 2; // rlwinm
    /* lwzx r4, r5, r4 */ // 0x808C9224
    r4 = *(0x38 + r4); // lwz @ 0x808C9228
    /* rlwinm. r4, r4, 0, 0x1b, 0x1b */ // 0x808C922C
    if (!=) goto 0x0x808c924c;
    /* li r0, 1 */ // 0x808C9234
    *(0x68 + r3) = r0; // stb @ 0x808C9238
    r3 = r6;
    FUN_80818E78(r3); // bl 0x80818E78
    *(0x64 + r30) = r31; // stw @ 0x808C9244
    /* b 0x808c92c4 */ // 0x808C9248
    r4 = r31 + r9; // 0x808C924C
    r6 = r4 + 0xc; // 0x808C9250
    /* mulhw r4, r7, r6 */ // 0x808C9254
    r4 = r4 >> 1; // srawi
    /* srwi r5, r4, 0x1f */ // 0x808C925C
    r4 = r4 + r5; // 0x808C9260
    /* mulli r4, r4, 0xc */ // 0x808C9264
    /* subf r31, r4, r6 */ // 0x808C9268
    if (==) goto 0x0x808c92c4;
    /* clrlwi r6, r31, 0x18 */ // 0x808C9274
    /* mulli r4, r6, 0xf0 */ // 0x808C9278
    r4 = r10 + r4; // 0x808C927C
    r4 = *(0x10 + r4); // lwz @ 0x808C9280
    if (==) goto 0x0x808c92bc;
    r5 = *(0xc + r8); // lwz @ 0x808C928C
    r4 = r31 rlwinm 2; // rlwinm
    /* lwzx r4, r5, r4 */ // 0x808C9294
    r4 = *(0x38 + r4); // lwz @ 0x808C9298
    /* rlwinm. r4, r4, 0, 0x1b, 0x1b */ // 0x808C929C
    if (!=) goto 0x0x808c92bc;
    /* li r0, 1 */ // 0x808C92A4
    *(0x68 + r3) = r0; // stb @ 0x808C92A8
    r3 = r6;
    FUN_80818E78(r3); // bl 0x80818E78
    *(0x64 + r30) = r31; // stw @ 0x808C92B4
    /* b 0x808c92c4 */ // 0x808C92B8
    if (counter-- != 0) goto 0x0x808c91dc;
    r0 = *(0x14 + r1); // lwz @ 0x808C92C4
    r31 = *(0xc + r1); // lwz @ 0x808C92C8
    r30 = *(8 + r1); // lwz @ 0x808C92CC
    return;
}