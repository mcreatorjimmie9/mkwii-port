/* Function at 0x805B69C0, size=64 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r22 */
/* Calls: 2 function(s) */

int FUN_805B69C0(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r22 */
    /* stmw r22, 8(r1) */ // 0x805B69CC
    /* lis r26, 0 */ // 0x805B69D0
    r30 = r4;
    /* lis r27, 0 */ // 0x805B69D8
    r29 = r3;
    /* li r23, 0 */ // 0x805B69E0
    r4 = *(0 + r26); // lwz @ 0x805B69E4
    r3 = *(0 + r27); // lwz @ 0x805B69E8
    r5 = *(0x30 + r4); // lwz @ 0x805B69EC
    /* li r4, 0 */ // 0x805B69F0
    FUN_805CF0BC(r4); // bl 0x805CF0BC
    r27 = *(0 + r27); // lwz @ 0x805B69F8
    FUN_805E3430(r4); // bl 0x805E3430
}