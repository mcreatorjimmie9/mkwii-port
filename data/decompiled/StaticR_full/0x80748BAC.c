/* Function at 0x80748BAC, size=192 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_80748BAC(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    r7 = r6;
    /* li r8, 0 */ // 0x80748BB8
    *(0x24 + r1) = r0; // stw @ 0x80748BBC
    r0 = r5;
    r5 = r4;
    *(0x1c + r1) = r31; // stw @ 0x80748BC8
    r31 = r3;
    r6 = r0;
    *(0x18 + r1) = r30; // stw @ 0x80748BD4
    /* lis r30, 0 */ // 0x80748BD8
    r4 = r30 + 0; // 0x80748BDC
    FUN_8089F5F0(r6, r4); // bl 0x8089F5F0
    /* lis r4, 0 */ // 0x80748BE4
    r3 = r30 + 0; // 0x80748BE8
    r4 = r4 + 0; // 0x80748BEC
    *(0 + r31) = r4; // stw @ 0x80748BF0
    /* lis r30, 0 */ // 0x80748BF4
    r4 = r3 + 0xf; // 0x80748BF8
    r3 = *(0 + r30); // lwz @ 0x80748BFC
    r3 = *(4 + r3); // lwz @ 0x80748C00
    FUN_808AC704(r4); // bl 0x808AC704
    r6 = *(0 + r30); // lwz @ 0x80748C08
    /* lis r0, 0x4330 */ // 0x80748C0C
    /* lis r4, 0 */ // 0x80748C10
    /* lis r5, 0 */ // 0x80748C14
    r8 = *(4 + r6); // lwz @ 0x80748C18
    r6 = r3 rlwinm 1; // rlwinm
    *(8 + r1) = r0; // stw @ 0x80748C20
    /* lis r3, 0 */ // 0x80748C24
    r7 = *(0xc + r8); // lwz @ 0x80748C28
    r8 = *(8 + r8); // lwz @ 0x80748C2C
    /* lhax r0, r7, r6 */ // 0x80748C30
    /* lfs f0, 0(r4) */ // 0x80748C34
    /* mulli r0, r0, 0x74 */ // 0x80748C38
    /* lfd f2, 0(r5) */ // 0x80748C3C
    r4 = r8 + r0; // 0x80748C40
    r0 = *(0x6e + r4); // lha @ 0x80748C44
    /* xoris r0, r0, 0x8000 */ // 0x80748C48
    *(0xc + r1) = r0; // stw @ 0x80748C4C
    /* lfd f1, 8(r1) */ // 0x80748C50
    /* fsubs f1, f1, f2 */ // 0x80748C54
    /* fmuls f0, f0, f1 */ // 0x80748C58
    /* stfs f0, 0xb0(r31) */ // 0x80748C5C
    r3 = *(0 + r3); // lwz @ 0x80748C60
    r3 = *(0x24 + r3); // lbz @ 0x80748C64
    FUN_805E3430(); // bl 0x805E3430
}