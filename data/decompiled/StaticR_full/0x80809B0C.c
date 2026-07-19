/* Function at 0x80809B0C, size=112 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80809B0C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80809B1C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80809B24
    r30 = r3;
    if (==) goto 0x0x80809b68;
    r0 = *(8 + r3); // lwz @ 0x80809B30
    /* lis r4, 0 */ // 0x80809B34
    r4 = r4 + 0; // 0x80809B38
    *(0 + r3) = r4; // stw @ 0x80809B3C
    if (==) goto 0x0x80809b58;
    r3 = r0;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    /* li r0, 0 */ // 0x80809B50
    *(8 + r30) = r0; // stw @ 0x80809B54
    if (<=) goto 0x0x80809b68;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x80809B6C
    r30 = *(8 + r1); // lwz @ 0x80809B70
    r0 = *(0x14 + r1); // lwz @ 0x80809B74
}