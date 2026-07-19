/* Function at 0x807EEE18, size=112 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807EEE18(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x807EEE28
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807EEE30
    r30 = r3;
    if (==) goto 0x0x807eee74;
    r0 = *(8 + r3); // lwz @ 0x807EEE3C
    /* lis r4, 0 */ // 0x807EEE40
    r4 = r4 + 0; // 0x807EEE44
    *(0 + r3) = r4; // stw @ 0x807EEE48
    if (==) goto 0x0x807eee64;
    r3 = r0;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    /* li r0, 0 */ // 0x807EEE5C
    *(8 + r30) = r0; // stw @ 0x807EEE60
    if (<=) goto 0x0x807eee74;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x807EEE78
    r30 = *(8 + r1); // lwz @ 0x807EEE7C
    r0 = *(0x14 + r1); // lwz @ 0x807EEE80
}