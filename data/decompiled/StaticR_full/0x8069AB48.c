/* Function at 0x8069AB48, size=120 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_8069AB48(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r31, 0 */ // 0x8069AB58
    *(0x18 + r1) = r30; // stw @ 0x8069AB5C
    /* li r30, 0 */ // 0x8069AB60
    *(0x14 + r1) = r29; // stw @ 0x8069AB64
    r29 = r3;
    *(0x180 + r3) = r4; // stw @ 0x8069AB6C
    /* b 0x8069ab98 */ // 0x8069AB70
    r0 = *(0x180 + r29); // lwz @ 0x8069AB74
    r3 = *(0x188 + r29); // lwz @ 0x8069AB78
    /* subf r0, r30, r0 */ // 0x8069AB7C
    /* cntlzw r0, r0 */ // 0x8069AB80
    r3 = r3 + r31; // 0x8069AB84
    /* srwi r4, r0, 5 */ // 0x8069AB88
    FUN_8069B530(); // bl 0x8069B530
    r31 = r31 + 0x240; // 0x8069AB90
    r30 = r30 + 1; // 0x8069AB94
    r0 = *(0x17c + r29); // lwz @ 0x8069AB98
    if (<) goto 0x0x8069ab74;
    r0 = *(0x24 + r1); // lwz @ 0x8069ABA4
    r31 = *(0x1c + r1); // lwz @ 0x8069ABA8
    r30 = *(0x18 + r1); // lwz @ 0x8069ABAC
    r29 = *(0x14 + r1); // lwz @ 0x8069ABB0
    return;
}