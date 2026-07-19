/* Function at 0x80681F54, size=168 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 9 function(s) */

int FUN_80681F54(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80681F64
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80681F6C
    r30 = r3;
    if (==) goto 0x0x80681ffc;
    /* li r4, -1 */ // 0x80681F78
    r3 = r3 + 0x2280; // 0x80681F7C
    FUN_8066A1A0(r4, r3); // bl 0x8066A1A0
    /* addic. r3, r30, 0x210c */ // 0x80681F84
    if (==) goto 0x0x80681f94;
    /* li r4, 0 */ // 0x80681F8C
    FUN_806A0540(r3, r4); // bl 0x806A0540
    /* addic. r3, r30, 0x1ea8 */ // 0x80681F94
    if (==) goto 0x0x80681fa4;
    /* li r4, 0 */ // 0x80681F9C
    FUN_806498AC(r4, r4); // bl 0x806498AC
    r3 = r30 + 0x1c34; // 0x80681FA4
    /* li r4, -1 */ // 0x80681FA8
    FUN_80653AE8(r4, r3, r4); // bl 0x80653AE8
    r3 = r30 + 0x19e0; // 0x80681FB0
    /* li r4, -1 */ // 0x80681FB4
    FUN_806498AC(r3, r4, r3, r4); // bl 0x806498AC
    r3 = r30 + 0x178c; // 0x80681FBC
    /* li r4, -1 */ // 0x80681FC0
    FUN_806498AC(r3, r4, r3, r4); // bl 0x806498AC
    /* lis r4, 0 */ // 0x80681FC8
    r3 = r30 + 0x44; // 0x80681FCC
    r4 = r4 + 0; // 0x80681FD0
    /* li r5, 0x254 */ // 0x80681FD4
    /* li r6, 0xa */ // 0x80681FD8
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    r3 = r30;
    /* li r4, 0 */ // 0x80681FE4
    FUN_806711C4(r5, r6, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x80681ffc;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
}