/* Function at 0x8070B74C, size=88 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 3 function(s) */

int FUN_8070B74C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* li r4, 0 */ // 0x8070B754
    /* li r6, 0 */ // 0x8070B758
    *(0x24 + r1) = r0; // stw @ 0x8070B75C
    /* stmw r26, 8(r1) */ // 0x8070B760
    /* lis r31, 0 */ // 0x8070B764
    r31 = r31 + 0; // 0x8070B768
    /* lis r30, 0 */ // 0x8070B76C
    r26 = r3;
    r5 = r31 + 0x30; // 0x8070B774
    r3 = *(0 + r30); // lwz @ 0x8070B778
    FUN_805CFD60(r5); // bl 0x805CFD60
    r29 = r3;
    r3 = *(0 + r30); // lwz @ 0x8070B784
    r5 = r31 + 0x44; // 0x8070B788
    /* li r4, 0 */ // 0x8070B78C
    /* li r6, 0 */ // 0x8070B790
    FUN_805CFD60(r5, r4, r6); // bl 0x805CFD60
    r30 = r3;
    /* li r3, 0x20 */ // 0x8070B79C
    FUN_805E3430(r4, r6, r3); // bl 0x805E3430
}