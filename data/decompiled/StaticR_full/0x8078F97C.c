/* Function at 0x8078F97C, size=136 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_8078F97C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x8078F990
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x8078F998
    r29 = r3;
    if (>=) goto 0x0x8078f9c8;
    /* slwi r0, r5, 2 */ // 0x8078F9A4
    r31 = r3 + r0; // 0x8078F9A8
    r3 = *(0x80 + r31); // lwzu @ 0x8078F9AC
    if (==) goto 0x0x8078f9cc;
    if (==) goto 0x0x8078f9cc;
    /* li r4, 0 */ // 0x8078F9BC
    FUN_805E3430(r4); // bl 0x805E3430
    /* b 0x8078f9cc */ // 0x8078F9C4
    /* li r31, 0 */ // 0x8078F9C8
    if (==) goto 0x0x8078f9f0;
    r3 = r29;
    r4 = r31;
    r5 = r30;
    /* li r6, 0 */ // 0x8078F9E0
    FUN_805E3430(r3, r4, r5, r6); // bl 0x805E3430
    r3 = r31;
    /* b 0x8078f9f4 */ // 0x8078F9EC
    /* li r3, 0 */ // 0x8078F9F0
    r0 = *(0x24 + r1); // lwz @ 0x8078F9F4
    r31 = *(0x1c + r1); // lwz @ 0x8078F9F8
    r30 = *(0x18 + r1); // lwz @ 0x8078F9FC
    r29 = *(0x14 + r1); // lwz @ 0x8078FA00
}