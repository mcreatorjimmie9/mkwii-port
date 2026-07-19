/* Function at 0x80647EF8, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80647EF8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r3, 0 */ // 0x80647F00
    *(0x14 + r1) = r0; // stw @ 0x80647F04
    *(0xc + r1) = r31; // stw @ 0x80647F08
    r0 = *(0 + r3); // lwz @ 0x80647F0C
    if (!=) goto 0x0x80647f7c;
    /* li r3, 0x2c */ // 0x80647F18
    FUN_805E3430(r3); // bl 0x805E3430
    r31 = r3;
    if (==) goto 0x0x80647f74;
    FUN_805E3430(r3); // bl 0x805E3430
    /* lis r3, 0 */ // 0x80647F30
    r4 = r31 + 0x10; // 0x80647F34
    r3 = r3 + 0; // 0x80647F38
}