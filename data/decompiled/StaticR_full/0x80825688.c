/* Function at 0x80825688, size=96 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 1 function(s) */

int FUN_80825688(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* lis r3, 0 */ // 0x80825690
    *(0x24 + r1) = r0; // stw @ 0x80825694
    /* stmw r27, 0xc(r1) */ // 0x80825698
    r27 = r4;
    /* li r29, 0 */ // 0x808256A0
    /* li r30, 0 */ // 0x808256A4
    r31 = *(0 + r3); // lwz @ 0x808256A8
    r28 = *(0x154 + r31); // lwz @ 0x808256AC
    /* b 0x808256cc */ // 0x808256B0
    r3 = *(0x148 + r31); // lwz @ 0x808256B4
    r4 = r27;
    /* lwzx r3, r3, r30 */ // 0x808256BC
    FUN_80832E24(r4); // bl 0x80832E24
    r30 = r30 + 4; // 0x808256C4
    r29 = r29 + 1; // 0x808256C8
    if (<) goto 0x0x808256b4;
    r0 = *(0x24 + r1); // lwz @ 0x808256D8
    return;
}