/* Function at 0x80683C30, size=112 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80683C30(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80683C40
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80683C48
    r30 = r3;
    if (==) goto 0x0x80683c84;
    /* addic. r3, r3, 0xc */ // 0x80683C54
    if (==) goto 0x0x80683c74;
    /* lis r4, 0 */ // 0x80683C5C
    r3 = r3 + 0x68; // 0x80683C60
    r4 = r4 + 0; // 0x80683C64
    /* li r5, 0xc */ // 0x80683C68
    /* li r6, 5 */ // 0x80683C6C
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    if (<=) goto 0x0x80683c84;
    r3 = r30;
    FUN_805E3430(r6, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x80683C88
    r30 = *(8 + r1); // lwz @ 0x80683C8C
    r0 = *(0x14 + r1); // lwz @ 0x80683C90
    return;
}