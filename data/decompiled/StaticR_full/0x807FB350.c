/* Function at 0x807FB350, size=80 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 2 function(s) */

int FUN_807FB350(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* lis r5, 0 */ // 0x807FB358
    *(0x24 + r1) = r0; // stw @ 0x807FB35C
    r5 = r5 + 0; // 0x807FB360
    /* stmw r26, 8(r1) */ // 0x807FB364
    r30 = r3;
    r31 = r4;
    FUN_8089F578(r5); // bl 0x8089F578
    /* lis r3, 0 */ // 0x807FB374
    /* lis r4, 0 */ // 0x807FB378
    /* li r0, 0 */ // 0x807FB37C
    *(0xb8 + r30) = r0; // stw @ 0x807FB380
    r3 = r3 + 0; // 0x807FB384
    r4 = r4 + 0; // 0x807FB388
    *(0 + r30) = r3; // stw @ 0x807FB38C
    /* li r3, 0xc0 */ // 0x807FB390
    *(0xb4 + r30) = r4; // stw @ 0x807FB394
    *(0xbc + r30) = r0; // stw @ 0x807FB398
    FUN_805E3430(r4, r3); // bl 0x805E3430
}