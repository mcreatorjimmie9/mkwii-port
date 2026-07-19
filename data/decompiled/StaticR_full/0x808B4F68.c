/* Function at 0x808B4F68, size=128 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_808B4F68(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x808B4F78
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x808B4F80
    r30 = r3;
    if (==) goto 0x0x808b4fcc;
    /* li r4, -1 */ // 0x808B4F8C
    r3 = r3 + 0x430; // 0x808B4F90
    FUN_80668158(r4, r3); // bl 0x80668158
    if (==) goto 0x0x808b4fbc;
    /* addic. r3, r30, 0x54 */ // 0x808B4FA0
    if (==) goto 0x0x808b4fb0;
    /* li r4, 0 */ // 0x808B4FA8
    FUN_806498AC(r4); // bl 0x806498AC
    r3 = r30;
    /* li r4, 0 */ // 0x808B4FB4
    FUN_806711C4(r4, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x808b4fcc;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x808B4FD0
    r30 = *(8 + r1); // lwz @ 0x808B4FD4
    r0 = *(0x14 + r1); // lwz @ 0x808B4FD8
    return;
}