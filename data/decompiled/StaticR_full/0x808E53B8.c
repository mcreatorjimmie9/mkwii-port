/* Function at 0x808E53B8, size=220 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 9 function(s) */

int FUN_808E53B8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x808E53CC
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x808E53D4
    r29 = r3;
    if (==) goto 0x0x808e548c;
    /* addic. r31, r3, 0xe98 */ // 0x808E53E0
    if (==) goto 0x0x808e540c;
    /* lis r4, 0 */ // 0x808E53E8
    r3 = r31 + 0x174; // 0x808E53EC
    r4 = r4 + 0; // 0x808E53F0
    /* li r5, 0x174 */ // 0x808E53F4
    /* li r6, 5 */ // 0x808E53F8
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    r3 = r31;
    /* li r4, 0 */ // 0x808E5404
    FUN_806A0540(r5, r6, r3, r4); // bl 0x806A0540
    /* addic. r31, r29, 0x6c4 */ // 0x808E540C
    if (==) goto 0x0x808e544c;
    /* addic. r3, r31, 0x648 */ // 0x808E5414
    if (==) goto 0x0x808e5428;
    r3 = r3 + 0x18; // 0x808E541C
    /* li r4, 0 */ // 0x808E5420
    FUN_806A0540(r3, r4); // bl 0x806A0540
    /* lis r4, 0 */ // 0x808E5428
    r3 = r31 + 0x174; // 0x808E542C
    r4 = r4 + 0; // 0x808E5430
    /* li r5, 0x254 */ // 0x808E5434
    /* li r6, 2 */ // 0x808E5438
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    r3 = r31;
    /* li r4, 0 */ // 0x808E5444
    FUN_806A0540(r5, r6, r3, r4); // bl 0x806A0540
    r3 = r29 + 0x430; // 0x808E544C
    /* li r4, -1 */ // 0x808E5450
    FUN_8066A1A0(r3, r4, r3, r4); // bl 0x8066A1A0
    if (==) goto 0x0x808e547c;
    /* addic. r3, r29, 0x54 */ // 0x808E5460
    if (==) goto 0x0x808e5470;
    /* li r4, 0 */ // 0x808E5468
    FUN_806498AC(r4); // bl 0x806498AC
    r3 = r29;
    /* li r4, 0 */ // 0x808E5474
    FUN_806711C4(r4, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x808e548c;
    r3 = r29;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r31 = *(0x1c + r1); // lwz @ 0x808E548C
    r3 = r29;
}