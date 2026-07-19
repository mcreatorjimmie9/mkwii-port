/* Function at 0x805EFB54, size=120 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_805EFB54(int r3, int r4, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r7, 0 */ // 0x805EFB5C
    r7 = r7 + 0; // 0x805EFB64
    r0 = r7 + 8; // 0x805EFB68
    *(0x1c + r1) = r31; // stw @ 0x805EFB6C
    *(0x18 + r1) = r30; // stw @ 0x805EFB70
    /* li r30, 0 */ // 0x805EFB74
    *(0x14 + r1) = r29; // stw @ 0x805EFB78
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x805EFB80
    r28 = r3;
    *(0 + r3) = r4; // stw @ 0x805EFB88
    *(4 + r3) = r5; // stw @ 0x805EFB8C
    *(0xc + r3) = r7; // stw @ 0x805EFB90
    *(8 + r3) = r0; // stw @ 0x805EFB94
    *(0x10 + r3) = r6; // stw @ 0x805EFB98
    r0 = r30 rlwinm 2; // rlwinm
    r3 = r29 + r0; // 0x805EFBA4
    r3 = *(0x14 + r3); // lwz @ 0x805EFBA8
    r0 = r28;
    r31 = *(0 + r3); // lwz @ 0x805EFBB0
    if (==) goto 0x0x805efbbc;
    r0 = r28 + 8; // 0x805EFBB8
    *(0xd4 + r31) = r0; // stw @ 0x805EFBBC
    r3 = r31;
    /* li r4, 1 */ // 0x805EFBC4
    FUN_805E3430(r3, r4); // bl 0x805E3430
}