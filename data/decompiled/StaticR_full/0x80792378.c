/* Function at 0x80792378, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_80792378(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80792388
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80792390
    r30 = r3;
    if (==) goto 0x0x807923d0;
    /* lis r4, 0 */ // 0x8079239C
    /* li r5, 4 */ // 0x807923A0
    r4 = r4 + 0; // 0x807923A4
    /* li r6, 1 */ // 0x807923A8
    r3 = r3 + 0x80; // 0x807923AC
    FUN_805E3430(r4, r5, r4, r6, r3); // bl 0x805E3430
    r3 = r30;
    /* li r4, 0 */ // 0x807923B8
    FUN_805E3430(r6, r3, r3, r4); // bl 0x805E3430
    if (<=) goto 0x0x807923d0;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
}