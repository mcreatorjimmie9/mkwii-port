/* Function at 0x807741D0, size=100 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_807741D0(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r31, 0 */ // 0x807741E0
    *(0x18 + r1) = r30; // stw @ 0x807741E4
    /* li r30, 0 */ // 0x807741E8
    *(0x14 + r1) = r29; // stw @ 0x807741EC
    r29 = r3;
    /* b 0x8077420c */ // 0x807741F4
    r3 = *(0xc + r29); // lwz @ 0x807741F8
    /* lwzx r3, r3, r31 */ // 0x807741FC
    FUN_80771538(); // bl 0x80771538
    r31 = r31 + 4; // 0x80774204
    r30 = r30 + 1; // 0x80774208
    r0 = *(0x10 + r29); // lbz @ 0x8077420C
    if (<) goto 0x0x807741f8;
    r0 = *(0x24 + r1); // lwz @ 0x80774218
    r31 = *(0x1c + r1); // lwz @ 0x8077421C
    r30 = *(0x18 + r1); // lwz @ 0x80774220
    r29 = *(0x14 + r1); // lwz @ 0x80774224
    return;
}