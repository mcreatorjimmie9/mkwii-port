/* Function at 0x807D2964, size=136 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 4 function(s) */

int FUN_807D2964(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    *(0x10 + r1) = r28; // stw @ 0x807D297C
    r28 = r3;
    FUN_807C01B8(); // bl 0x807C01B8
    if (==) goto 0x0x807d2a70;
    /* lis r3, 0 */ // 0x807D2990
    /* li r4, 0 */ // 0x807D2994
    r3 = *(0 + r3); // lwz @ 0x807D2998
    r31 = *(0x94 + r3); // lwz @ 0x807D299C
    r3 = r31;
    FUN_807D1E48(r3, r4, r3); // bl 0x807D1E48
    r30 = *(0x18 + r3); // lwz @ 0x807D29A8
    r3 = r31;
    /* li r4, 1 */ // 0x807D29B0
    FUN_807D1E48(r3, r3, r4); // bl 0x807D1E48
    r29 = *(0x18 + r3); // lwz @ 0x807D29B8
    /* li r3, 0x44 */ // 0x807D29BC
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r31 = r3;
    if (==) goto 0x0x807d29f0;
    /* lis r6, 0 */ // 0x807D29D0
    /* lis r4, 0 */ // 0x807D29D4
    /* lfs f1, 0x1a4(r28) */ // 0x807D29D8
    /* clrlwi r5, r30, 0x10 */ // 0x807D29DC
    /* lfs f2, 0(r6) */ // 0x807D29E0
    r6 = r5;
    r4 = r4 + 0; // 0x807D29E8
}