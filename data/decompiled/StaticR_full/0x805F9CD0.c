/* Function at 0x805F9CD0, size=156 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_805F9CD0(int r3, int r4, int r5, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x805F9CE4
    r30 = r3;
    *(0x14 + r1) = r29; // stw @ 0x805F9CEC
    if (==) goto 0x0x805f9d4c;
    *(8 + r1) = r4; // stw @ 0x805F9CF4
    FUN_805F72FC(r7); // bl 0x805F72FC
    r29 = r3;
    if (==) goto 0x0x805f9d44;
    r0 = *(8 + r1); // lwz @ 0x805F9D0C
    if (!=) goto 0x0x805f9d44;
    /* lis r4, 0 */ // 0x805F9D18
    r3 = r30;
    r4 = *(0 + r4); // lwz @ 0x805F9D20
    r30 = *(0x34 + r4); // lwz @ 0x805F9D24
    FUN_8061E2D8(r4, r3); // bl 0x8061E2D8
    r31 = r3;
    r3 = r30;
    FUN_8061ECD4(r3); // bl 0x8061ECD4
    /* clrlwi r4, r31, 0x18 */ // 0x805F9D38
    /* li r5, 1 */ // 0x805F9D3C
    FUN_8061ACF8(r3, r5); // bl 0x8061ACF8
    r3 = r29;
    /* b 0x805f9d50 */ // 0x805F9D48
    /* li r3, 0 */ // 0x805F9D4C
    r0 = *(0x24 + r1); // lwz @ 0x805F9D50
    r31 = *(0x1c + r1); // lwz @ 0x805F9D54
    r30 = *(0x18 + r1); // lwz @ 0x805F9D58
    r29 = *(0x14 + r1); // lwz @ 0x805F9D5C
    return;
}