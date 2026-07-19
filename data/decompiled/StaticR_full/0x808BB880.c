/* Function at 0x808BB880, size=220 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 9 function(s) */

int FUN_808BB880(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x808BB894
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x808BB89C
    r29 = r3;
    if (==) goto 0x0x808bb954;
    /* addic. r31, r3, 0x1c90 */ // 0x808BB8A8
    if (==) goto 0x0x808bb8d4;
    /* lis r4, 0 */ // 0x808BB8B0
    r3 = r31 + 0x174; // 0x808BB8B4
    r4 = r4 + 0; // 0x808BB8B8
    /* li r5, 0x174 */ // 0x808BB8BC
    /* li r6, 4 */ // 0x808BB8C0
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    r3 = r31;
    /* li r4, 0 */ // 0x808BB8CC
    FUN_806A0540(r5, r6, r3, r4); // bl 0x806A0540
    /* addic. r31, r29, 0x6c4 */ // 0x808BB8D4
    if (==) goto 0x0x808bb914;
    /* addic. r3, r31, 0x1440 */ // 0x808BB8DC
    if (==) goto 0x0x808bb8f0;
    r3 = r3 + 0x18; // 0x808BB8E4
    /* li r4, 0 */ // 0x808BB8E8
    FUN_806A0540(r3, r4); // bl 0x806A0540
    /* lis r4, 0 */ // 0x808BB8F0
    r3 = r31 + 0x174; // 0x808BB8F4
    r4 = r4 + 0; // 0x808BB8F8
    /* li r5, 0x254 */ // 0x808BB8FC
    /* li r6, 8 */ // 0x808BB900
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    r3 = r31;
    /* li r4, 0 */ // 0x808BB90C
    FUN_806A0540(r5, r6, r3, r4); // bl 0x806A0540
    r3 = r29 + 0x430; // 0x808BB914
    /* li r4, -1 */ // 0x808BB918
    FUN_8066A1A0(r3, r4, r3, r4); // bl 0x8066A1A0
    if (==) goto 0x0x808bb944;
    /* addic. r3, r29, 0x54 */ // 0x808BB928
    if (==) goto 0x0x808bb938;
    /* li r4, 0 */ // 0x808BB930
    FUN_806498AC(r4); // bl 0x806498AC
    r3 = r29;
    /* li r4, 0 */ // 0x808BB93C
    FUN_806711C4(r4, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x808bb954;
    r3 = r29;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r31 = *(0x1c + r1); // lwz @ 0x808BB954
    r3 = r29;
}