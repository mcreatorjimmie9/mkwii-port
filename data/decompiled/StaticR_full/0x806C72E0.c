/* Function at 0x806C72E0, size=160 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 7 function(s) */

int FUN_806C72E0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806C72F0
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806C72F8
    r30 = r3;
    if (==) goto 0x0x806c7364;
    /* li r4, -1 */ // 0x806C7304
    r3 = r3 + 0x634; // 0x806C7308
    FUN_8066D714(r4, r3); // bl 0x8066D714
    r3 = r30 + 0x4c0; // 0x806C7310
    /* li r4, -1 */ // 0x806C7314
    FUN_8066CEF8(r4, r3, r3, r4); // bl 0x8066CEF8
    /* addic. r3, r30, 0x34c */ // 0x806C731C
    if (==) goto 0x0x806c732c;
    /* li r4, 0 */ // 0x806C7324
    FUN_806A0540(r4, r4); // bl 0x806A0540
    /* addic. r3, r30, 0x1d8 */ // 0x806C732C
    if (==) goto 0x0x806c733c;
    /* li r4, 0 */ // 0x806C7334
    FUN_806A0540(r4, r4); // bl 0x806A0540
    r3 = r30 + 0x94; // 0x806C733C
    /* li r4, -1 */ // 0x806C7340
    FUN_806688C8(r4, r3, r4); // bl 0x806688C8
    r3 = r30;
    /* li r4, 0 */ // 0x806C734C
    FUN_806711C4(r3, r4, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x806c7364;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x806C7368
    r30 = *(8 + r1); // lwz @ 0x806C736C
    r0 = *(0x14 + r1); // lwz @ 0x806C7370
    return;
}