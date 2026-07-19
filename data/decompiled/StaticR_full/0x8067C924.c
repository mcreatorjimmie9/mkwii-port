/* Function at 0x8067C924, size=96 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_8067C924(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8067C930
    r31 = r3;
    r3 = r3 + 0x174; // 0x8067C938
    FUN_8066DB80(r3); // bl 0x8066DB80
    r3 = *(0xc3c + r31); // lwz @ 0x8067C940
    r0 = r3 + -1; // 0x8067C944
    if (<=) goto 0x0x8067c95c;
    if (==) goto 0x0x8067c968;
    /* b 0x8067c970 */ // 0x8067C958
    r3 = r31;
    FUN_8067CA68(r3); // bl 0x8067CA68
    /* b 0x8067c970 */ // 0x8067C964
    r3 = r31;
    FUN_8067D2E8(r3, r3); // bl 0x8067D2E8
    r0 = *(0x14 + r1); // lwz @ 0x8067C970
    r31 = *(0xc + r1); // lwz @ 0x8067C974
    return;
}