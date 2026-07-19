/* Function at 0x807C2CC4, size=116 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_807C2CC4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x807C2CCC
    r0 = *(0 + r3); // lwz @ 0x807C2CD0
    /* li r3, 0 */ // 0x807C2CD4
    if (==) goto 0x0x807c2cf4;
    if (==) goto 0x0x807c2cfc;
    if (==) goto 0x0x807c2d24;
    /* b 0x807c2d28 */ // 0x807C2CF0
    /* li r3, 0 */ // 0x807C2CF4
    /* b 0x807c2d28 */ // 0x807C2CF8
    /* lis r3, 0 */ // 0x807C2CFC
    /* li r4, 0x64 */ // 0x807C2D00
    r3 = *(0 + r3); // lwz @ 0x807C2D04
    FUN_807C03BC(r3, r3, r4); // bl 0x807C03BC
    /* xori r0, r3, 0x32 */ // 0x807C2D0C
    /* li r3, 0x32 */ // 0x807C2D10
    /* cntlzw r0, r0 */ // 0x807C2D14
    r0 = r3 << r0; // slw
    /* srwi r3, r0, 0x1f */ // 0x807C2D1C
    /* b 0x807c2d28 */ // 0x807C2D20
    /* li r3, 1 */ // 0x807C2D24
    r0 = *(0x14 + r1); // lwz @ 0x807C2D28
    return;
}