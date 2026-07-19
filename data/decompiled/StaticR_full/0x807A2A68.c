/* Function at 0x807A2A68, size=80 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r23 */
/* Calls: 2 function(s) */

int FUN_807A2A68(int r3, int r4, int r5)
{
    /* Stack frame: -64(r1) */
    /* saved r23 */
    /* lis r4, 0 */ // 0x807A2A70
    *(0x44 + r1) = r0; // stw @ 0x807A2A74
    /* stmw r23, 0x1c(r1) */ // 0x807A2A78
    r31 = r3;
    r3 = *(0 + r4); // lwz @ 0x807A2A80
    FUN_80787B48(r4); // bl 0x80787B48
    /* lis r4, 0 */ // 0x807A2A88
    /* lis r3, 0 */ // 0x807A2A8C
    r5 = r4 + 0; // 0x807A2A90
    /* li r28, 0 */ // 0x807A2A94
    *(0 + r4) = r28; // stw @ 0x807A2A98
    /* li r4, 1 */ // 0x807A2A9C
    r3 = *(0 + r3); // lwz @ 0x807A2AA0
    *(4 + r5) = r28; // stw @ 0x807A2AA4
    *(8 + r5) = r28; // stw @ 0x807A2AA8
    *(0xc + r5) = r28; // stw @ 0x807A2AAC
    r3 = *(0x5bc + r3); // lwz @ 0x807A2AB0
    FUN_805E3430(); // bl 0x805E3430
}