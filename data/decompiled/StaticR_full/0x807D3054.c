/* Function at 0x807D3054, size=192 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 6 function(s) */

int FUN_807D3054(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r3;
    *(0x14 + r1) = r29; // stw @ 0x807D306C
    *(0x10 + r1) = r28; // stw @ 0x807D3070
    FUN_807C01B8(); // bl 0x807C01B8
    if (==) goto 0x0x807d3164;
    /* lis r3, 0 */ // 0x807D3080
    /* li r4, 0 */ // 0x807D3084
    r3 = *(0 + r3); // lwz @ 0x807D3088
    r29 = *(0x94 + r3); // lwz @ 0x807D308C
    r3 = r29;
    FUN_807D1E48(r3, r4, r3); // bl 0x807D1E48
    r28 = *(0x18 + r3); // lwz @ 0x807D3098
    r3 = r29;
    /* li r4, 1 */ // 0x807D30A0
    FUN_807D1E48(r3, r3, r4); // bl 0x807D1E48
    r29 = *(0x18 + r3); // lwz @ 0x807D30A8
    /* li r3, 0x44 */ // 0x807D30AC
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r30 = r3;
    if (==) goto 0x0x807d30e4;
    /* lis r7, 0 */ // 0x807D30C0
    /* lis r4, 0 */ // 0x807D30C4
    /* clrlwi r5, r28, 0x10 */ // 0x807D30C8
    /* lfs f1, 0x1a4(r31) */ // 0x807D30CC
    r7 = r7 + 0; // 0x807D30D0
    /* lfs f2, 0(r4) */ // 0x807D30D4
    r6 = r5;
    r4 = r7 + 0x4b; // 0x807D30DC
    FUN_8091C974(r7, r6, r4); // bl 0x8091C974
    *(4 + r31) = r30; // stw @ 0x807D30E4
    /* li r3, 0x44 */ // 0x807D30E8
    FUN_805E3430(r6, r4, r3); // bl 0x805E3430
    r30 = r3;
    if (==) goto 0x0x807d3120;
    /* lis r7, 0 */ // 0x807D30FC
    /* lis r4, 0 */ // 0x807D3100
    /* clrlwi r5, r29, 0x10 */ // 0x807D3104
    /* lfs f1, 0x1a4(r31) */ // 0x807D3108
    r7 = r7 + 0; // 0x807D310C
    /* lfs f2, 0(r4) */ // 0x807D3110
}