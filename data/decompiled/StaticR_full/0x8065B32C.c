/* Function at 0x8065B32C, size=156 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 8 function(s) */

int FUN_8065B32C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8065B33C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8065B344
    r30 = r3;
    if (==) goto 0x0x8065b3d4;
    /* li r4, -1 */ // 0x8065B350
    r3 = r3 + 0x18e0; // 0x8065B354
    FUN_8066D714(r4, r3); // bl 0x8066D714
    r3 = r30 + 0x176c; // 0x8065B35C
    /* li r4, -1 */ // 0x8065B360
    FUN_806A0540(r4, r3, r3, r4); // bl 0x806A0540
    r3 = r30 + 0x1234; // 0x8065B368
    /* li r4, -1 */ // 0x8065B36C
    FUN_80699284(r3, r4, r3, r4); // bl 0x80699284
    /* addic. r3, r30, 0xfd0 */ // 0x8065B374
    if (==) goto 0x0x8065b384;
    /* li r4, 0 */ // 0x8065B37C
    FUN_806498AC(r4, r4); // bl 0x806498AC
    /* addic. r3, r30, 0xe5c */ // 0x8065B384
    if (==) goto 0x0x8065b394;
    /* li r4, 0 */ // 0x8065B38C
    FUN_806A0540(r4, r4); // bl 0x806A0540
    /* lis r4, 0 */ // 0x8065B394
    r3 = r30 + 0x268; // 0x8065B398
    r4 = r4 + 0; // 0x8065B39C
    /* li r5, 0x264 */ // 0x8065B3A0
    /* li r6, 5 */ // 0x8065B3A4
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    r3 = r30 + 0x44; // 0x8065B3AC
    /* li r4, -1 */ // 0x8065B3B0
    FUN_8066A1A0(r5, r6, r3, r4); // bl 0x8066A1A0
    r3 = r30;
    /* li r4, 0 */ // 0x8065B3BC
    FUN_806711C4(r3, r4, r3, r4); // bl 0x806711C4
}