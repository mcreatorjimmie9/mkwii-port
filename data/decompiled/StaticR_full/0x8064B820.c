/* Function at 0x8064B820, size=228 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 12 function(s) */

int FUN_8064B820(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8064B830
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8064B838
    r30 = r3;
    if (==) goto 0x0x8064b8e8;
    /* li r4, -1 */ // 0x8064B844
    r3 = r3 + 0x13b0; // 0x8064B848
    FUN_8066D714(r4, r3); // bl 0x8066D714
    /* addic. r3, r30, 0x11f8 */ // 0x8064B850
    if (==) goto 0x0x8064b860;
    /* li r4, 0 */ // 0x8064B858
    FUN_806A0540(r3, r4); // bl 0x806A0540
    /* addic. r3, r30, 0xf94 */ // 0x8064B860
    if (==) goto 0x0x8064b870;
    /* li r4, 0 */ // 0x8064B868
    FUN_806498AC(r4, r4); // bl 0x806498AC
    /* addic. r3, r30, 0xd2c */ // 0x8064B870
    if (==) goto 0x0x8064b880;
    /* li r4, 0 */ // 0x8064B878
    FUN_806498AC(r4, r4); // bl 0x806498AC
    r3 = r30 + 0xad8; // 0x8064B880
    /* li r4, -1 */ // 0x8064B884
    FUN_806498AC(r4, r3, r4); // bl 0x806498AC
    r3 = r30 + 0x884; // 0x8064B88C
    /* li r4, -1 */ // 0x8064B890
    FUN_806498AC(r3, r4, r3, r4); // bl 0x806498AC
    r3 = r30 + 0x630; // 0x8064B898
    /* li r4, -1 */ // 0x8064B89C
    FUN_806498AC(r3, r4, r3, r4); // bl 0x806498AC
    r3 = r30 + 0x3dc; // 0x8064B8A4
    /* li r4, -1 */ // 0x8064B8A8
    FUN_806498AC(r3, r4, r3, r4); // bl 0x806498AC
    /* addic. r3, r30, 0x268 */ // 0x8064B8B0
    if (==) goto 0x0x8064b8c0;
    /* li r4, 0 */ // 0x8064B8B8
    FUN_806A0540(r4, r4); // bl 0x806A0540
    r3 = r30 + 0x44; // 0x8064B8C0
    /* li r4, -1 */ // 0x8064B8C4
    FUN_8066A1A0(r4, r3, r4); // bl 0x8066A1A0
    r3 = r30;
    /* li r4, 0 */ // 0x8064B8D0
    FUN_806711C4(r3, r4, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x8064b8e8;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x8064B8EC
    r30 = *(8 + r1); // lwz @ 0x8064B8F0
    r0 = *(0x14 + r1); // lwz @ 0x8064B8F4
    return;
}