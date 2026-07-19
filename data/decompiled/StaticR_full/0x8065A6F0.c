/* Function at 0x8065A6F0, size=148 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 5 function(s) */

int FUN_8065A6F0(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* stmw r27, 0xc(r1) */ // 0x8065A6FC
    /* lis r27, 0 */ // 0x8065A700
    r3 = *(0 + r27); // lwz @ 0x8065A704
    FUN_806F58E0(); // bl 0x806F58E0
    if (!=) goto 0x0x8065a770;
    r3 = *(0 + r27); // lwz @ 0x8065A714
    FUN_806F7D54(); // bl 0x806F7D54
    /* li r0, 0 */ // 0x8065A71C
    /* li r30, 0xa */ // 0x8065A720
    r31 = r0 * r30; // 0x8065A724
    /* lis r3, 0x1062 */ // 0x8065A728
    /* lis r29, -0x8000 */ // 0x8065A72C
    r28 = r3 + 0x4dd3; // 0x8065A730
    /* b 0x8065a760 */ // 0x8065A734
    r3 = *(0 + r27); // lwz @ 0x8065A738
    FUN_806F5BA0(r3); // bl 0x806F5BA0
    r0 = *(0xf8 + r29); // lwz @ 0x8065A740
    /* srwi r0, r0, 2 */ // 0x8065A744
    r0 = r28 * r0; // 0x8065A748
    /* srwi r3, r0, 6 */ // 0x8065A74C
    r0 = r3 * r30; // 0x8065A750
    /* mulli r4, r3, 0xa */ // 0x8065A754
    r3 = r0 + r31; // 0x8065A758
    FUN_805E3430(); // bl 0x805E3430
    r3 = *(0 + r27); // lwz @ 0x8065A760
    FUN_806F58E0(); // bl 0x806F58E0
    if (==) goto 0x0x8065a738;
    r0 = *(0x24 + r1); // lwz @ 0x8065A774
    return;
}