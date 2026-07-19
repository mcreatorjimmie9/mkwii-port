/* Function at 0x807C09C4, size=164 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r24 */
/* Calls: 2 function(s) */

int FUN_807C09C4(int r3, int r4)
{
    /* Stack frame: -48(r1) */
    /* saved r24 */
    /* stmw r24, 0x10(r1) */ // 0x807C09D0
    r26 = r3;
    /* li r24, 0 */ // 0x807C09D8
    /* lis r27, 0 */ // 0x807C09DC
    /* lis r28, 0 */ // 0x807C09E0
    /* li r31, 0x4b */ // 0x807C09E4
    /* li r30, 0x32 */ // 0x807C09E8
    /* li r29, 0x19 */ // 0x807C09EC
    r25 = *(4 + r26); // lwz @ 0x807C09F0
    if (==) goto 0x0x807c0a44;
    r3 = *(0 + r27); // lwz @ 0x807C09FC
    r4 = *(8 + r25); // lwz @ 0x807C0A00
    FUN_8061D97C(); // bl 0x8061D97C
    *(4 + r25) = r3; // stw @ 0x807C0A08
    r3 = *(0 + r28); // lwz @ 0x807C0A0C
    FUN_807BFFC0(); // bl 0x807BFFC0
    if (==) goto 0x0x807c0a30;
    if (==) goto 0x0x807c0a38;
    if (==) goto 0x0x807c0a40;
    /* b 0x807c0a44 */ // 0x807C0A2C
    *(0xc + r25) = r29; // stw @ 0x807C0A30
    /* b 0x807c0a44 */ // 0x807C0A34
    *(0xc + r25) = r30; // stw @ 0x807C0A38
    /* b 0x807c0a44 */ // 0x807C0A3C
    *(0xc + r25) = r31; // stw @ 0x807C0A40
    r24 = r24 + 1; // 0x807C0A44
    r26 = r26 + 4; // 0x807C0A48
    if (<) goto 0x0x807c09f0;
    r0 = *(0x34 + r1); // lwz @ 0x807C0A58
    return;
}