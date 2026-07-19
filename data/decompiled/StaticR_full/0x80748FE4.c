/* Function at 0x80748FE4, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80748FE4(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x80748FEC
    *(0x14 + r1) = r0; // stw @ 0x80748FF0
    r5 = r5 + 0; // 0x80748FF4
    r5 = r5 + 0x1e; // 0x80748FF8
    *(0xc + r1) = r31; // stw @ 0x80748FFC
    r31 = r3;
    FUN_8089F578(r5, r5); // bl 0x8089F578
    /* lis r4, 0 */ // 0x80749008
    /* lis r3, 0 */ // 0x8074900C
    r4 = r4 + 0; // 0x80749010
    *(0 + r31) = r4; // stw @ 0x80749014
    r3 = *(0 + r3); // lwz @ 0x80749018
    r3 = *(0x24 + r3); // lbz @ 0x8074901C
    FUN_805E3430(r3, r4); // bl 0x805E3430
}