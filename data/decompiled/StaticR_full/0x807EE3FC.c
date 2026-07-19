/* Function at 0x807EE3FC, size=120 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807EE3FC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x807EE40C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807EE414
    r30 = r3;
    if (==) goto 0x0x807ee460;
    /* addic. r0, r3, 0xb0 */ // 0x807EE420
    if (==) goto 0x0x807ee450;
    r0 = *(0xb8 + r3); // lwz @ 0x807EE428
    /* lis r4, 0 */ // 0x807EE42C
    r4 = r4 + 0; // 0x807EE430
    *(0xb0 + r3) = r4; // stw @ 0x807EE434
    if (==) goto 0x0x807ee450;
    r3 = r0;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    /* li r0, 0 */ // 0x807EE448
    *(0xb8 + r30) = r0; // stw @ 0x807EE44C
    if (<=) goto 0x0x807ee460;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x807EE464
    r30 = *(8 + r1); // lwz @ 0x807EE468
    r0 = *(0x14 + r1); // lwz @ 0x807EE46C
}