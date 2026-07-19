/* Function at 0x805EFC6C, size=116 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 1 function(s) */

int FUN_805EFC6C(int r3, int r4, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* lis r8, 0 */ // 0x805EFC74
    *(0x24 + r1) = r0; // stw @ 0x805EFC78
    r8 = r8 + 0; // 0x805EFC7C
    /* li r0, 2 */ // 0x805EFC80
    /* stmw r27, 0xc(r1) */ // 0x805EFC84
    r7 = r8 + 8; // 0x805EFC88
    r27 = r3;
    r28 = r4;
    r29 = r6;
    /* li r31, 0 */ // 0x805EFC98
    *(0 + r3) = r4; // stw @ 0x805EFC9C
    *(4 + r3) = r5; // stw @ 0x805EFCA0
    *(0xc + r3) = r8; // stw @ 0x805EFCA4
    *(8 + r3) = r7; // stw @ 0x805EFCA8
    *(0x10 + r3) = r0; // stw @ 0x805EFCAC
    r0 = r31 rlwinm 2; // rlwinm
    r3 = r28 + r0; // 0x805EFCB8
    r3 = *(0x14 + r3); // lwz @ 0x805EFCBC
    r0 = r27;
    r30 = *(0 + r3); // lwz @ 0x805EFCC4
    if (==) goto 0x0x805efcd0;
    r0 = r27 + 8; // 0x805EFCCC
    *(0xd4 + r30) = r0; // stw @ 0x805EFCD0
    r3 = r30;
    /* li r4, 1 */ // 0x805EFCD8
    FUN_805E3430(r3, r4); // bl 0x805E3430
}