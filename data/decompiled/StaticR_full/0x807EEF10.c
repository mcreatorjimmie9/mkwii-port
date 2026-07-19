/* Function at 0x807EEF10, size=156 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_807EEF10(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x807EEF20
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807EEF28
    r30 = r3;
    if (==) goto 0x0x807eefa0;
    /* addic. r0, r3, 0xbc */ // 0x807EEF34
    if (==) goto 0x0x807eef64;
    r0 = *(0xc4 + r3); // lwz @ 0x807EEF3C
    /* lis r4, 0 */ // 0x807EEF40
    r4 = r4 + 0; // 0x807EEF44
    *(0xbc + r3) = r4; // stw @ 0x807EEF48
    if (==) goto 0x0x807eef64;
    r3 = r0;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    /* li r0, 0 */ // 0x807EEF5C
    *(0xc4 + r30) = r0; // stw @ 0x807EEF60
    /* addic. r0, r30, 0xb0 */ // 0x807EEF64
    if (==) goto 0x0x807eef90;
    r3 = *(0xb8 + r30); // lwz @ 0x807EEF6C
    /* lis r4, 0 */ // 0x807EEF70
    r4 = r4 + 0; // 0x807EEF74
    *(0xb0 + r30) = r4; // stw @ 0x807EEF78
    if (==) goto 0x0x807eef90;
    FUN_805E3430(r4, r4); // bl 0x805E3430
    /* li r0, 0 */ // 0x807EEF88
    *(0xb8 + r30) = r0; // stw @ 0x807EEF8C
    if (<=) goto 0x0x807eefa0;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x807EEFA4
    r30 = *(8 + r1); // lwz @ 0x807EEFA8
}