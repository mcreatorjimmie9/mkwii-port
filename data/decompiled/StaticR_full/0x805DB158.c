/* Function at 0x805DB158, size=108 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_805DB158(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r31, 0 */ // 0x805DB168
    *(0x18 + r1) = r30; // stw @ 0x805DB16C
    /* li r30, 0 */ // 0x805DB170
    *(0x14 + r1) = r29; // stw @ 0x805DB174
    r29 = r3;
    /* b 0x805db194 */ // 0x805DB17C
    r3 = *(0x1c + r29); // lwz @ 0x805DB180
    /* lwzx r3, r3, r31 */ // 0x805DB184
    FUN_805DA66C(); // bl 0x805DA66C
    r31 = r31 + 4; // 0x805DB18C
    r30 = r30 + 1; // 0x805DB190
    r0 = *(0x20 + r29); // lwz @ 0x805DB194
    if (<) goto 0x0x805db180;
    /* li r0, 0 */ // 0x805DB1A0
    *(0x28 + r29) = r0; // stb @ 0x805DB1A4
    r31 = *(0x1c + r1); // lwz @ 0x805DB1A8
    r30 = *(0x18 + r1); // lwz @ 0x805DB1AC
    r29 = *(0x14 + r1); // lwz @ 0x805DB1B0
    r0 = *(0x24 + r1); // lwz @ 0x805DB1B4
    return;
}