/* Function at 0x80748CFC, size=128 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 1 function(s) */

int FUN_80748CFC(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* stmw r27, 0xc(r1) */ // 0x80748D08
    r27 = r3;
    /* li r28, 0 */ // 0x80748D10
    /* lis r29, 0 */ // 0x80748D14
    /* li r30, 0 */ // 0x80748D18
    /* lis r31, 0 */ // 0x80748D1C
    /* b 0x80748d58 */ // 0x80748D20
    r3 = *(0xb4 + r27); // lwz @ 0x80748D24
    /* lbzx r0, r3, r28 */ // 0x80748D28
    if (!=) goto 0x0x80748d4c;
    r3 = *(0 + r29); // lwz @ 0x80748D34
    r0 = r28 rlwinm 2; // rlwinm
    /* li r4, 0 */ // 0x80748D3C
    r3 = *(0x68 + r3); // lwz @ 0x80748D40
    /* lwzx r3, r3, r0 */ // 0x80748D44
    FUN_8073DFBC(r4); // bl 0x8073DFBC
    r3 = *(0xb4 + r27); // lwz @ 0x80748D4C
    /* stbx r30, r3, r28 */ // 0x80748D50
    r28 = r28 + 1; // 0x80748D54
    r3 = *(0 + r31); // lwz @ 0x80748D58
    r0 = *(0x24 + r3); // lbz @ 0x80748D5C
    if (<) goto 0x0x80748d24;
    r0 = *(0x24 + r1); // lwz @ 0x80748D6C
    return;
}