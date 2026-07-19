/* Function at 0x80776DDC, size=124 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 1 function(s) */

int FUN_80776DDC(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* stmw r27, 0xc(r1) */ // 0x80776DE8
    r30 = r3;
    /* li r31, 0 */ // 0x80776DF0
    /* li r27, 0 */ // 0x80776DF4
    /* lis r28, 0 */ // 0x80776DF8
    /* lis r29, 0 */ // 0x80776DFC
    /* b 0x80776f2c */ // 0x80776E00
    r3 = *(0xb4 + r30); // lwz @ 0x80776E04
    /* lwzx r3, r3, r27 */ // 0x80776E08
    if (==) goto 0x0x80776f24;
    r3 = r3 + 0x74; // 0x80776E14
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x80776e2c;
    /* li r3, 0 */ // 0x80776E24
    /* b 0x80776e30 */ // 0x80776E28
    r3 = *(0xc + r3); // lwz @ 0x80776E2C
    /* li r0, 0 */ // 0x80776E34
    if (==) goto 0x0x80776e44;
    if (!=) goto 0x0x80776e48;
    /* li r0, 1 */ // 0x80776E44
    if (==) goto 0x0x80776e94;
    r3 = *(0 + r28); // lwz @ 0x80776E50
    r4 = r31;
}