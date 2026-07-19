/* Function at 0x80773B34, size=144 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_80773B34(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r31, 4 */ // 0x80773B44
    *(0x18 + r1) = r30; // stw @ 0x80773B48
    /* li r30, 1 */ // 0x80773B4C
    *(0x14 + r1) = r29; // stw @ 0x80773B50
    r29 = r3;
    /* b 0x80773b70 */ // 0x80773B58
    r3 = *(0xc + r29); // lwz @ 0x80773B5C
    /* lwzx r3, r3, r31 */ // 0x80773B60
    FUN_80771188(); // bl 0x80771188
    r31 = r31 + 4; // 0x80773B68
    r30 = r30 + 1; // 0x80773B6C
    r3 = *(0x10 + r29); // lbz @ 0x80773B70
    r0 = r3 + -1; // 0x80773B74
    if (<) goto 0x0x80773b5c;
    r30 = r3 + -2; // 0x80773B80
    /* slwi r31, r30, 2 */ // 0x80773B84
    /* b 0x80773ba0 */ // 0x80773B88
    r3 = *(0xc + r29); // lwz @ 0x80773B8C
    /* lwzx r3, r3, r31 */ // 0x80773B90
    FUN_80771248(); // bl 0x80771248
    r31 = r31 + -4; // 0x80773B98
    r30 = r30 + -1; // 0x80773B9C
    if (>) goto 0x0x80773b8c;
    r0 = *(0x24 + r1); // lwz @ 0x80773BA8
    r31 = *(0x1c + r1); // lwz @ 0x80773BAC
    r30 = *(0x18 + r1); // lwz @ 0x80773BB0
    r29 = *(0x14 + r1); // lwz @ 0x80773BB4
    return;
}