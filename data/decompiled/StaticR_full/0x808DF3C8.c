/* Function at 0x808DF3C8, size=272 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r25 */
/* Calls: 10 function(s) */

int FUN_808DF3C8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -48(r1) */
    /* saved r25 */
    /* stmw r25, 0x14(r1) */ // 0x808DF3D4
    r27 = r5;
    r25 = r3;
    r26 = r4;
    r28 = r6;
    r3 = r27;
    /* li r30, 0 */ // 0x808DF3EC
    FUN_805D0550(r3); // bl 0x805D0550
    /* lis r31, 0 */ // 0x808DF3F4
    r4 = r3;
    r31 = r31 + 0; // 0x808DF3FC
    r3 = r31 + 0x27; // 0x808DF400
    /* crclr cr1eq */ // 0x808DF404
    FUN_8063803C(r4, r3); // bl 0x8063803C
    r29 = r3;
    FUN_808CFEE0(r3); // bl 0x808CFEE0
    if (==) goto 0x0x808df45c;
    if (!=) goto 0x0x808df440;
    r3 = r27;
    FUN_805D0550(r3); // bl 0x805D0550
    r4 = r3;
    r3 = r31 + 0x30; // 0x808DF430
    /* crclr cr1eq */ // 0x808DF434
    FUN_8063803C(r3, r4, r3); // bl 0x8063803C
    /* b 0x808df458 */ // 0x808DF43C
    r3 = r27;
    FUN_805D0550(r3, r3); // bl 0x805D0550
    r4 = r3;
    r3 = r31 + 0x3e; // 0x808DF44C
    /* crclr cr1eq */ // 0x808DF450
    FUN_8063803C(r3, r4, r3); // bl 0x8063803C
    r29 = r3;
    /* lis r3, 0 */ // 0x808DF45C
    r4 = r26;
    r3 = *(0 + r3); // lwz @ 0x808DF464
    r5 = r29;
    /* li r6, 0 */ // 0x808DF46C
    FUN_805CFF2C(r3, r4, r5, r6); // bl 0x805CFF2C
    r31 = r3;
    if (==) goto 0x0x808df4c0;
    /* clrlwi. r0, r3, 0x1b */ // 0x808DF480
    if (==) goto 0x0x808df4a4;
    /* lis r3, 0 */ // 0x808DF488
    /* lis r5, 0 */ // 0x808DF48C
    r3 = r3 + 0; // 0x808DF490
    /* li r4, 0x3c */ // 0x808DF494
    r5 = r5 + 0; // 0x808DF498
    /* crclr cr1eq */ // 0x808DF49C
    FUN_805E3430(r5, r3, r4, r5); // bl 0x805E3430
    *(4 + r25) = r31; // stw @ 0x808DF4A4
    r4 = r29;
    r3 = r25 + 4; // 0x808DF4AC
    /* li r5, 0 */ // 0x808DF4B0
    /* li r6, 0 */ // 0x808DF4B4
    FUN_805EB518(r4, r3, r5, r6); // bl 0x805EB518
    /* li r30, 1 */ // 0x808DF4BC
    r3 = r30;
    r0 = *(0x34 + r1); // lwz @ 0x808DF4C8
    return;
}