/* Function at 0x808063E0, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_808063E0(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x808063EC
    r31 = r3;
    /* li r3, 2 */ // 0x808063F4
    FUN_80890A28(r3); // bl 0x80890A28
    /* li r3, 1 */ // 0x808063FC
    /* li r0, 0 */ // 0x80806400
    *(0x145 + r31) = r3; // stb @ 0x80806404
    *(0x148 + r31) = r0; // stw @ 0x80806408
    r31 = *(0xc + r1); // lwz @ 0x8080640C
    r0 = *(0x14 + r1); // lwz @ 0x80806410
    return;
}