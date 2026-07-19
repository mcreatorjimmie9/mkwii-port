/* Function at 0x8089097C, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_8089097C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8089098C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80890994
    r30 = r3;
    if (==) goto 0x0x808909d4;
    /* lis r4, 0 */ // 0x808909A0
    /* li r5, 0xc */ // 0x808909A4
    r4 = r4 + 0; // 0x808909A8
    /* li r6, 2 */ // 0x808909AC
    r3 = r3 + 0x194; // 0x808909B0
    FUN_805E3430(r4, r5, r4, r6, r3); // bl 0x805E3430
    r3 = r30 + 0xac; // 0x808909B8
    /* li r4, -1 */ // 0x808909BC
    FUN_8079A274(r6, r3, r3, r4); // bl 0x8079A274
    if (<=) goto 0x0x808909d4;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
}