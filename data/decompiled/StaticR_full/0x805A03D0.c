/* Function at 0x805A03D0, size=68 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r27 */
/* Calls: 1 function(s) */

int FUN_805A03D0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -48(r1) */
    /* saved r27 */
    /* lis r6, 0 */ // 0x805A03D8
    /* lis r5, 0 */ // 0x805A03DC
    *(0x34 + r1) = r0; // stw @ 0x805A03E0
    /* slwi r0, r4, 3 */ // 0x805A03E4
    r6 = r6 + 0; // 0x805A03E8
    /* stmw r27, 0x1c(r1) */ // 0x805A03EC
    r27 = r3;
    /* lwzux r30, r6, r0 */ // 0x805A03F4
    r3 = r5 + 0; // 0x805A03F8
    r28 = r4;
    r29 = *(4 + r6); // lwz @ 0x805A0400
    r5 = r30;
    r6 = r29;
    /* crclr cr1eq */ // 0x805A040C
    FUN_805E3430(r5, r6); // bl 0x805E3430
}