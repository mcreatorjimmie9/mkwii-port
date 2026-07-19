/* Function at 0x80776978, size=124 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 1 function(s) */

int FUN_80776978(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* stmw r27, 0xc(r1) */ // 0x80776984
    r27 = r3;
    /* li r28, 0 */ // 0x8077698C
    /* li r29, 0 */ // 0x80776990
    /* lis r30, 0 */ // 0x80776994
    /* lis r31, 0 */ // 0x80776998
    /* b 0x80776a38 */ // 0x8077699C
    r3 = *(0xb4 + r27); // lwz @ 0x807769A0
    /* lwzx r3, r3, r29 */ // 0x807769A4
    if (==) goto 0x0x80776a30;
    r3 = r3 + 0x74; // 0x807769B0
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x807769c8;
    /* li r3, 0 */ // 0x807769C0
    /* b 0x807769cc */ // 0x807769C4
    r3 = *(0xc + r3); // lwz @ 0x807769C8
    /* li r0, 0 */ // 0x807769D0
    if (==) goto 0x0x807769e0;
    if (!=) goto 0x0x807769e4;
    /* li r0, 1 */ // 0x807769E0
    if (==) goto 0x0x80776a30;
    r3 = *(0 + r30); // lwz @ 0x807769EC
    r4 = r28;
}