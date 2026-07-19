/* Function at 0x8078A858, size=180 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 4 function(s) */

int FUN_8078A858(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    *(0x14 + r1) = r29; // stw @ 0x8078A870
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x8078A878
    r28 = r3;
    if (==) goto 0x0x8078a9cc;
    /* lis r5, 0 */ // 0x8078A884
    /* lis r4, 0 */ // 0x8078A888
    r5 = r5 + 0; // 0x8078A88C
    *(0 + r3) = r5; // stw @ 0x8078A890
    r31 = *(0 + r4); // lwz @ 0x8078A894
    if (==) goto 0x0x8078a9b0;
    /* li r0, 0 */ // 0x8078A8A0
    *(0 + r4) = r0; // stw @ 0x8078A8A4
    if (==) goto 0x0x8078a9b0;
    /* addic. r3, r31, 0x18c */ // 0x8078A8AC
    if (==) goto 0x0x8078a8b8;
    FUN_805E3430(); // bl 0x805E3430
    /* addic. r3, r31, 0x178 */ // 0x8078A8B8
    if (==) goto 0x0x8078a8c4;
    FUN_805E3430(); // bl 0x805E3430
    /* lis r4, 0 */ // 0x8078A8C4
    r3 = r31 + 0x1c; // 0x8078A8C8
    r4 = r4 + 0; // 0x8078A8CC
    /* li r5, 0x74 */ // 0x8078A8D0
    /* li r6, 3 */ // 0x8078A8D4
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    /* addic. r3, r31, 0x18 */ // 0x8078A8DC
    if (==) goto 0x0x8078a8e8;
    FUN_805E3430(r5, r6); // bl 0x805E3430
    if (==) goto 0x0x8078a9a8;
    /* lis r4, 0 */ // 0x8078A8F0
    /* lis r3, 0 */ // 0x8078A8F4
    r4 = r4 + 0; // 0x8078A8F8
    *(0 + r31) = r4; // stw @ 0x8078A8FC
    r30 = *(0 + r3); // lwz @ 0x8078A900
    if (==) goto 0x0x8078a99c;
}