/* Function at 0x807EBE1C, size=116 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 2 function(s) */

int FUN_807EBE1C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* li r5, 0 */ // 0x807EBE24
    *(0x24 + r1) = r0; // stw @ 0x807EBE28
    /* stmw r26, 8(r1) */ // 0x807EBE2C
    r26 = r3;
    FUN_8089F578(r5); // bl 0x8089F578
    /* lis r4, 0 */ // 0x807EBE38
    /* lis r3, 0 */ // 0x807EBE3C
    /* li r0, 0 */ // 0x807EBE40
    /* lis r30, 0 */ // 0x807EBE44
    r4 = r4 + 0; // 0x807EBE48
    r3 = r3 + 0; // 0x807EBE4C
    *(0 + r26) = r4; // stw @ 0x807EBE50
    r31 = r30 + 0; // 0x807EBE54
    /* li r27, 0 */ // 0x807EBE58
    /* li r28, 0 */ // 0x807EBE5C
    *(0x164 + r26) = r3; // stw @ 0x807EBE60
    /* lis r29, 0 */ // 0x807EBE64
    *(0x168 + r26) = r0; // stw @ 0x807EBE68
    *(0x16c + r26) = r0; // stw @ 0x807EBE6C
    r3 = *(0 + r29); // lwz @ 0x807EBE70
    r0 = *(0x25 + r3); // lbz @ 0x807EBE74
    if (<=) goto 0x0x807ebea8;
    /* li r3, 0x7c */ // 0x807EBE80
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x807ebe9c;
}