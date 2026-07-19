/* Function at 0x808FAE20, size=108 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r27 */
/* Calls: 1 function(s) */

int FUN_808FAE20(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -48(r1) */
    /* saved r27 */
    *(0x34 + r1) = r0; // stw @ 0x808FAE2C
    /* stfd f31, 0x28(r1) */ // 0x808FAE30
    /* fmr f31, f1 */ // 0x808FAE34
    /* stmw r27, 0x14(r1) */ // 0x808FAE38
    r30 = r3;
    r31 = r6;
    *(0 + r3) = r4; // stw @ 0x808FAE44
    *(4 + r3) = r5; // stw @ 0x808FAE48
    if (==) goto 0x0x808faf38;
    /* mulli r3, r5, 0x1c */ // 0x808FAE50
    FUN_805E3430(); // bl 0x805E3430
    /* lis r6, 0 */ // 0x808FAE58
    /* lis r4, 0 */ // 0x808FAE5C
    *(8 + r30) = r3; // stw @ 0x808FAE60
    r6 = r6 + 0; // 0x808FAE64
    r4 = r4 + 0; // 0x808FAE68
    /* li r8, 0 */ // 0x808FAE6C
    /* li r7, 0 */ // 0x808FAE70
    /* b 0x808faecc */ // 0x808FAE74
    r3 = *(8 + r30); // lwz @ 0x808FAE78
    r8 = r8 + 1; // 0x808FAE7C
    r0 = *(4 + r6); // lwz @ 0x808FAE80
    r5 = r3 + r7; // 0x808FAE84
    r3 = *(0 + r6); // lwz @ 0x808FAE88
}