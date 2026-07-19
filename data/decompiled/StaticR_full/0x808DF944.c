/* Function at 0x808DF944, size=168 bytes */
/* Stack frame: 144 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_808DF944(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -144(r1) */
    /* saved r31 */
    /* lis r8, 0 */ // 0x808DF94C
    /* lis r7, 0 */ // 0x808DF950
    *(0x94 + r1) = r0; // stw @ 0x808DF954
    r8 = r8 + 0; // 0x808DF958
    /* clrlwi r4, r4, 0x18 */ // 0x808DF95C
    *(0x8c + r1) = r31; // stw @ 0x808DF960
    r31 = r6;
    /* li r6, 0 */ // 0x808DF968
    *(0x88 + r1) = r30; // stw @ 0x808DF96C
    r30 = r5;
    r5 = r8 + 0x5a; // 0x808DF974
    *(0x84 + r1) = r29; // stw @ 0x808DF978
    r29 = r3;
    *(0x80 + r1) = r28; // stw @ 0x808DF980
    r3 = *(0 + r7); // lwz @ 0x808DF984
    FUN_805CFF2C(r5); // bl 0x805CFF2C
    r28 = r3;
    if (==) goto 0x0x808df9c8;
    /* clrlwi. r0, r3, 0x1b */ // 0x808DF998
    if (==) goto 0x0x808df9bc;
    /* lis r3, 0 */ // 0x808DF9A0
    /* lis r5, 0 */ // 0x808DF9A4
    r3 = r3 + 0; // 0x808DF9A8
    /* li r4, 0x3c */ // 0x808DF9AC
    r5 = r5 + 0; // 0x808DF9B0
    /* crclr cr1eq */ // 0x808DF9B4
    FUN_805E3430(r5, r3, r4, r5); // bl 0x805E3430
    *(4 + r29) = r28; // stw @ 0x808DF9BC
    r3 = r29 + 4; // 0x808DF9C0
    FUN_805E3430(r5, r3); // bl 0x805E3430
    /* lis r3, 0 */ // 0x808DF9C8
    /* li r0, -1 */ // 0x808DF9CC
    r3 = r3 + 0; // 0x808DF9D0
    *(0x68 + r1) = r3; // stw @ 0x808DF9D4
    /* li r4, 0 */ // 0x808DF9DC
    *(0x6c + r1) = r0; // stw @ 0x808DF9E0
    /* li r5, 0x10 */ // 0x808DF9E4
    FUN_805E3430(r3, r4, r5); // bl 0x805E3430
}