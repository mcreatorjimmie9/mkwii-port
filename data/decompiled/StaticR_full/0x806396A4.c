/* Function at 0x806396A4, size=140 bytes */
/* Stack frame: 144 bytes */
/* Saved registers: r25 */
/* Calls: 1 function(s) */

int FUN_806396A4(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -144(r1) */
    /* saved r25 */
    /* li r10, 0 */ // 0x806396AC
    /* li r7, 2 */ // 0x806396B0
    *(0x94 + r1) = r0; // stw @ 0x806396B4
    /* li r9, 4 */ // 0x806396B8
    /* li r0, 3 */ // 0x806396BC
    /* stmw r25, 0x74(r1) */ // 0x806396C0
    /* lis r30, 0 */ // 0x806396C4
    r28 = r3;
    r25 = r4;
    r29 = r5;
    r27 = r6;
    r26 = r8;
    r30 = r30 + 0; // 0x806396DC
    *(0 + r5) = r7; // stb @ 0x806396E0
    /* lis r7, 0 */ // 0x806396E4
    *(4 + r5) = r10; // stw @ 0x806396E8
    *(8 + r5) = r10; // stw @ 0x806396EC
    *(0xc + r5) = r9; // stb @ 0x806396F0
    *(0x10 + r5) = r10; // stw @ 0x806396F4
    *(0x14 + r5) = r10; // stw @ 0x806396F8
    *(0x18 + r5) = r0; // stw @ 0x806396FC
    *(0x1c + r5) = r10; // stw @ 0x80639700
    r0 = *(0 + r7); // lwz @ 0x80639704
    /* rlwinm. r0, r0, 0, 0x1d, 0x1d */ // 0x80639708
    if (==) goto 0x0x80639724;
    /* lis r3, 0 */ // 0x80639710
    r0 = *(0 + r3); // lwz @ 0x80639714
    if (!=) goto 0x0x80639724;
    /* li r10, 1 */ // 0x80639720
    *(0x20 + r5) = r10; // stb @ 0x80639724
    r3 = r29;
    FUN_805E3430(r10, r3); // bl 0x805E3430
}