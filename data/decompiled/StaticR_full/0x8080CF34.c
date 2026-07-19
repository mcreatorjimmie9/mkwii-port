/* Function at 0x8080CF34, size=228 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r21 */
/* Calls: 4 function(s) */

int FUN_8080CF34(int r3, int r4, int r5)
{
    /* Stack frame: -64(r1) */
    /* saved r21 */
    /* lis r5, 0 */ // 0x8080CF3C
    *(0x44 + r1) = r0; // stw @ 0x8080CF40
    /* stmw r21, 0x14(r1) */ // 0x8080CF44
    r31 = r5 + 0; // 0x8080CF48
    r27 = r3;
    r28 = r4;
    r5 = r31 + 0x2a; // 0x8080CF54
    FUN_8089F578(r5); // bl 0x8089F578
    /* lis r3, 0 */ // 0x8080CF5C
    /* lis r5, 0 */ // 0x8080CF60
    /* li r23, 0 */ // 0x8080CF64
    /* lis r4, 0 */ // 0x8080CF68
    r3 = r3 + 0; // 0x8080CF6C
    r5 = r5 + 0; // 0x8080CF70
    r4 = r4 + 0; // 0x8080CF74
    *(0 + r27) = r3; // stw @ 0x8080CF78
    /* lis r24, 0 */ // 0x8080CF7C
    r3 = r27 + 0xdc; // 0x8080CF80
    *(0xc4 + r27) = r5; // stw @ 0x8080CF84
    /* li r5, 0 */ // 0x8080CF88
    *(0xc8 + r27) = r23; // stw @ 0x8080CF8C
    *(0xcc + r27) = r23; // stw @ 0x8080CF90
    *(0xdc + r27) = r4; // stw @ 0x8080CF94
    *(0xe0 + r27) = r23; // stw @ 0x8080CF98
    *(0xe4 + r27) = r23; // stw @ 0x8080CF9C
    r12 = *(0xdc + r27); // lwz @ 0x8080CFA0
    r4 = *(0 + r24); // lwz @ 0x8080CFA4
    r12 = *(0xc + r12); // lwz @ 0x8080CFA8
    /* mtctr r12 */ // 0x8080CFAC
    /* bctrl  */ // 0x8080CFB0
    r12 = *(0xc4 + r27); // lwz @ 0x8080CFB4
    r3 = r27 + 0xc4; // 0x8080CFB8
    r4 = *(0 + r24); // lwz @ 0x8080CFBC
    /* li r5, 0 */ // 0x8080CFC0
    r12 = *(0xc + r12); // lwz @ 0x8080CFC4
    /* mtctr r12 */ // 0x8080CFC8
    /* bctrl  */ // 0x8080CFCC
    /* lis r26, 0 */ // 0x8080CFD0
    /* lis r25, 0 */ // 0x8080CFD4
    r25 = r25 + 0; // 0x8080CFD8
    /* li r29, 0 */ // 0x8080CFDC
    r26 = r26 + 0; // 0x8080CFE0
    /* li r30, 0 */ // 0x8080CFE4
    /* b 0x8080d0fc */ // 0x8080CFE8
    /* li r3, 0x128 */ // 0x8080CFEC
    FUN_805E3430(r3); // bl 0x805E3430
    r22 = r3;
    if (==) goto 0x0x8080d064;
    r4 = r28;
    r5 = r31 + 0x3e; // 0x8080D004
    FUN_8089F578(r4, r5); // bl 0x8089F578
    *(0 + r22) = r25; // stw @ 0x8080D00C
    /* li r3, 0x7c */ // 0x8080D010
    FUN_805E3430(r4, r5, r3); // bl 0x805E3430
}