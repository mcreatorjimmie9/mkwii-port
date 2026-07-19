/* Function at 0x806EDB78, size=72 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_806EDB78(int r3, int r4)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    *(0x2c + r1) = r31; // stw @ 0x806EDB84
    r31 = r3;
    FUN_805E34E4(r3); // bl 0x805E34E4
    FUN_805E35F8(r3, r3); // bl 0x805E35F8
    *(0x28 + r31) = r3; // stw @ 0x806EDB9C
    /* li r4, -1 */ // 0x806EDBA4
    FUN_805E35B8(r3, r3, r4); // bl 0x805E35B8
    r0 = *(0x34 + r1); // lwz @ 0x806EDBAC
    r31 = *(0x2c + r1); // lwz @ 0x806EDBB0
    return;
}