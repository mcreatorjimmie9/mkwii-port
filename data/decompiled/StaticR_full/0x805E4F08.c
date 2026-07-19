/* Function at 0x805E4F08, size=216 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_805E4F08(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* li r5, 1 */ // 0x805E4F10
    *(0x34 + r1) = r0; // stw @ 0x805E4F14
    r0 = r3 + -9; // 0x805E4F18
    *(0x2c + r1) = r31; // stw @ 0x805E4F20
    if (<=) goto 0x0x805e4f34;
    r0 = r3 + -0x1b; // 0x805E4F28
    if (>) goto 0x0x805e4fc8;
    /* lis r5, 0 */ // 0x805E4F34
    /* slwi r0, r3, 2 */ // 0x805E4F3C
    r5 = r5 + 0; // 0x805E4F40
    /* lwzx r31, r5, r0 */ // 0x805E4F44
    if (==) goto 0x0x805e4f80;
    /* lis r4, 0 */ // 0x805E4F4C
    r4 = r4 + 0; // 0x805E4F54
    *(8 + r1) = r4; // stw @ 0x805E4F58
    FUN_805D8434(r4, r3, r4); // bl 0x805D8434
    /* lis r3, 0 */ // 0x805E4F60
    r3 = *(0 + r3); // lwz @ 0x805E4F68
    FUN_805D91BC(r3, r4); // bl 0x805D91BC
    r4 = r31;
    FUN_805D84B0(r4, r4, r3); // bl 0x805D84B0
    /* b 0x805e4fc4 */ // 0x805E4F7C
    /* lis r3, 0 */ // 0x805E4F80
    r5 = *(0 + r3); // lwz @ 0x805E4F84
    r0 = *(0x36 + r5); // lha @ 0x805E4F88
    if (<) goto 0x0x805e4fb0;
    /* lis r3, 1 */ // 0x805E4F94
    /* clrlwi r4, r0, 0x18 */ // 0x805E4F98
    r0 = r3 + -0x6c10; // 0x805E4F9C
    r0 = r0 * r4; // 0x805E4FA0
    r3 = r5 + r0; // 0x805E4FA4
    r3 = r3 + 0x38; // 0x805E4FA8
    /* b 0x805e4fb4 */ // 0x805E4FAC
    /* li r3, 0 */ // 0x805E4FB0
    /* addis r3, r3, 1 */ // 0x805E4FB4
    r4 = r31;
    r3 = r3 + -0x7008; // 0x805E4FBC
    FUN_805D84B0(r3, r4, r3); // bl 0x805D84B0
    r5 = r3;
    r31 = *(0x2c + r1); // lwz @ 0x805E4FC8
    r3 = r5;
    r0 = *(0x34 + r1); // lwz @ 0x805E4FD0
    return;
}