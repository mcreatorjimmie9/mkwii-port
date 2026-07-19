/* Function at 0x805F9C4C, size=132 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_805F9C4C(int r3, int r4, int r7, int r9)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x805F9C60
    r30 = r9;
    *(0x14 + r1) = r29; // stw @ 0x805F9C68
    r29 = r3;
    *(8 + r1) = r4; // stw @ 0x805F9C70
    FUN_805F72FC(); // bl 0x805F72FC
    r31 = r3;
    if (==) goto 0x0x805f9cb0;
    if (==) goto 0x0x805f9ca0;
    r0 = *(8 + r1); // lwz @ 0x805F9C8C
    if (!=) goto 0x0x805f9ca0;
    /* li r0, 1 */ // 0x805F9C98
    *(8 + r1) = r0; // stw @ 0x805F9C9C
    r3 = r29;
    FUN_8061ECD4(r3); // bl 0x8061ECD4
    r4 = *(8 + r1); // lwz @ 0x805F9CA8
    FUN_8061ACE0(r3); // bl 0x8061ACE0
    r3 = r31;
    r31 = *(0x1c + r1); // lwz @ 0x805F9CB4
    r30 = *(0x18 + r1); // lwz @ 0x805F9CB8
    r29 = *(0x14 + r1); // lwz @ 0x805F9CBC
    r0 = *(0x24 + r1); // lwz @ 0x805F9CC0
    return;
}