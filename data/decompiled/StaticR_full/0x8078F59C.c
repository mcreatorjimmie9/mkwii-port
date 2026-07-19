/* Function at 0x8078F59C, size=96 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8078F59C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r6 = r4;
    *(0x14 + r1) = r0; // stw @ 0x8078F5AC
    *(0xc + r1) = r31; // stw @ 0x8078F5B0
    if (>=) goto 0x0x8078f5c8;
    /* slwi r0, r5, 2 */ // 0x8078F5B8
    r4 = r3 + r0; // 0x8078F5BC
    r31 = r4 + 0x80; // 0x8078F5C0
    /* b 0x8078f5cc */ // 0x8078F5C4
    /* li r31, 0 */ // 0x8078F5C8
    if (==) goto 0x0x8078f5ec;
    r5 = r6;
    r4 = r31;
    /* li r6, 0 */ // 0x8078F5DC
    FUN_805E3430(r5, r4, r6); // bl 0x805E3430
    r3 = r31;
    /* b 0x8078f5f0 */ // 0x8078F5E8
    /* li r3, 0 */ // 0x8078F5EC
    r0 = *(0x14 + r1); // lwz @ 0x8078F5F0
    r31 = *(0xc + r1); // lwz @ 0x8078F5F4
}