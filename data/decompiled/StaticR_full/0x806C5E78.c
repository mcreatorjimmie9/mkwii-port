/* Function at 0x806C5E78, size=128 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 6 function(s) */

int FUN_806C5E78(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806C5E88
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806C5E90
    r30 = r3;
    if (==) goto 0x0x806c5f14;
    /* li r4, -1 */ // 0x806C5E9C
    r3 = r3 + 0x1270; // 0x806C5EA0
    FUN_8066D714(r4, r3); // bl 0x8066D714
    /* addic. r3, r30, 0x100c */ // 0x806C5EA8
    if (==) goto 0x0x806c5eb8;
    /* li r4, 0 */ // 0x806C5EB0
    FUN_806498AC(r3, r4); // bl 0x806498AC
    r3 = r30 + 0xdb8; // 0x806C5EB8
    /* li r4, -1 */ // 0x806C5EBC
    FUN_806498AC(r4, r3, r4); // bl 0x806498AC
    /* lis r4, 0 */ // 0x806C5EC4
    r3 = r30 + 0x468; // 0x806C5EC8
    r4 = r4 + 0; // 0x806C5ECC
    /* li r5, 0x254 */ // 0x806C5ED0
    /* li r6, 4 */ // 0x806C5ED4
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    /* addic. r3, r30, 0x2f4 */ // 0x806C5EDC
    if (==) goto 0x0x806c5eec;
    /* li r4, 0 */ // 0x806C5EE4
    FUN_806A0540(r6, r4); // bl 0x806A0540
    r3 = r30 + 0xd0; // 0x806C5EEC
    /* li r4, -1 */ // 0x806C5EF0
    FUN_8066A1A0(r4, r3, r4); // bl 0x8066A1A0
}