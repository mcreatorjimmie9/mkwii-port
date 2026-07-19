/* Function at 0x805E4968, size=168 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_805E4968(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    *(0x34 + r1) = r0; // stw @ 0x805E4974
    *(0x2c + r1) = r31; // stw @ 0x805E4978
    r31 = r3;
    if (==) goto 0x0x805e49b8;
    /* lis r4, 0 */ // 0x805E4984
    r4 = r4 + 0; // 0x805E498C
    *(8 + r1) = r4; // stw @ 0x805E4990
    FUN_805D8434(r4, r3, r4); // bl 0x805D8434
    /* lis r3, 0 */ // 0x805E4998
    r3 = *(0 + r3); // lwz @ 0x805E49A0
    FUN_805D91BC(r3, r4); // bl 0x805D91BC
    r4 = r31;
    FUN_805D84B0(r4, r4, r3); // bl 0x805D84B0
    /* b 0x805e49fc */ // 0x805E49B4
    /* lis r3, 0 */ // 0x805E49B8
    r5 = *(0 + r3); // lwz @ 0x805E49BC
    r0 = *(0x36 + r5); // lha @ 0x805E49C0
    if (<) goto 0x0x805e49e8;
    /* lis r3, 1 */ // 0x805E49CC
    /* clrlwi r4, r0, 0x18 */ // 0x805E49D0
    r0 = r3 + -0x6c10; // 0x805E49D4
    r0 = r0 * r4; // 0x805E49D8
    r3 = r5 + r0; // 0x805E49DC
    r3 = r3 + 0x38; // 0x805E49E0
    /* b 0x805e49ec */ // 0x805E49E4
    /* li r3, 0 */ // 0x805E49E8
    /* addis r3, r3, 1 */ // 0x805E49EC
    r4 = r31;
    r3 = r3 + -0x7008; // 0x805E49F4
    FUN_805D84B0(r3, r4, r3); // bl 0x805D84B0
    r0 = *(0x34 + r1); // lwz @ 0x805E49FC
    r31 = *(0x2c + r1); // lwz @ 0x805E4A00
    return;
}