/* Function at 0x8064E9BC, size=92 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_8064E9BC(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r4;
    *(0x18 + r1) = r30; // stw @ 0x8064E9D0
    /* li r30, 0 */ // 0x8064E9D4
    *(0x14 + r1) = r29; // stw @ 0x8064E9D8
    r29 = r3;
    r3 = *(0 + r31); // lwz @ 0x8064E9E0
    if (!=) goto 0x0x8064e9f4;
    /* li r3, -1 */ // 0x8064E9EC
    /* b 0x8064ea18 */ // 0x8064E9F0
    r4 = r29;
    FUN_805E3430(r3, r4); // bl 0x805E3430
    if (!=) goto 0x0x8064ea0c;
    r3 = r30;
    /* b 0x8064ea18 */ // 0x8064EA08
    r31 = r31 + 4; // 0x8064EA0C
    r30 = r30 + 1; // 0x8064EA10
    /* b 0x8064e9e0 */ // 0x8064EA14
}