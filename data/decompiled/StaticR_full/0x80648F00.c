/* Function at 0x80648F00, size=76 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r23 */
/* Calls: 2 function(s) */

int FUN_80648F00(int r3, int r4)
{
    /* Stack frame: -64(r1) */
    /* saved r23 */
    /* lis r4, 0 */ // 0x80648F08
    *(0x44 + r1) = r0; // stw @ 0x80648F0C
    /* stmw r23, 0x1c(r1) */ // 0x80648F10
    r23 = r3;
    r0 = *(0x70 + r3); // lhz @ 0x80648F18
    r26 = *(0 + r4); // lwz @ 0x80648F1C
    if (==) goto 0x0x80648fd4;
    r0 = *(0xc + r3); // lwz @ 0x80648F28
    *(8 + r1) = r0; // stw @ 0x80648F30
    FUN_805E3430(r3); // bl 0x805E3430
    r30 = r3;
    /* slwi r3, r26, 2 */ // 0x80648F3C
    /* li r4, 0x20 */ // 0x80648F40
    FUN_805E3430(r4); // bl 0x805E3430
    *(0x64 + r23) = r3; // stw @ 0x80648F48
}